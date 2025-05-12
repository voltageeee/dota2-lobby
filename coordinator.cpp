#include "fixups.h"
#include <steam/steam_api_common.h>
#include <protos/base_gcmessages.pb.h>
#include <dlfcn.h>
#include <steam/isteamgamecoordinator.h>
#include "hook_utils.h"
#include <funchook.h>

EGCResults hk_send_message(void* thisptr, uint32 msg_type, const void *pub_data, uint32 cub_data) {
    int real_msg = msg_type & ~0x80000000;
    if (real_msg == k_EMsgGCGameServerInfo && !vltg_fixups::gcmgr.sentserverinfo) {
        vltg_fixups::gcmgr.sentserverinfo = true;
    }

    if (real_msg == k_EMsgGCConnectedPlayers) {
        CMsgConnectedPlayers message;
        vltg_fixups::gcmgr.MessageFromBuffer(message, pub_data, cub_data);
        vltg_fixups::m_lobby.handle_connected_players(message);

        return k_EGCResultOK;
    }
    
    return vltg_fixups::gcmgr.o_sendmessage(thisptr, msg_type, pub_data, cub_data);
}

bool hk_is_message_available(void* thisptr, uint32 *msg_size) {
    if (vltg_fixups::gcmgr.server_needs_gc_notify()) {
        const std::string& mess = vltg_fixups::gcmgr.msg_queue.front();

        uint32_t size = (uint32_t)mess.size();
        *msg_size = size;

        return true;
    }

    return vltg_fixups::gcmgr.o_ismessageavailable(thisptr, msg_size);
}

EGCResults hk_retrieve_message(void* thisptr, uint32 *msg_type, void *pub_dest, uint32 cub_dest, uint32 *msg_size) {
    int real_msg = *msg_type & ~0x80000000;
    if (vltg_fixups::gcmgr.server_needs_gc_notify()) {
        const std::string& msg_ = vltg_fixups::gcmgr.msg_queue.front();

        uint32_t size = (uint32_t)msg_.size();
        *msg_type = *(uint32_t*)msg_.data();
        *msg_size = size;

        if (cub_dest < size) {
            vltg_fixups::msg("cubDest < size\n");
            return k_EGCResultBufferTooSmall;
        }

        memcpy(pub_dest, msg_.data(), size);
        vltg_fixups::gcmgr.msg_queue.pop();

        return k_EGCResultOK;
    }

    return vltg_fixups::gcmgr.o_retrievemessage(thisptr, msg_type, pub_dest, cub_dest, msg_size);
}

void hk_register_callback(class CCallbackBase* pCallback, int iCallback) {
    if (iCallback == 1701 && vltg_fixups::gcmgr.notifier == nullptr) {
        vltg_fixups::gcmgr.notifier = pCallback;
    }

    vltg_fixups::gcmgr.o_registercallback(pCallback, iCallback);
}

void hk_run_callbacks() {
    if (vltg_fixups::gcmgr.server_needs_gc_notify()) {
        const std::string& msg = vltg_fixups::gcmgr.msg_queue.front();

        GCMessageAvailable_t cmsg;
        cmsg.m_nMessageSize = static_cast<uint32_t>(msg.size());

        vltg_fixups::gcmgr.notifier->Run(&cmsg);
    }

    vltg_fixups::gcmgr.o_runcallbacks();
}

void hk_gs_steamapi_activated(void) {
    if (!vltg_fixups::hooked_steam_api) {
        using gethsteamuser_fn = HSteamUser();
        gethsteamuser_fn* gethsteamuser = (gethsteamuser_fn*)dlsym(vltg_fixups::steam_api, "SteamGameServer_GetHSteamUser");
        vltg_fixups::gcmgr.steam_user = gethsteamuser();

        using creategsinterface_fn = void*(HSteamUser user, const char* ver);
        creategsinterface_fn* creategsinterface = (creategsinterface_fn*)dlsym(vltg_fixups::steam_api, "SteamInternal_FindOrCreateGameServerInterface");
        void* gc_steam_iface = creategsinterface(vltg_fixups::gcmgr.steam_user, "SteamGameCoordinator001");
        void** gc_steam_vtable = *(void***)gc_steam_iface;

        patch_vtable_entry(gc_steam_vtable, 0, (void*)hk_send_message, (void**)&vltg_fixups::gcmgr.o_sendmessage);
        patch_vtable_entry(gc_steam_vtable, 1, (void*)hk_is_message_available, (void**)&vltg_fixups::gcmgr.o_ismessageavailable);
        patch_vtable_entry(gc_steam_vtable, 2, (void*)hk_retrieve_message, (void**)&vltg_fixups::gcmgr.o_retrievemessage);
        void* registercallback = dlsym(vltg_fixups::steam_api, "SteamAPI_RegisterCallback");
        void* runcallbacks = dlsym(vltg_fixups::steam_api, "SteamGameServer_RunCallbacks");
        funchook_wrap(registercallback, (void*)hk_register_callback, (void**)&vltg_fixups::gcmgr.o_registercallback);
        funchook_wrap(runcallbacks, (void*)hk_run_callbacks, (void**)&vltg_fixups::gcmgr.o_runcallbacks);

        vltg_fixups::msg("hk_gs_steamapi_activated: +\n");
        vltg_fixups::hooked_steam_api = true;
    }
    return vltg_fixups::gcmgr.o_steamapiactivated();
}

void coordinator::inject_gc_message(std::string msg) {
    this->msg_queue.push(msg);
}

void coordinator::init_gc() {
        using createinterface_fn = void*(const char* id, void* ver);
        createinterface_fn* createinterface = (createinterface_fn*)dlsym(vltg_fixups::server, "CreateInterface");  
        void* server_iface = createinterface("Source2Server001", nullptr);
        void** server_vtable = *(void***)server_iface;
        patch_vtable_entry(server_vtable, 42, (void*)hk_gs_steamapi_activated, (void**)&this->o_steamapiactivated);
}
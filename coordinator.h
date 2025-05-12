#include <protos/dota_gcmessages_common_match_management.pb.h>
#include <queue>
#include <stdlib.h>
#include <steam/steam_api_common.h>
#include <steam/isteamgamecoordinator.h>

using sendmessage_fn = EGCResults(void* thisptr, uint32 msg_type, const void *pub_data, uint32 cub_data);
using ismessageavailable_fn = bool(void* thisptr, uint32 *msg_size);
using retrievemessage_fn = EGCResults(void* thisptr, uint32 *msg_type, void *pub_dest, uint32 cub_dest, uint32 *msg_size);
using steamapiactivated_fn = void(void);
using registercallback_fn = void(*)(class CCallbackBase* pCallback, int iCallback);
using runcallbacks_fn = void(*)();

class coordinator {
    public:
        bool lobby_injected = false;
        bool sentserverinfo = false;
        int game_version;
        CCallbackBase* notifier = nullptr;
        HSteamUser steam_user;
        CSODOTALobby m_lobby;
        std::queue<std::string> msg_queue;
        sendmessage_fn* o_sendmessage = nullptr;
        ismessageavailable_fn* o_ismessageavailable = nullptr;
        retrievemessage_fn* o_retrievemessage = nullptr;
        steamapiactivated_fn* o_steamapiactivated = nullptr;
        registercallback_fn o_registercallback = nullptr;
        runcallbacks_fn o_runcallbacks = nullptr;

        bool server_needs_gc_notify() const { return !msg_queue.empty(); }
        void init_gc();
        void inject_gc_message(std::string msg);

        inline bool HeaderFromBuffer(CMsgProtoBufHeader &hdr, const void *pubData, uint32 cubData)
        {
            int headerSize = *(int *)((intptr_t)pubData + 4);
            return hdr.ParsePartialFromArray((const void *)((intptr_t)pubData + 8), headerSize);
        }
    
        template<typename T>
        inline bool MessageFromBuffer(T &msg, const void *pubData, uint32 cubData)
        {
            int headerSize = *(int *)((intptr_t)pubData + 4);
            return msg.ParseFromArray((const void *)((intptr_t)pubData + 8 + headerSize), cubData - headerSize - 8);
        }
};
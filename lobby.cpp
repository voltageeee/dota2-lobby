#include <protos/base_gcmessages.pb.h>
#include <protos/dota_gcmessages_common_match_management.pb.h>
#include <protos/gcsystemmsgs.pb.h>
#include <protos/dota_gcmessages_server.pb.h>
#include <protos/dota_gcmessages_msgid.pb.h>
#include <protos/dota_gcmessages_client_match_management.pb.h>
#include "lobby.h"
#include "fixups.h"
#include <cstdint>

void lobby::init_lobby() {
    if (vltg_fixups::gcmgr.lobby_injected) {
        return;
    }
    {
        this->m_lobby.set_lobby_id(9999);
        this->m_lobby.set_match_id(9999);
        this->m_lobby.set_state(CSODOTALobby_State_UI);
        this->m_lobby.set_game_state(DOTA_GAMERULES_STATE_INIT);
        this->m_lobby.set_matchgroup(1);
        this->m_lobby.set_dota_tv_delay(LobbyDotaTV_10);
        this->m_lobby.set_lobby_type(CSODOTALobby_LobbyType_CASUAL_MATCH);
        this->m_lobby.set_game_mode(DOTA_GAMEMODE_TURBO);
        this->m_lobby.set_fill_with_bots(true);
        this->m_lobby.set_bot_difficulty_dire(BOT_DIFFICULTY_UNFAIR);
        this->m_lobby.set_bot_difficulty_radiant(BOT_DIFFICULTY_UNFAIR);
        this->m_lobby.set_custom_map_name("dota");
        this->lobby_add_player(DOTA_GC_TEAM_GOOD_GUYS, 76561198969757101, 1, DOTA_LEAVER_DISCONNECTED);
        this->m_lobby.set_allow_cheats(true);
        // vltg_fixups::m_lobby.lobby_add_player(DOTA_GC_TEAM_BAD_GUYS, 76561198902325798, 2, DOTA_LEAVER_DISCONNECTED);
        this->m_lobby.add_member_indices(0);
        /// this->m_lobby.add_member_indices(1);


        CMsgSOCacheSubscribed sub;
        auto *pObject = sub.add_objects();
        pObject->set_type_id(2004);

        sub.mutable_owner_soid()->set_type(3);
        sub.mutable_owner_soid()->set_id(9999);
        sub.set_version(9999);

        std::string data;
        this->m_lobby.SerializeToString(&data);
        pObject->add_object_data(data);

        uint32 emsg = k_ESOMsg_CacheSubscribed | 0x80000000;
        int header = 0;

        std::string message;
        message.append((const char*)&emsg, sizeof(uint32));
        message.append((const char*)&header, sizeof(int));
        sub.AppendToString(&message);

        vltg_fixups::msg("adding CacheSubscribed to queue\n");
        vltg_fixups::gcmgr.inject_gc_message(message);
    }

    {
        this->m_lobby.set_state(CSODOTALobby_State_SERVERASSIGN);
		this->m_lobby.set_allow_spectating(true);

		this->m_lobby.set_leagueid(1);

		CMsgSOSingleObject obj;
		obj.set_type_id(2004);
		obj.set_version(9999);
		obj.set_service_id(0);
		obj.mutable_owner_soid()->set_type(3);
		obj.mutable_owner_soid()->set_id(9999);
		this->m_lobby.SerializeToString(obj.mutable_object_data());

		uint32 emsg = k_ESOMsg_Create | 0x80000000;
		int headerSize = 0;

		std::string message;
		message.append((const char *)&emsg, sizeof(uint32));
		message.append((const char *)&headerSize, sizeof(int));
		obj.AppendToString(&message);

		vltg_fixups::msg("adding SOCreate message to the queue\n");

		vltg_fixups::gcmgr.inject_gc_message(message);
    }

    {
		this->m_lobby.set_connect("localhost");

		this->m_lobby.set_state(CSODOTALobby_State_SERVERSETUP);

		CMsgSOMultipleObjects objs;
		auto obj = objs.add_objects_modified();
		obj->set_type_id(2004);
		this->m_lobby.SerializeToString(obj->mutable_object_data());
		objs.set_version(9999);
		objs.set_service_id(0);
		objs.mutable_owner_soid()->set_type(3);
		objs.mutable_owner_soid()->set_id(9999);

		uint32 emsg = k_ESOMsg_UpdateMultiple | 0x80000000;
		int headerSize = 0;

		std::string message;
		message.append((const char *)&emsg, sizeof(uint32));
		message.append((const char *)&headerSize, sizeof(int));
		objs.AppendToString(&message);

		vltg_fixups::msg("adding SOUpdateMultiple message to the queue\n");

		vltg_fixups::gcmgr.inject_gc_message(message);
    }

    vltg_fixups::gcmgr.lobby_injected = true;
}

void lobby::send_lobby_so_update() {
    CMsgSOMultipleObjects objs;
    auto obj = objs.add_objects_modified();
    obj->set_type_id(2004);
    this->m_lobby.SerializeToString(obj->mutable_object_data());
    objs.set_version(9999);
    objs.set_service_id(0);
    objs.mutable_owner_soid()->set_type(3);
    objs.mutable_owner_soid()->set_id(9999);

    uint32 emsg = k_ESOMsg_UpdateMultiple | 0x80000000;
    int headerSize = 0;

    std::string message;
    message.append((const char*)&emsg, sizeof(uint32));
    message.append((const char*)&headerSize, sizeof(int));
    objs.AppendToString(&message);

    vltg_fixups::msg("adding SOUpdateMultiple message to the queue\n");

    vltg_fixups::gcmgr.inject_gc_message(message);
}

void lobby::lobby_add_player(DOTA_GC_TEAM team, uint64_t steamid, int slot, DOTALeaverStatus_t leaver_status) {
    auto* pMember = this->m_lobby.add_all_members();
    pMember->set_team(team);
    pMember->set_id(steamid);
    pMember->set_slot(slot);
    pMember->set_leaver_status(leaver_status);
}

void lobby::handle_connected_players(const CMsgConnectedPlayers& msg) {
    for (auto& connected : msg.connected_players()) {
        for (auto& p : *this->m_lobby.mutable_all_members()) {
            if (p.id() == connected.steam_id()) {
                p.set_leaver_status(DOTA_LEAVER_NONE);
                p.set_hero_id(connected.hero_id());
                break;
            }
        }
    }

    this->m_lobby.set_first_blood_happened(msg.first_blood_happened());
    this->m_lobby.set_game_state(msg.game_state());
    this->m_lobby.set_state(CSODOTALobby_State_RUN);

    this->send_lobby_so_update();
}
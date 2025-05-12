#pragma once
#include <protos/dota_gcmessages_common_match_management.pb.h>
#include <protos/gcsystemmsgs.pb.h>
#include <protos/dota_gcmessages_server.pb.h>
#include <protos/dota_gcmessages_msgid.pb.h>
#include <protos/dota_gcmessages_client_match_management.pb.h>
#include <protos/base_gcmessages.pb.h>

class lobby {
    public:
        int radiant_player_count = 0;
        int dire_player_count = 0;
        CSODOTALobby m_lobby;

        void init_lobby();
        void lobby_add_player(DOTA_GC_TEAM team, uint64_t steamid, int slot, DOTALeaverStatus_t leaver_status);
        void handle_connected_players(const CMsgConnectedPlayers& msg);
        void send_lobby_so_update();
};
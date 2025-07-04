// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: network_connection.proto

#include "network_connection.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
static constexpr ::PROTOBUF_NAMESPACE_ID::Metadata* file_level_metadata_network_5fconnection_2eproto = nullptr;
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_network_5fconnection_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_network_5fconnection_2eproto = nullptr;
const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_network_5fconnection_2eproto::offsets[1] = {};
static constexpr ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema* schemas = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::Message* const* file_default_instances = nullptr;

const char descriptor_table_protodef_network_5fconnection_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\030network_connection.proto\032 google/proto"
  "buf/descriptor.proto*\262K\n\033ENetworkDisconn"
  "ectionReason\022\036\n\032NETWORK_DISCONNECT_INVAL"
  "ID\020\000\022\037\n\033NETWORK_DISCONNECT_SHUTDOWN\020\001\022F\n"
  "%NETWORK_DISCONNECT_DISCONNECT_BY_USER\020\002"
  "\032\033\242\324\030\027#GameUI_Disconnect_User\022J\n\'NETWORK"
  "_DISCONNECT_DISCONNECT_BY_SERVER\020\003\032\035\242\324\030\031"
  "#GameUI_Disconnect_Server\022B\n\027NETWORK_DIS"
  "CONNECT_LOST\020\004\032%\242\324\030!#GameUI_Disconnect_C"
  "onnectionLost\022J\n\033NETWORK_DISCONNECT_OVER"
  "FLOW\020\005\032)\242\324\030%#GameUI_Disconnect_Connectio"
  "nOverflow\022I\n\037NETWORK_DISCONNECT_STEAM_BA"
  "NNED\020\006\032$\242\324\030 #GameUI_Disconnect_SteamIDBa"
  "nned\022G\n\036NETWORK_DISCONNECT_STEAM_INUSE\020\007"
  "\032#\242\324\030\037#GameUI_Disconnect_SteamIDInUse\022G\n"
  "\037NETWORK_DISCONNECT_STEAM_TICKET\020\010\032\"\242\324\030\036"
  "#GameUI_Disconnect_SteamTicket\022E\n\036NETWOR"
  "K_DISCONNECT_STEAM_LOGON\020\t\032!\242\324\030\035#GameUI_"
  "Disconnect_SteamLogon\022M\n&NETWORK_DISCONN"
  "ECT_STEAM_AUTHCANCELLED\020\n\032!\242\324\030\035#GameUI_D"
  "isconnect_SteamLogon\022O\n(NETWORK_DISCONNE"
  "CT_STEAM_AUTHALREADYUSED\020\013\032!\242\324\030\035#GameUI_"
  "Disconnect_SteamLogon\022K\n$NETWORK_DISCONN"
  "ECT_STEAM_AUTHINVALID\020\014\032!\242\324\030\035#GameUI_Dis"
  "connect_SteamLogon\022I\n$NETWORK_DISCONNECT"
  "_STEAM_VACBANSTATE\020\r\032\037\242\324\030\033#GameUI_Discon"
  "nect_SteamVAC\022S\n,NETWORK_DISCONNECT_STEA"
  "M_LOGGED_IN_ELSEWHERE\020\016\032!\242\324\030\035#GameUI_Dis"
  "connect_SteamInUse\022T\n+NETWORK_DISCONNECT"
  "_STEAM_VAC_CHECK_TIMEDOUT\020\017\032#\242\324\030\037#GameUI"
  "_Disconnect_SteamTimeOut\022I\n NETWORK_DISC"
  "ONNECT_STEAM_DROPPED\020\020\032#\242\324\030\037#GameUI_Disc"
  "onnect_SteamDropped\022M\n\"NETWORK_DISCONNEC"
  "T_STEAM_OWNERSHIP\020\021\032%\242\324\030!#GameUI_Disconn"
  "ect_SteamOwnership\022U\n&NETWORK_DISCONNECT"
  "_SERVERINFO_OVERFLOW\020\022\032)\242\324\030%#GameUI_Disc"
  "onnect_ServerInfoOverflow\022K\n#NETWORK_DIS"
  "CONNECT_TICKMSG_OVERFLOW\020\023\032\"\242\324\030\036#GameUI_"
  "Disconnect_TickMessage\022Y\n*NETWORK_DISCON"
  "NECT_STRINGTABLEMSG_OVERFLOW\020\024\032)\242\324\030%#Gam"
  "eUI_Disconnect_StringTableMessage\022S\n\'NET"
  "WORK_DISCONNECT_DELTAENTMSG_OVERFLOW\020\025\032&"
  "\242\324\030\"#GameUI_Disconnect_DeltaEntMessage\022Q"
  "\n&NETWORK_DISCONNECT_TEMPENTMSG_OVERFLOW"
  "\020\026\032%\242\324\030!#GameUI_Disconnect_TempEntMessag"
  "e\022O\n%NETWORK_DISCONNECT_SOUNDSMSG_OVERFL"
  "OW\020\027\032$\242\324\030 #GameUI_Disconnect_SoundsMessa"
  "ge\022P\n#NETWORK_DISCONNECT_SNAPSHOTOVERFLO"
  "W\020\030\032\'\242\324\030##GameUI_Disconnect_SnapshotOver"
  "flow\022J\n NETWORK_DISCONNECT_SNAPSHOTERROR"
  "\020\031\032$\242\324\030 #GameUI_Disconnect_SnapshotError"
  "\022P\n#NETWORK_DISCONNECT_RELIABLEOVERFLOW\020"
  "\032\032\'\242\324\030##GameUI_Disconnect_ReliableOverfl"
  "ow\022N\n\037NETWORK_DISCONNECT_BADDELTATICK\020\033\032"
  ")\242\324\030%#GameUI_Disconnect_BadClientDeltaTi"
  "ck\022H\n\037NETWORK_DISCONNECT_NOMORESPLITS\020\034\032"
  "#\242\324\030\037#GameUI_Disconnect_NoMoreSplits\022@\n\033"
  "NETWORK_DISCONNECT_TIMEDOUT\020\035\032\037\242\324\030\033#Game"
  "UI_Disconnect_TimedOut\022H\n\037NETWORK_DISCON"
  "NECT_DISCONNECTED\020\036\032#\242\324\030\037#GameUI_Disconn"
  "ect_Disconnected\022H\n\037NETWORK_DISCONNECT_L"
  "EAVINGSPLIT\020\037\032#\242\324\030\037#GameUI_Disconnect_Le"
  "avingSplit\022X\n\'NETWORK_DISCONNECT_DIFFERE"
  "NTCLASSTABLES\020 \032+\242\324\030\'#GameUI_Disconnect_"
  "DifferentClassTables\022P\n#NETWORK_DISCONNE"
  "CT_BADRELAYPASSWORD\020!\032\'\242\324\030##GameUI_Disco"
  "nnect_BadRelayPassword\022X\n\'NETWORK_DISCON"
  "NECT_BADSPECTATORPASSWORD\020\"\032+\242\324\030\'#GameUI"
  "_Disconnect_BadSpectatorPassword\022L\n!NETW"
  "ORK_DISCONNECT_HLTVRESTRICTED\020#\032%\242\324\030!#Ga"
  "meUI_Disconnect_HLTVRestricted\022H\n\037NETWOR"
  "K_DISCONNECT_NOSPECTATORS\020$\032#\242\324\030\037#GameUI"
  "_Disconnect_NoSpectators\022N\n\"NETWORK_DISC"
  "ONNECT_HLTVUNAVAILABLE\020%\032&\242\324\030\"#GameUI_Di"
  "sconnect_HLTVUnavailable\022@\n\033NETWORK_DISC"
  "ONNECT_HLTVSTOP\020&\032\037\242\324\030\033#GameUI_Disconnec"
  "t_HLTVStop\022<\n\031NETWORK_DISCONNECT_KICKED\020"
  "\'\032\035\242\324\030\031#GameUI_Disconnect_Kicked\022@\n\033NETW"
  "ORK_DISCONNECT_BANADDED\020(\032\037\242\324\030\033#GameUI_D"
  "isconnect_BanAdded\022H\n\037NETWORK_DISCONNECT"
  "_KICKBANADDED\020)\032#\242\324\030\037#GameUI_Disconnect_"
  "KickBanAdded\022D\n\035NETWORK_DISCONNECT_HLTVD"
  "IRECT\020*\032!\242\324\030\035#GameUI_Disconnect_HLTVDire"
  "ct\022\\\n)NETWORK_DISCONNECT_PURESERVER_CLIE"
  "NTEXTRA\020+\032-\242\324\030)#GameUI_Disconnect_PureSe"
  "rver_ClientExtra\022V\n&NETWORK_DISCONNECT_P"
  "URESERVER_MISMATCH\020,\032*\242\324\030&#GameUI_Discon"
  "nect_PureServer_Mismatch\022>\n\032NETWORK_DISC"
  "ONNECT_USERCMD\020-\032\036\242\324\030\032#GameUI_Disconnect"
  "_UserCmd\022N\n#NETWORK_DISCONNECT_REJECTED_"
  "BY_GAME\020.\032%\242\324\030!#GameUI_Disconnect_Reject"
  "edByGame\022T\n&NETWORK_DISCONNECT_MESSAGE_P"
  "ARSE_ERROR\020/\032(\242\324\030$#GameUI_Disconnect_Mes"
  "sageParseError\022X\n(NETWORK_DISCONNECT_INV"
  "ALID_MESSAGE_ERROR\0200\032*\242\324\030&#GameUI_Discon"
  "nect_InvalidMessageError\022T\n&NETWORK_DISC"
  "ONNECT_BAD_SERVER_PASSWORD\0201\032(\242\324\030$#GameU"
  "I_Disconnect_BadServerPassword\0221\n-NETWOR"
  "K_DISCONNECT_DIRECT_CONNECT_RESERVATION\020"
  "2\022S\n%NETWORK_DISCONNECT_CONNECTION_FAILU"
  "RE\0203\032(\242\324\030$#GameUI_Disconnect_ConnectionF"
  "ailure\022Y\n)NETWORK_DISCONNECT_NO_PEER_GRO"
  "UP_HANDLERS\0204\032*\242\324\030&#GameUI_Disconnect_No"
  "PeerGroupHandlers\022#\n\037NETWORK_DISCONNECT_"
  "RECONNECTION\0205\022H\n\037NETWORK_DISCONNECT_LOO"
  "PSHUTDOWN\0206\032#\242\324\030\037#GameUI_Disconnect_Loop"
  "Shutdown\022L\n!NETWORK_DISCONNECT_LOOPDEACT"
  "IVATE\0207\032%\242\324\030!#GameUI_Disconnect_LoopDeac"
  "tivate\022H\n\037NETWORK_DISCONNECT_HOST_ENDGAM"
  "E\0208\032#\242\324\030\037#GameUI_Disconnect_Host_EndGame"
  "\022\\\n*NETWORK_DISCONNECT_LOOP_LEVELLOAD_AC"
  "TIVATE\0209\032,\242\324\030(#GameUI_Disconnect_LoopLev"
  "elLoadActivate\022V\n\'NETWORK_DISCONNECT_CRE"
  "ATE_SERVER_FAILED\020:\032)\242\324\030%#GameUI_Disconn"
  "ect_CreateServerFailed\022D\n\032NETWORK_DISCON"
  "NECT_EXITING\020;\032$\242\324\030 #GameUI_Disconnect_E"
  "xitingEngine\022T\n)NETWORK_DISCONNECT_REQUE"
  "ST_HOSTSTATE_IDLE\020<\032%\242\324\030!#GameUI_Disconn"
  "ect_Request_HSIdle\022\\\n.NETWORK_DISCONNECT"
  "_REQUEST_HOSTSTATE_HLTVRELAY\020=\032(\242\324\030$#Gam"
  "eUI_Disconnect_Request_HLTVRelay\022Q\n*NETW"
  "ORK_DISCONNECT_CLIENT_CONSISTENCY_FAIL\020>"
  "\032!\242\324\030\035#GameUI_ClientConsistencyFail\022Q\n+N"
  "ETWORK_DISCONNECT_CLIENT_UNABLE_TO_CRC_M"
  "AP\020\?\032 \242\324\030\034#GameUI_ClientUnableToCRCMap\022="
  "\n NETWORK_DISCONNECT_CLIENT_NO_MAP\020@\032\027\242\324"
  "\030\023#GameUI_ClientNoMap\022K\n\'NETWORK_DISCONN"
  "ECT_CLIENT_DIFFERENT_MAP\020A\032\036\242\324\030\032#GameUI_"
  "ClientDifferentMap\022M\n(NETWORK_DISCONNECT"
  "_SERVER_REQUIRES_STEAM\020B\032\037\242\324\030\033#GameUI_Se"
  "rverRequireSteams\022M\n\"NETWORK_DISCONNECT_"
  "STEAM_DENY_MISC\020C\032%\242\324\030!#GameUI_Disconnec"
  "t_SteamDeny_Misc\022_\n,NETWORK_DISCONNECT_S"
  "TEAM_DENY_BAD_ANTI_CHEAT\020D\032-\242\324\030)#GameUI_"
  "Disconnect_SteamDeny_BadAntiCheat\022M\n\"NET"
  "WORK_DISCONNECT_SERVER_SHUTDOWN\020E\032%\242\324\030!#"
  "GameUI_Disconnect_ServerShutdown\022b\n,NETW"
  "ORK_DISCONNECT_SPLITPACKET_SEND_OVERFLOW"
  "\020F\0320\242\324\030,#GameUI_Disconnect_Splitpacket_S"
  "end_Overflow\022U\n&NETWORK_DISCONNECT_REPLA"
  "Y_INCOMPATIBLE\020G\032)\242\324\030%#GameUI_Disconnect"
  "_ReplayIncompatible\022Z\n+NETWORK_DISCONNEC"
  "T_CONNECT_REQUEST_TIMEDOUT\020H\032)\242\324\030%#GameU"
  "I_Disconnect_ConnectionTimedout\022U\n&NETWO"
  "RK_DISCONNECT_SERVER_INCOMPATIBLE\020I\032)\242\324\030"
  "%#GameUI_Disconnect_ServerIncompatible\022^"
  "\n*NETWORK_DISCONNECT_LOCALPROBLEM_MANYRE"
  "LAYS\020J\032.\242\324\030*#GameUI_Disconnect_LocalProb"
  "lem_ManyRelays\022z\n8NETWORK_DISCONNECT_LOC"
  "ALPROBLEM_HOSTEDSERVERPRIMARYRELAY\020K\032<\242\324"
  "\0308#GameUI_Disconnect_LocalProblem_Hosted"
  "ServerPrimaryRelay\022d\n-NETWORK_DISCONNECT"
  "_LOCALPROBLEM_NETWORKCONFIG\020L\0321\242\324\030-#Game"
  "UI_Disconnect_LocalProblem_NetworkConfig"
  "\022T\n%NETWORK_DISCONNECT_LOCALPROBLEM_OTHE"
  "R\020M\032)\242\324\030%#GameUI_Disconnect_LocalProblem"
  "_Other\022S\n!NETWORK_DISCONNECT_REMOTE_TIME"
  "OUT\020O\032,\242\324\030(#GameUI_Disconnect_RemoteProb"
  "lem_Timeout\022h\n,NETWORK_DISCONNECT_REMOTE"
  "_TIMEOUT_CONNECTING\020P\0326\242\324\0302#GameUI_Disco"
  "nnect_RemoteProblem_TimeoutConnecting\022O\n"
  "\037NETWORK_DISCONNECT_REMOTE_OTHER\020Q\032*\242\324\030&"
  "#GameUI_Disconnect_RemoteProblem_Other\022U"
  "\n\"NETWORK_DISCONNECT_REMOTE_BADCRYPT\020R\032-"
  "\242\324\030)#GameUI_Disconnect_RemoteProblem_Bad"
  "Crypt\022Z\n(NETWORK_DISCONNECT_REMOTE_CERTN"
  "OTTRUSTED\020S\032,\242\324\030(#GameUI_Disconnect_Remo"
  "teProblem_BadCert\022>\n\032NETWORK_DISCONNECT_"
  "UNUSUAL\020T\032\036\242\324\030\032#GameUI_Disconnect_Unusua"
  "l\022K\n!NETWORK_DISCONNECT_INTERNAL_ERROR\020U"
  "\032$\242\324\030 #GameUI_Disconnect_InternalError\022Q"
  "\n&NETWORK_DISCONNECT_REJECT_BADCHALLENGE"
  "\020\200\001\032$\242\324\030 #GameUI_ServerRejectBadChalleng"
  "e\022A\n!NETWORK_DISCONNECT_REJECT_NOLOBBY\020\201"
  "\001\032\031\242\324\030\025#GameUI_ServerNoLobby\022O\n(NETWORK_"
  "DISCONNECT_REJECT_BACKGROUND_MAP\020\202\001\032 \242\324\030"
  "\034#Valve_Reject_Background_Map\022M\n\'NETWORK"
  "_DISCONNECT_REJECT_SINGLE_PLAYER\020\203\001\032\037\242\324\030"
  "\033#Valve_Reject_Single_Player\022I\n%NETWORK_"
  "DISCONNECT_REJECT_HIDDEN_GAME\020\204\001\032\035\242\324\030\031#V"
  "alve_Reject_Hidden_Game\022O\n%NETWORK_DISCO"
  "NNECT_REJECT_LANRESTRICT\020\205\001\032#\242\324\030\037#GameUI"
  "_ServerRejectLANRestrict\022O\n%NETWORK_DISC"
  "ONNECT_REJECT_BADPASSWORD\020\206\001\032#\242\324\030\037#GameU"
  "I_ServerRejectBadPassword\022M\n$NETWORK_DIS"
  "CONNECT_REJECT_SERVERFULL\020\207\001\032\"\242\324\030\036#GameU"
  "I_ServerRejectServerFull\022]\n,NETWORK_DISC"
  "ONNECT_REJECT_INVALIDRESERVATION\020\210\001\032*\242\324\030"
  "&#GameUI_ServerRejectInvalidReservation\022"
  "S\n\'NETWORK_DISCONNECT_REJECT_FAILEDCHANN"
  "EL\020\211\001\032%\242\324\030!#GameUI_ServerRejectFailedCha"
  "nnel\022W\n,NETWORK_DISCONNECT_REJECT_CONNEC"
  "T_FROM_LOBBY\020\212\001\032$\242\324\030 #Valve_Reject_Conne"
  "ct_From_Lobby\022W\n,NETWORK_DISCONNECT_REJE"
  "CT_RESERVED_FOR_LOBBY\020\213\001\032$\242\324\030 #Valve_Rej"
  "ect_Reserved_For_Lobby\022Z\n*NETWORK_DISCON"
  "NECT_REJECT_INVALIDKEYLENGTH\020\214\001\032)\242\324\030%#Ga"
  "meUI_ServerReject_InvalidKeyLength\022O\n%NE"
  "TWORK_DISCONNECT_REJECT_OLDPROTOCOL\020\215\001\032#"
  "\242\324\030\037#GameUI_ServerRejectOldProtocol\022O\n%N"
  "ETWORK_DISCONNECT_REJECT_NEWPROTOCOL\020\216\001\032"
  "#\242\324\030\037#GameUI_ServerRejectNewProtocol\022[\n+"
  "NETWORK_DISCONNECT_REJECT_INVALIDCONNECT"
  "ION\020\217\001\032)\242\324\030%#GameUI_ServerRejectInvalidC"
  "onnection\022U\n(NETWORK_DISCONNECT_REJECT_I"
  "NVALIDCERTLEN\020\220\001\032&\242\324\030\"#GameUI_ServerReje"
  "ctInvalidCertLen\022_\n-NETWORK_DISCONNECT_R"
  "EJECT_INVALIDSTEAMCERTLEN\020\221\001\032+\242\324\030\'#GameU"
  "I_ServerRejectInvalidSteamCertLen\022C\n\037NET"
  "WORK_DISCONNECT_REJECT_STEAM\020\222\001\032\035\242\324\030\031#Ga"
  "meUI_ServerRejectSteam\022Q\n,NETWORK_DISCON"
  "NECT_REJECT_SERVERAUTHDISABLED\020\223\001\032\036\242\324\030\032#"
  "GameUI_ServerAuthDisabled\022Y\n0NETWORK_DIS"
  "CONNECT_REJECT_SERVERCDKEYAUTHINVALID\020\224\001"
  "\032\"\242\324\030\036#GameUI_ServerCDKeyAuthInvalid\022E\n "
  "NETWORK_DISCONNECT_REJECT_BANNED\020\225\001\032\036\242\324\030"
  "\032#GameUI_ServerRejectBanned\022T\n%NETWORK_D"
  "ISCONNECT_KICKED_TEAMKILLING\020\226\001\032(\242\324\030$#Pl"
  "ayer_DisconnectReason_TeamKilling\022N\n\"NET"
  "WORK_DISCONNECT_KICKED_TK_START\020\227\001\032%\242\324\030!"
  "#Player_DisconnectReason_TK_Start\022^\n*NET"
  "WORK_DISCONNECT_KICKED_UNTRUSTEDACCOUNT\020"
  "\230\001\032-\242\324\030)#Player_DisconnectReason_Untrust"
  "edAccount\022^\n*NETWORK_DISCONNECT_KICKED_C"
  "ONVICTEDACCOUNT\020\231\001\032-\242\324\030)#Player_Disconne"
  "ctReason_ConvictedAccount\022d\n-NETWORK_DIS"
  "CONNECT_KICKED_COMPETITIVECOOLDOWN\020\232\001\0320\242"
  "\324\030,#Player_DisconnectReason_CompetitiveC"
  "ooldown\022T\n%NETWORK_DISCONNECT_KICKED_TEA"
  "MHURTING\020\233\001\032(\242\324\030$#Player_DisconnectReaso"
  "n_TeamHurting\022Z\n(NETWORK_DISCONNECT_KICK"
  "ED_HOSTAGEKILLING\020\234\001\032+\242\324\030\'#Player_Discon"
  "nectReason_HostageKilling\022N\n\"NETWORK_DIS"
  "CONNECT_KICKED_VOTEDOFF\020\235\001\032%\242\324\030!#Player_"
  "DisconnectReason_VotedOff\022F\n\036NETWORK_DIS"
  "CONNECT_KICKED_IDLE\020\236\001\032!\242\324\030\035#Player_Disc"
  "onnectReason_Idle\022L\n!NETWORK_DISCONNECT_"
  "KICKED_SUICIDE\020\237\001\032$\242\324\030 #Player_Disconnec"
  "tReason_Suicide\022V\n&NETWORK_DISCONNECT_KI"
  "CKED_NOSTEAMLOGIN\020\240\001\032)\242\324\030%#Player_Discon"
  "nectReason_NoSteamLogin\022X\n\'NETWORK_DISCO"
  "NNECT_KICKED_NOSTEAMTICKET\020\241\001\032*\242\324\030&#Play"
  "er_DisconnectReason_NoSteamTicket:E\n\030net"
  "work_connection_token\022!.google.protobuf."
  "EnumValueOptions\030\304\212\003 \001(\tB\003\200\001\000"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_network_5fconnection_2eproto_deps[1] = {
  &::descriptor_table_google_2fprotobuf_2fdescriptor_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_network_5fconnection_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_network_5fconnection_2eproto = {
  false, false, 9789, descriptor_table_protodef_network_5fconnection_2eproto, "network_connection.proto", 
  &descriptor_table_network_5fconnection_2eproto_once, descriptor_table_network_5fconnection_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_network_5fconnection_2eproto::offsets,
  file_level_metadata_network_5fconnection_2eproto, file_level_enum_descriptors_network_5fconnection_2eproto, file_level_service_descriptors_network_5fconnection_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK ::PROTOBUF_NAMESPACE_ID::Metadata
descriptor_table_network_5fconnection_2eproto_metadata_getter(int index) {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_network_5fconnection_2eproto);
  return descriptor_table_network_5fconnection_2eproto.file_level_metadata[index];
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_network_5fconnection_2eproto(&descriptor_table_network_5fconnection_2eproto);
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ENetworkDisconnectionReason_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_network_5fconnection_2eproto);
  return file_level_enum_descriptors_network_5fconnection_2eproto[0];
}
bool ENetworkDisconnectionReason_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
    case 31:
    case 32:
    case 33:
    case 34:
    case 35:
    case 36:
    case 37:
    case 38:
    case 39:
    case 40:
    case 41:
    case 42:
    case 43:
    case 44:
    case 45:
    case 46:
    case 47:
    case 48:
    case 49:
    case 50:
    case 51:
    case 52:
    case 53:
    case 54:
    case 55:
    case 56:
    case 57:
    case 58:
    case 59:
    case 60:
    case 61:
    case 62:
    case 63:
    case 64:
    case 65:
    case 66:
    case 67:
    case 68:
    case 69:
    case 70:
    case 71:
    case 72:
    case 73:
    case 74:
    case 75:
    case 76:
    case 77:
    case 79:
    case 80:
    case 81:
    case 82:
    case 83:
    case 84:
    case 85:
    case 128:
    case 129:
    case 130:
    case 131:
    case 132:
    case 133:
    case 134:
    case 135:
    case 136:
    case 137:
    case 138:
    case 139:
    case 140:
    case 141:
    case 142:
    case 143:
    case 144:
    case 145:
    case 146:
    case 147:
    case 148:
    case 149:
    case 150:
    case 151:
    case 152:
    case 153:
    case 154:
    case 155:
    case 156:
    case 157:
    case 158:
    case 159:
    case 160:
    case 161:
      return true;
    default:
      return false;
  }
}

const std::string network_connection_token_default("");
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::EnumValueOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::StringTypeTraits, 9, false >
  network_connection_token(kNetworkConnectionTokenFieldNumber, network_connection_token_default);

// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>

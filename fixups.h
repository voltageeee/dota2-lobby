#include "coordinator.h"
#include "lobby.h"

namespace vltg_fixups {
    extern coordinator gcmgr;
    extern lobby m_lobby;

    extern bool libraries_are_loaded;
    extern bool hooked_steam_api;
    extern void* server;
    extern void* tier0;
    extern void* steam_api;
    extern void* engine;

    typedef void(*msg_fn)(const char* fmt, ...);
    extern msg_fn msg;
}

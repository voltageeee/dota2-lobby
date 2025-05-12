#include <dlfcn.h>
#include <stdlib.h>
#include <unistd.h>
#include "fixups.h"
#include <thread>
#include <sys/mman.h>

namespace vltg_fixups {
    coordinator gcmgr;
    lobby m_lobby;

    bool libraries_are_loaded = false;
    bool hooked_steam_api = false;
    void* server = nullptr;
    void* tier0 = nullptr;
    void* steam_api = nullptr;
    void* engine = nullptr;

    msg_fn msg = nullptr;
}

void init_libraries() {
    while (!vltg_fixups::libraries_are_loaded) {
        vltg_fixups::server = dlopen("libserver.so", RTLD_NOW | RTLD_NOLOAD);
        if (vltg_fixups::server == NULL) {
            usleep(10000);
            continue;
        }

        vltg_fixups::tier0 = dlopen("libtier0.so", RTLD_NOW | RTLD_NOLOAD);
        if (vltg_fixups::tier0 == NULL) {
            usleep(10000);
            continue;
        }

        vltg_fixups::steam_api = dlopen("libsteam_api.so", RTLD_NOW | RTLD_NOLOAD);
        if (vltg_fixups::steam_api == NULL) {
            usleep(10000);
            continue;
        }

        vltg_fixups::engine = dlopen("libengine2.so", RTLD_NOW | RTLD_NOLOAD);
        if (vltg_fixups::engine == NULL) {
            usleep(10000);
            continue;
        }

        vltg_fixups::libraries_are_loaded = true;
        return;
    }
}

void init() {
    vltg_fixups::msg = (vltg_fixups::msg_fn)dlsym(vltg_fixups::tier0, "Msg");
    vltg_fixups::gcmgr.init_gc();
    while (!vltg_fixups::gcmgr.sentserverinfo) {
        usleep(10000);
    }
    sleep(2);
    vltg_fixups::m_lobby.init_lobby();
}

__attribute__((constructor))
void hook_init() {
    std::thread([]() {
        init_libraries();
        init();
    }).detach();
}

__attribute__((destructor))
void hook_cleanup() {
    exit(0);
}
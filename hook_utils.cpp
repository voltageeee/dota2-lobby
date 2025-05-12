#include "hook_utils.h"
#include <cstring>
#include <unistd.h>
#include <sys/mman.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <cstdio>
#include <cstdlib>
#include <errno.h>
#include <stddef.h>
#include <funchook.h>
#include "fixups.h"

bool patch_vtable_entry(void** vtable, size_t index, void* new_func, void** old_func_out) {
    void* page = (void*)((uintptr_t)&vtable[index] & ~(getpagesize() - 1));
    size_t pagesize = getpagesize();

    if (old_func_out)
        *old_func_out = vtable[index];

    if (mprotect(page, pagesize, PROT_READ | PROT_WRITE | PROT_EXEC) != 0)
        return false;

    vtable[index] = new_func;

    if (mprotect(page, pagesize, PROT_READ | PROT_EXEC) != 0)
        return false;

    return true;
}

bool funchook_wrap(void* fn, void* new_func, void** old_func_out) {
    if (!fn || !new_func || !old_func_out) {
        return false;
    }

    *old_func_out = fn;

    funchook_t* hook = funchook_create();
    if (!hook) {
        return false;
    }

    if (funchook_prepare(hook, old_func_out, new_func) != 0) {
        return false;
    }

    if (funchook_install(hook, 0) != 0) {
        return false;
    }

    return true;
}
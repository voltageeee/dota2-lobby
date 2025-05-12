#pragma once
#include <cstdint>
#include <cstddef>

bool patch_vtable_entry(void** vtable, size_t index, void* new_func, void** old_func_out);
bool funchook_wrap(void* fn, void* new_func, void** old_func_out);
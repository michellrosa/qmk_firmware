#pragma once

// clang-format off

/// Custom keycodes
enum {
    CUSTOM_KEYCODE_START = SAFE_RANGE,

    #include "custom_mouse_keycodes.h"

    CUSTOM_KEYCODE_END
};

// clang-format on

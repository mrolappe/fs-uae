#ifndef FSEMU_INPUTDEVICE_H_
#define FSEMU_INPUTDEVICE_H_

#include <stdbool.h>

#include "fsemu-common.h"
#include "fsemu-scancodes.h"
#include "fsemu-types.h"

#ifdef __cplusplus
extern "C" {
#endif

// The SCANCODEs _must_ correspond to SDL2's scancodes. Likewise, the order
// of the controller enum entries must also correspond with SDL2.

enum {
    // Section for scancodes

    // Section for scancodes + modifier

    FSEMU_NUM_SCANCODES_2 = FSEMU_NUM_SCANCODES * 2,

    // Section for scancodes + modifier + shift

    FSEMU_NUM_SCANCODES_3 = FSEMU_NUM_SCANCODES * 3,

    // INVALID used as helper to calculate offset
    FSEMU_INPUTDEVICE_CONTROLLER_BUTTON_INVALID,
    FSEMU_INPUTDEVICE_CONTROLLER_BUTTON_A,
    FSEMU_INPUTDEVICE_CONTROLLER_BUTTON_B,
    FSEMU_INPUTDEVICE_CONTROLLER_BUTTON_X,
    FSEMU_INPUTDEVICE_CONTROLLER_BUTTON_Y,
    FSEMU_INPUTDEVICE_CONTROLLER_BUTTON_BACK,
    FSEMU_INPUTDEVICE_CONTROLLER_BUTTON_GUIDE,
    FSEMU_INPUTDEVICE_CONTROLLER_BUTTON_START,
    FSEMU_INPUTDEVICE_CONTROLLER_BUTTON_LEFTSTICK,
    FSEMU_INPUTDEVICE_CONTROLLER_BUTTON_RIGHTSTICK,
    FSEMU_INPUTDEVICE_CONTROLLER_BUTTON_LEFTSHOULDER,
    FSEMU_INPUTDEVICE_CONTROLLER_BUTTON_RIGHTSHOULDER,
    FSEMU_INPUTDEVICE_CONTROLLER_BUTTON_DPAD_UP,
    FSEMU_INPUTDEVICE_CONTROLLER_BUTTON_DPAD_DOWN,
    FSEMU_INPUTDEVICE_CONTROLLER_BUTTON_DPAD_LEFT,
    FSEMU_INPUTDEVICE_CONTROLLER_BUTTON_DPAD_RIGHT,
    FSEMU_INPUTDEVICE_CONTROLLER_BUTTON_MAX,

    // INVALID used as helper to calculate offset
    FSEMU_INPUTDEVICE_CONTROLLER_AXIS_INVALID,
    FSEMU_INPUTDEVICE_CONTROLLER_AXIS_LEFTX,
    FSEMU_INPUTDEVICE_CONTROLLER_AXIS_LEFTY,
    FSEMU_INPUTDEVICE_CONTROLLER_AXIS_RIGHTX,
    FSEMU_INPUTDEVICE_CONTROLLER_AXIS_RIGHTY,
    FSEMU_INPUTDEVICE_CONTROLLER_AXIS_TRIGGERLEFT,
    FSEMU_INPUTDEVICE_CONTROLLER_AXIS_TRIGGERRIGHT,
    FSEMU_INPUTDEVICE_CONTROLLER_AXIS_MAX,

    FSEMU_INPUTDEVICE_JOYSTICK_BUTTON_INVALID,
    FSEMU_INPUTDEVICE_JOYSTICK_BUTTON_0,
    FSEMU_INPUTDEVICE_JOYSTICK_BUTTON_1,
    FSEMU_INPUTDEVICE_JOYSTICK_BUTTON_2,
    FSEMU_INPUTDEVICE_JOYSTICK_BUTTON_3,
    FSEMU_INPUTDEVICE_JOYSTICK_BUTTON_4,
    FSEMU_INPUTDEVICE_JOYSTICK_BUTTON_5,
    FSEMU_INPUTDEVICE_JOYSTICK_BUTTON_6,
    FSEMU_INPUTDEVICE_JOYSTICK_BUTTON_7,
    FSEMU_INPUTDEVICE_JOYSTICK_BUTTON_8,
    FSEMU_INPUTDEVICE_JOYSTICK_BUTTON_9,
    FSEMU_INPUTDEVICE_JOYSTICK_BUTTON_10,
    FSEMU_INPUTDEVICE_JOYSTICK_BUTTON_11,
    FSEMU_INPUTDEVICE_JOYSTICK_BUTTON_12,
    FSEMU_INPUTDEVICE_JOYSTICK_BUTTON_13,
    FSEMU_INPUTDEVICE_JOYSTICK_BUTTON_14,
    FSEMU_INPUTDEVICE_JOYSTICK_BUTTON_15,
    FSEMU_INPUTDEVICE_JOYSTICK_BUTTON_16,
    FSEMU_INPUTDEVICE_JOYSTICK_BUTTON_17,
    FSEMU_INPUTDEVICE_JOYSTICK_BUTTON_18,
    FSEMU_INPUTDEVICE_JOYSTICK_BUTTON_19,
    FSEMU_INPUTDEVICE_JOYSTICK_BUTTON_20,
    FSEMU_INPUTDEVICE_JOYSTICK_BUTTON_21,
    FSEMU_INPUTDEVICE_JOYSTICK_BUTTON_22,
    FSEMU_INPUTDEVICE_JOYSTICK_BUTTON_23,
    FSEMU_INPUTDEVICE_JOYSTICK_BUTTON_24,
    FSEMU_INPUTDEVICE_JOYSTICK_BUTTON_25,
    FSEMU_INPUTDEVICE_JOYSTICK_BUTTON_26,
    FSEMU_INPUTDEVICE_JOYSTICK_BUTTON_27,
    FSEMU_INPUTDEVICE_JOYSTICK_BUTTON_28,
    FSEMU_INPUTDEVICE_JOYSTICK_BUTTON_29,
    FSEMU_INPUTDEVICE_JOYSTICK_BUTTON_30,
    FSEMU_INPUTDEVICE_JOYSTICK_BUTTON_31,
    FSEMU_INPUTDEVICE_JOYSTICK_BUTTON_MAX,
};

#ifdef __cplusplus
}
#endif

#endif  // FSEMU_INPUTDEVICE_H_

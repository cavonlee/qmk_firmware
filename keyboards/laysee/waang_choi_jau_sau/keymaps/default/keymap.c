// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later
#include "bongo_cat_wpm.h"
#include QMK_KEYBOARD_H

enum laysee40s_layers {
  _QWERTY,
  _NUMPAD,
  _FUNCTION,
  _SETTINGS,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┐  ┌───┬───┬───┬───┬───┬───┐
     * │ES`│ Q │ W │ E │ R │ T │  │ Y │ U │ I │ O │ P │BSP│
     * ├───┼───┼───┼───┼───┼───┤  ├───┼───┼───┼───┼───┼───┤
     * │TAB│ A │ S │ D │ F │ G │  │ H │ J │ K │ L │; :│' "│
     * ├───┼───┼───┼───┼───┼───┤  ├───┼───┼───┼───┼───┼───┤
     * │SHF│ Z │ X │ C │ V │ B │  │ N │ M │, <│. >│/ ?│ENT│
     * ├───┼───┼───┼───┼───┼───┤  ├───┼───┼───┼───┼───┼───┤
     * │CTL│GUI│ALT│   │NUM│SPC│  │SPC│FUN│ ← │ ↑ │ ↓ │ → │
     * └───┴───┴───┴───┴───┴───┘  └───┴───┴───┴───┴───┴───┘
     */
    [_QWERTY] = LAYOUT_default(
        QK_GESC, KC_Q,    KC_W,    KC_E,  KC_R,        KC_T,      KC_Y,     KC_U,          KC_I,    KC_O,   KC_P,    KC_BSPC,
        KC_TAB,  KC_A,    KC_S,    KC_D,  KC_F,        KC_G,      KC_H,     KC_J,          KC_K,    KC_L,   KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,  KC_V,        KC_B,      KC_N,     KC_M,          KC_COMM, KC_DOT, KC_SLSH, KC_ENT,
        KC_LCTL, KC_LGUI, KC_LALT, KC_NO, MO(_NUMPAD), KC_SPC,    KC_SPC, MO(_FUNCTION), KC_LEFT, KC_UP,  KC_DOWN, KC_RGHT
    ),
    /*
     * ┌───┬───┬───┬───┬───┬───┐  ┌───┬───┬───┬───┬───┬───┐
     * │ ` │ 1 │ 2 │ 3 │ 4 │ 5 │  │ 6 │ 7 │ 8 │ 9 │ 0 │DEL│
     * ├───┼───┼───┼───┼───┼───┤  ├───┼───┼───┼───┼───┼───┤
     * │CPL│ + │ = │ { │ [ │ ( │  │ ) │ ] │ } │ _ │ - │ \ │
     * ├───┼───┼───┼───┼───┼───┤  ├───┼───┼───┼───┼───┼───┤
     * │SHF│   │   │   │PUP│HOM│  │END│PDN│TRN│TRN│   │   │
     * ├───┼───┼───┼───┼───┼───┤  ├───┼───┼───┼───┼───┼───┤
     * │CTL│GUI│ALT│SET│TRN│TRN│  │TRN│TRN│TRN│TRN│TRN│TRN│
     * └───┴───┴───┴───┴───┴───┘  └───┴───┴───┴───┴───┴───┘
     */
    [_NUMPAD] = LAYOUT_default(
        KC_GRV,  KC_1,    KC_2,    KC_3,          KC_4,    KC_5,        KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL,
        KC_CAPS, KC_PLUS, KC_EQL,  KC_LCBR,       KC_LBRC, KC_LPRN,     KC_RPRN, KC_RBRC, KC_RCBR, KC_UNDS, KC_MINS, KC_BSLS,
        KC_LSFT, KC_NO,   KC_NO,   KC_NO,         KC_PGUP, KC_HOME,     KC_END,  KC_PGDN, KC_TRNS, KC_TRNS, KC_NO,   KC_TRNS,
        KC_LCTL, KC_LGUI, KC_LALT, MO(_SETTINGS), KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),
    /*
     * ┌───┬───┬───┬───┬───┬───┐  ┌───┬───┬───┬───┬───┬───┐
     * │F1 │F2 │F3 │F4 │F5 │F6 │  |F7 │F8 │F9 │F10│F11│F12|
     * ├───┼───┼───┼───┼───┼───┤  ├───┼───┼───┼───┼───┼───┤
     * │   │   │   │   │   │   │  │   │   │   │   │   │   |
     * ├───┼───┼───┼───┼───┼───┤  ├───┼───┼───┼───┼───┼───┤
     * │SHF│   │   │   │   │   │  │   │   │   │   │   │   │
     * ├───┼───┼───┼───┼───┼───┤  ├───┼───┼───┼───┼───┼───┤
     * │CTL│GUI│ALT│   │TRN│   │  │   │TRN│SET│   │   │   │
     * └───┴───┴───┴───┴───┴───┘  └───┴───┴───┴───┴───┴───┘
     */
    [_FUNCTION] = LAYOUT_default(
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,      KC_F7,   KC_F8,   KC_F9,         KC_F10, KC_F11, KC_F12,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,      KC_NO,   KC_NO,   KC_NO,         KC_NO,  KC_NO,  KC_NO,
        KC_LSFT, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,      KC_NO,   KC_NO,   KC_NO,         KC_NO,  KC_NO,  KC_NO,
        KC_LCTL, KC_LGUI, KC_LALT, KC_NO,   KC_TRNS, KC_NO,      KC_NO,   KC_TRNS, MO(_SETTINGS), KC_NO,  KC_NO,  KC_NO
    ),
    /*
     * ┌───┬───┬───┬───┬───┬───┐  ┌───┬───┬───┬───┬───┬───┐
     * │BLD│   │   │   │   │   │  │   │   │   │   │   │BLD│
     * ├───┼───┼───┼───┼───┼───┤  ├───┼───┼───┼───┼───┼───┤
     * │   │   │   │   │   │   │  │   │   │   │   │   │   │
     * ├───┼───┼───┼───┼───┼───┤  ├───┼───┼───┼───┼───┼───┤
     * │SHF│   │   │   │   │   │  │   │   │   │   │   │   │
     * ├───┼───┼───┼───┼───┼───┤  ├───┼───┼───┼───┼───┼───┤
     * │CTL│GUI│ALT│TRN│TRN│   │  │   │TRN│TRN│   │   │   │
     * └───┴───┴───┴───┴───┴───┘  └───┴───┴───┴───┴───┴───┘
     */
    [_SETTINGS] = LAYOUT_default(
        QK_BOOT, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO, KC_NO,   KC_NO,   KC_NO, KC_NO, QK_BOOT,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO, KC_NO,   KC_NO,   KC_NO, KC_NO, KC_NO,
        KC_LSFT, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO, KC_NO,   KC_NO,   KC_NO, KC_NO, KC_NO,
        KC_LCTL, KC_LGUI, KC_LALT, KC_TRNS, KC_TRNS, KC_NO,    KC_NO, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO
    )
};


#ifdef OLED_ENABLE


bool oled_task_master(void) {
    // Host Keyboard Layer Status
    switch (get_highest_layer(layer_state)) {
        case _QWERTY:
            render_bongo_cat();
            break;
        case _NUMPAD:
            oled_clear();
            oled_set_cursor(4, 1);
            oled_write_P(PSTR("Numpad\n"), false);
            break;
        case _FUNCTION:
            oled_clear();
            oled_set_cursor(4, 1);
            oled_write_P(PSTR("Function\n"), false);
            break;
        case _SETTINGS:
            oled_clear();
            oled_set_cursor(4, 1);
            oled_write_P(PSTR("Settings\n"), false);
            break;
        default:
            // Or use the write_ln shortcut over adding '\n' to the end of your string
            oled_write_ln_P(PSTR("Undefined"), false);
    }

    return false;
}

bool oled_task_slave(void) {
    
    // Host Keyboard LED Status
    led_t led_state = host_keyboard_led_state();
    oled_write_P(led_state.num_lock ? PSTR("NUM ") : PSTR("    "), false);
    oled_write_P(led_state.caps_lock ? PSTR("CAP ") : PSTR("    "), false);
    oled_write_P(led_state.scroll_lock ? PSTR("SCR ") : PSTR("    "), false);
    
    return false;
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        return oled_task_master();
    } else {
        return oled_task_slave();
    }
}

void oled_render_boot(bool bootloader) {
    oled_clear();
    oled_set_cursor(0, 1);
    if (bootloader) {
        oled_write_P(PSTR("Awaiting New Firmware "), false);
    } else {
        oled_write_P(PSTR("Rebooting "), false);
    }

    oled_render_dirty(true);
}

bool shutdown_user(bool jump_to_bootloader) {
    oled_render_boot(jump_to_bootloader);
    return true;
}
#endif

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    if (get_highest_layer(layer_state) == _NUMPAD) {
        uint8_t layer = get_highest_layer(layer_state);

        for (uint8_t row = 0; row < MATRIX_ROWS; ++row) {
            for (uint8_t col = 0; col < MATRIX_COLS; ++col) {
                uint8_t index = g_led_config.matrix_co[row][col];
                if (index >= led_min && index < led_max && index != NO_LED) {
                    if (keymap_key_to_keycode(layer, (keypos_t){col,row}) > KC_TRNS) {
                        rgb_matrix_set_color(index, RGB_GOLDENROD);
                    } else {
                        rgb_matrix_set_color(index, 0, 0, 0);
                    }
                }
            }
        }
    }
    return false;
}

/* SPDX-License-Identifier: GPL-2.0-or-later */

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
      KC_GRAVE, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_0,
      KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_0,
      KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_0,
      KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLASH,KC_0,
      KC_LCTL, KC_LGUI, KC_LALT, KC_TRNS, KC_TRNS, KC_SPACE, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_RGUI,KC_0
    )
};

led_config_t g_led_config = {
    {
        {  0, 1,  2, 3, 4, 5,  6 },
    }, {
        {   0,   0 }, {  15,   0 }, {  30,   0 }, {  45,   0 }, {  60,   0 }, {  75,   0 }, {  90,   0 }
    }, {
        4, 4, 4, 4, 4, 4, 4,
    }
};
bool rgb_matrix_indicators_kb(void){     
    rgb_matrix_set_color(0, 0, 255, 0);
    rgb_matrix_set_color(1, (host_keyboard_leds() & (1 << 1) ? 255 : 0), (host_keyboard_leds() & (1 << 1) ? 255 : 0), (host_keyboard_leds() & (1 << 1) ? 255 : 0));
    rgb_matrix_set_color(2, 0, 255, 0);
    rgb_matrix_set_color(3, 0, 255, 0);
    rgb_matrix_set_color(4, 0, 255, 0);
    rgb_matrix_set_color(5, (host_keyboard_leds() & (1 << 1) ? 255 : 0), (host_keyboard_leds() & (1 << 1) ? 255 : 0), (host_keyboard_leds() & (1 << 1) ? 255 : 0));
    rgb_matrix_set_color(6, (host_keyboard_leds() & (1 << 1) ? 255 : 0), (host_keyboard_leds() & (1 << 1) ? 255 : 0), (host_keyboard_leds() & (1 << 1) ? 255 : 0));
    return true;
}

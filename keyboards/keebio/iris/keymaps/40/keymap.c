#include QMK_KEYBOARD_H
#if __has_include("keymap.h")
#    include "keymap.h"
#endif

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_NO,	    KC_NO,	    KC_NO,	    KC_NO,  	KC_NO,  	KC_NO,  	KC_NO,  	KC_NO,  	KC_NO,  	KC_NO,  	KC_NO,  	KC_NO,
        KC_TAB, 	KC_Q,   	KC_W,   	KC_E,   	KC_R,   	KC_T,   	KC_Y,   	KC_U,   	KC_I,   	KC_O,   	KC_P,   	KC_BSPC,
        MT(MOD_LCTL,KC_ESC),	KC_A,	KC_S,	KC_D,	KC_F,	KC_G,	KC_H,	KC_J,	KC_K,	KC_L,	KC_SCLN,	KC_QUOT,
        KC_LSFT,	KC_Z,	    KC_X,   	KC_C,   	KC_V,   	KC_B,	    KC_GRV, 	KC_BSLS,	KC_N,   	KC_M,   	KC_COMM,	KC_DOT, 	KC_SLSH,	KC_RSFT,
        KC_LGUI,	MO(1),	    MT(MOD_LGUI,KC_ENT),	KC_SPC,	    MO(2),	    KC_RALT
    ),
    [1] = LAYOUT(
        _______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,
        _______,	KC_GRV, 	_______,	_______,	_______,	_______,	KC_BSLS,	KC_PPLS,	KC_EQL,	    KC_LBRC,	KC_RBRC,	_______,
        _______,	KC_1,	    KC_2,	    KC_3,   	KC_4,   	KC_5,   	KC_6,   	KC_7,   	KC_8,   	KC_9,       KC_0,	    KC_MINS,
        _______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,
        KC_LGUI,	_______,	_______,	_______,	_______,	KC_RALT
    ),
    [2] = LAYOUT(
        _______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,
        _______,	KC_1,	    KC_2,	    KC_3,   	KC_4,   	KC_5,   	KC_6,   	KC_7,   	KC_8,   	KC_9,       KC_0,	    KC_MINS,
        _______,	_______,	_______,	_______,	_______,	_______,	KC_LEFT,	KC_DOWN,	KC_UP,  	KC_RGHT,	_______,	_______,
        _______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	KC_VOLD,	KC_VOLU,	KC_MPRV,	KC_MNXT,	_______,	_______,
        _______,	_______,	_______,	_______,	_______,	KC_MPLY
    ),
    [3] = LAYOUT(
        _______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,
        _______,	KC_1,	    KC_2,	    KC_3,   	KC_4,   	KC_5,   	KC_6,   	KC_7,   	KC_8,   	KC_9,       KC_0,	    KC_MINS,
        _______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,
        _______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,
        _______,	_______,	_______,	_______,	_______,	_______
    )
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)





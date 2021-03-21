/*
 * 'Proton-64' - C64/VIC20 keyboard to USB conversion
 * built in 2021 - thr33face
 *
 * 'special' features:
 * - CTRL behaves as L-CTRL if held and TAB when tapped
 * - hold R-SHIFT to access F2/F4/F6/F8
 */

#include QMK_KEYBOARD_H
#include <string.h>
#include <stdio.h>

#define ____ KC_TRNS

enum layer_names {
	_PC,
	_RS,
	_F1,
	_F2,
	_LS
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_PC] = LAYOUT( \
		KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_PGDOWN, KC_PGUP, KC_BSPC, KC_F1, \
		CTL_T(KC_TAB), KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, MO(_F2), KC_F3, \
		MO(_F1), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_DEL, KC_ENT, KC_F5, \
		KC_LGUI, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, LM(_RS, MOD_RSFT), KC_RALT, KC_RCTL, KC_F7, KC_SPC \
	),
	[_RS] = LAYOUT( \
		____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, KC_F2, \
		____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, KC_F4, \
		____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, KC_F6, \
		____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, KC_F8, ____ \
	),
	[_F1] = LAYOUT( \
		____, ____, ____, ____, ____, ____, ____, ____, ____, ____, KC_MUTE, KC_VOLD, KC_VOLU, ____, ____, KC_INS, ____, \
		____, ____, KC_UP, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, \
		____, KC_LEFT, KC_DOWN, KC_RGHT, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, \
		____, ____, KC_MPLY, KC_MPRV, KC_MNXT, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____ \
	),
	[_F2] = LAYOUT( \
		KC_GRV, ____, ____, ____, ____, ____, ____, ____, ____, ____, KC_MUTE, KC_VOLD, KC_VOLU, KC_HOME, KC_END, KC_DEL, KC_F9, \
		____, ____, KC_UP,____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, KC_F10, \
		____, KC_LEFT, KC_DOWN, KC_RGHT, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, KC_F11, \
		____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, KC_F12, ____ \
	),
	[_LS] = LAYOUT( \
		____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, \
		____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, \
		____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, \
		____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____ \
	)
};

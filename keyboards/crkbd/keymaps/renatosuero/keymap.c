#include <stdio.h>
#include QMK_KEYBOARD_H


//homerowns default layer
#define hr_lctl MT(MOD_LCTL,KC_F)
#define hr_rctl MT(MOD_RCTL,KC_J)

#define hr_lsft MT(MOD_LSFT,KC_D)
#define hr_rsft MT(MOD_RSFT,KC_K)

#define hr_lalt MT(MOD_RALT,KC_S)
#define hr_ralt MT(MOD_RALT,KC_L)

// homewows layer 1
#define hr1_rctl MT(MOD_RCTL,KC_DOWN)
#define hr1_rsft MT(MOD_RSFT,KC_UP)
#define hr1_ralt MT(MOD_RALT,KC_RIGHT)


// others
#define kc_layer1_tab LT(1,KC_TAB)
#define kc_layer2_esc LT(2,KC_ESC)
#define kc_layer3_bsp LT(3,KC_BSPC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[0] = LAYOUT_split_3x6_3(
		//,-----------------------------------------------------.                    ,-----------------------------------------------------.
		XXXXXXX,    KC_Q,    KC_W,    KC_E,    KC_R, KC_T, 				                KC_Y,  KC_U,  KC_I,  KC_O,  KC_P, XXXXXXX,
		//|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
		XXXXXXX,    KC_A,   hr_lalt,hr_lsft,hr_lctl, KC_G, 				               KC_H,   hr_rctl, hr_rsft, hr_ralt, KC_SCLN, XXXXXXX,
		//|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
		XXXXXXX,    KC_Z,    KC_X,    KC_C,    KC_V, KC_B, 				               KC_N,   KC_M, KC_COMM, KC_DOT, KC_SLSH, XXXXXXX,
		//|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
											 kc_layer2_esc, kc_layer3_bsp, KC_LGUI,      KC_ENT,  KC_SPC, kc_layer1_tab
										//`--------------------------'  `--------------------------'
	),

	[1] = LAYOUT_split_3x6_3(
	//,-----------------------------------------------------.                    ,-----------------------------------------------------.
		 XXXXXXX, KC_1,    KC_2,    KC_3,    KC_4, KC_5, 				            KC_6,    KC_7,    KC_8,    KC_9,   KC_0, XXXXXXX,
	//|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
		 XXXXXXX, KC_GRV, KC_LALT, KC_LSFT,KC_LCTL, KC_CAPS, 		                KC_LEFT, hr1_rctl, hr1_rsft, hr1_ralt, XXXXXXX, XXXXXXX,
	//|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
		 XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, 		                XXXXXXX, KC_RCTL, KC_DOT, KC_SLSH, XXXXXXX, XXXXXXX,
	//|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
											 XXXXXXX, KC_BSPC, KC_LGUI,      KC_ENT,  KC_SPC, kc_layer1_tab
										//`--------------------------'  `--------------------------'
	),

	[2] = LAYOUT_split_3x6_3(
	//,-----------------------------------------------------.                    ,-----------------------------------------------------.
		 XXXXXXX, KC_EXLM, KC_AT, KC_HASH,  KC_DLR, KC_PERC,                      KC_CIRC, KC_AMPR, KC_ASTR, KC_MINUS, KC_EQL, XXXXXXX,
	//|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
		 XXXXXXX, KC_GRV, KC_LALT, KC_LSFT, KC_LCTL, XXXXXXX, 		               KC_LEFT, hr1_rctl, hr1_rsft, hr1_ralt, KC_QUOT, XXXXXXX,
	//|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
		 XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,					   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_BSLS, XXXXXXX,
	//|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
											 kc_layer2_esc, KC_BSPC, KC_LGUI,      KC_ENT,  KC_SPC, XXXXXXX
									//`--------------------------'  `--------------------------'
	),

	[3] = LAYOUT_split_3x6_3(
	//,-----------------------------------------------------.                    ,-----------------------------------------------------.
		 XXXXXXX, KC_F1, KC_F2, KC_F3,  KC_F4, KC_F5,                               KC_F6,  KC_F7,   KC_F8,   KC_F9,   KC_F10, XXXXXXX,
	//|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
		 XXXXXXX, XXXXXXX, XXXXXXX, KC_LPRN, KC_LCBR, KC_LBRC, 		               KC_RBRC, KC_RCBR, KC_RPRN, XXXXXXX, KC_DELETE,XXXXXXX,
	//|-----j--+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
		 XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_BTN3,					   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
	//|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
											 kc_layer2_esc, KC_BSPC, KC_LGUI,      KC_ENT,  KC_SPC, XXXXXXX
									//`--------------------------'  `--------------------------'
	),

};


/*

const uint16_t kc_lalt = MT(MOD_LALT, KC_S);
const uint16_t kc_lsft = MT(MOD_LSFT, KC_D);
const uint16_t kc_lctl = MT(MOD_LCTL, KC_F);

const uint16_t kc_rctl = MT(MOD_RCTL, KC_J);
const uint16_t kc_rsft = MT(MOD_RSFT, KC_K);
const uint16_t kc_ralt = MT(MOD_RALT, KC_L);

const uint16_t kc_esc = LT(2,KC_ESC);
const uint17_t kc_tab = LT(1,KC_TAB);
const uint17_t kc_bspc = LT(3,KC_BSPC);

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       XXXXXXX,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX,    KC_A, kc_lalt, kc_lsft, kc_lctl,    KC_G,                         KC_H, kc_rctl, kc_rsft, kc_ralt, KC_SCLN, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          kc_esc,   kc_bspc,  KC_LGUI,     KC_ENT,   KC_SPC,kc_tab
                                      //`--------------------------'  `--------------------------'

  ),

    [1] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       XXXXXXX,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, kc_lalt, kc_lsft, kc_lctl, XXXXXXX,                      KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, KC_QUOT, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_BSLS, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          kc_esc,   KC_BSPC,  KC_LGUI,     KC_ENT, KC_SPC, kc_tab
                                      //`--------------------------'  `--------------------------'
  ),

    [2] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       XXXXXXX, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_GRV, XXXXXXX,  KC_LPRN, KC_LCBR, KC_LBRC,                      KC_RBRC, KC_RCBR, KC_RPRN, XXXXXXX, XXXXXXX,  XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_PIPE, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          kc_esc,   KC_BSPC,  KC_LGUI,     KC_ENT,   KC_SPC,kc_tab
                                      //`--------------------------'  `--------------------------'
  ),

    [3] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_GRV, XXXXXXX,  KC_LPRN, KC_LCBR, KC_LBRC,                      KC_RBRC, KC_RCBR, KC_RPRN, XXXXXXX, XXXXXXX,  XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, _______,  KC_SPC,     KC_ENT, _______, KC_RALT
                                      //`--------------------------'  `--------------------------'
  )
};
*/

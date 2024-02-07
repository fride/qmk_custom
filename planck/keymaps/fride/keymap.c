#include QMK_KEYBOARD_H
#include "layout.h"
#include "g/keymap_combo.h"


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[ALPHA] = LAYOUT_planck_grid(
    KC_GRV,  ___F___, ___R___, ___D___, ___P___, ___V___,      ___Q___, ___M___, ___U___, ___O___, ___Y___, KC_SCLN,
    KC_EQL,  ___S___, ___N___, ___T___, ___C___, ___B___,      __DOT__, ___H___, ___E___, ___A___, ___I___, KC_MINS,
    OS_LSFT, ___Z___, ___J___, ___K___, ___G___, ___W___,      ___X___, ___L___, KC_SCLN, KC_QUOT, _COMMA_, OS_LSFT,
    KC_LBRC, KC_LALT, KC_LGUI, KC_NO, NAV_SPC,   KC_ENTER,   KC_ENTER, OS_LSFT,   KC_DEL, KC_RGUI,  KC_RALT,  KC_RBRC
),
};

// NEEDS TO BE HERE. :/
uint16_t get_combo_term(uint16_t index, combo_t* combo) {
  switch (index) {
    default:
      return COMBO_TERM;
  }
}
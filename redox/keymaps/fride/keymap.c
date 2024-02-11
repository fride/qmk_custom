
#include QMK_KEYBOARD_H
#include <stdio.h>
#include "layout.h"
#include "g/keymap_combo.h"


#define REDOX(k) CONV_REDOX(k)
#define CONV_REDOX( \
  k15, k16, k17, k18, k19,        k22, k23, k24, k25, k26, \
  k29, k30, k31, k32, k33,        k36, k37, k38, k39, k40, \
  k43, k44, k45, k46, k47,        k50, k51, k52, k53, k54, \
            k59, k60, k61,        k64, k65, k66 \
) \
{ \
    { KC_GRV, KC_7, KC_5, KC_3, KC_1, KC_9, KC_NO }, \
    { KC_TAB, k15, k16, k17, k18, k19, KC_NO }, \
    { KC_ESC, k29, k30, k31, k32, k33, KC_NO }, \
    { OS_LSFT, k43, k44, k45, k46, k47, KC_NO }, \
    { OS_LCTL, KC_NO, KC_NO, k59, k60, k61, OS_LSFT }, \
    { KC_SLSH, KC_6, KC_4, KC_2, KC_0, KC_8, KC_NO }, \
    { KC_MINS, k26, k25, k24, k23, k22, KC_NO }, \
    { KC_BSPC, k40, k39, k38, k37, k36, KC_NO }, \
    { KC_ENTER, k54, k53, k52, k51, k50, KC_NO }, \
    { OS_LCTL, KC_NO, KC_NO, k66, k65, k64, OS_LSFT }  \
}

#define MY_REDOX(...) LAYOUT(__VA_ARGS__)

#define THUMB_L1 LT(UTIL,KC_BSPC)
#define THUMB_L2 LT(NUM,KC_DEL)
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [ALPHA]  = MY_REDOX(
    //┌────────┬────────┬────────┬────────┬────────┬────────┐                                           ┌────────┬────────┬────────┬────────┬────────┬────────┐
       KC_EQL,  KC_1    ,KC_2    ,KC_3    ,KC_4    ,KC_5    ,                                            KC_6    ,KC_7    ,KC_8    ,KC_9    ,KC_0    ,KC_PIPE,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐                         ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       KC_GRV  ,______________HANDS_DOWN_L1________________ , KC_F19  ,                          KC_PIPE,______________HANDS_DOWN_R1________________ , KC_Q  ,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       OS_LSFT ,______________HANDS_DOWN_L2________________, OS_MEH  ,                          KC_DLR  ,______________HANDS_DOWN_R2________________ ,KC_X ,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┐       ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       KC_LSFT ,______________HANDS_DOWN_L3________________ , KC_NO   ,  KC_NO ,        KC_HOME ,KC_NO  ,______________HANDS_DOWN_R3________________ ,OS_LSFT ,
    //├────────┼────────┼────────┼────────┼────┬───┴────┬───┼────────┼────────┤       ├────────┼────────┼───┬────┴───┬────┼────────┼────────┼────────┼────────┤
       KC_NO ,KC_UP   ,KC_UP   ,KC_DOWN ,        KC_R,       NUMWORD , KC_DEL ,        KC_ENTER , KC_TAB,    NAV_SPC ,     KC_LEFT ,KC_RIGHT ,ARROW_R,KC_NO
    //└────────┴────────┴────────┴────────┘    └────────┘   └────────┴────────┘       └────────┴────────┘   └────────┘    └────────┴────────┴────────┴────────┘
    ),
    [NUM]  = MY_REDOX(
    //┌────────┬────────┬────────┬────────┬────────┬────────┐                                           ┌────────┬────────┬────────┬────────┬────────┬────────┐
       KC_EQL,  KC_1    ,KC_2    ,KC_3    ,KC_4    ,KC_5    ,                                            KC_6    ,KC_7    ,KC_8    ,KC_9    ,KC_0    ,KC_PIPE,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐                         ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       KC_GRV  ,_________________NUMBER_L1_________________ , KC_F19  ,                          KC_PIPE ,_________________NUMBER_R1_________________, KC_K  ,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       OS_LSFT ,_________________NUMBER_L2_________________, OS_MEH  ,                          KC_DLR  ,_________________NUMBER_R2_________________ , KC_J ,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┐       ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       KC_LSFT ,_________________NUMBER_L3_________________ , KC_NO   ,  KC_NO ,        KC_HOME ,KC_EQL   ,_________________NUMBER_R3_________________ ,S(KC_G) ,
    //├────────┼────────┼────────┼────────┼────┬───┴────┬───┼────────┼────────┤       ├────────┼────────┼───┬────┴───┬────┼────────┼────────┼────────┼────────┤
       KC_NO ,KC_UP   ,KC_UP   ,KC_DOWN ,       THUMB_L1,     KC_NO , KC_DEL ,        KC_COMM , KC_DOT,       KC_0 ,       KC_LEFT ,KC_RIGHT ,ARROW_R, KC_AT
    //└────────┴────────┴────────┴────────┘    └────────┘   └────────┴────────┘       └────────┴────────┘   └────────┘    └────────┴────────┴────────┴────────┘
    ),
// const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
//  [ALPHA] = LAYOUT_REDOX(REDOX(_GRAPHITE)),
//  [NUM] = LAYOUT_REDOX(REDOX(_NUM)),
//  [SYM] = LAYOUT_REDOX(REDOX(_SYM)),
//  [UTIL] = LAYOUT_REDOX(REDOX(_UTIL)),
//  [WINNAV] = LAYOUT_REDOX(REDOX(_WINNAV)),
//  [ALWAYS] = LAYOUT_REDOX(REDOX(_ALWAYS_ACC))
// };
};
// const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
//         [0] = LAYOUT(KC_NO, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSLS, KC_GRV, KC_B, RALT_T(KC_Y), KC_O, KC_U, KC_SCLN, KC_NO, KC_NO, KC_SCLN, KC_L, KC_D, RALT_T(KC_W), KC_V, KC_Q, KC_NO, LCTL_T(KC_C), LALT_T(KC_I), LGUI_T(KC_E), LSFT_T(KC_A), KC_COMM, KC_NO, KC_NO, KC_DOT, RSFT_T(KC_H), RGUI_T(KC_T), LALT_T(KC_S), RCTL_T(KC_N), KC_Z, OSM(MOD_LSFT), KC_G, KC_X, MEH_T(KC_J), LT(3,KC_K), KC_MINS, KC_DOWN, KC_UP, KC_LEFT, KC_RGHT, KC_QUES, KC_R, MEH_T(KC_M), KC_F, KC_P, OSM(MOD_RSFT), KC_NO, KC_NO, KC_NO, KC_NO, LT(1,KC_BSPC), KC_NO, KC_NO, KC_NO, KC_NO, LT(2,KC_SPC), KC_NO, KC_NO, KC_NO, KC_NO),
//         [1] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, LGUI(KC_X), KC_NO, KC_NO, LGUI(KC_X), KC_BSPC, KC_UP, KC_DEL, KC_NO, KC_NO, KC_NO, KC_LCTL, KC_LALT, KC_LGUI, KC_LSFT, LGUI(KC_C), KC_NO, KC_NO, LGUI(KC_C), KC_LEFT, KC_DOWN, KC_RGHT, LGUI(KC_Z), LGUI(KC_L), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, LGUI(KC_X), KC_NO, KC_NO, KC_NO, KC_NO, LGUI(KC_V), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TAB, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),
//         [2] = LAYOUT(KC_NO, KC_NO, KC_D, KC_E, KC_F, KC_NO, KC_CIRC, KC_HASH, KC_DLR, KC_TILD, KC_EXLM, KC_PIPE, KC_NO, KC_X, KC_A, KC_B, KC_C, KC_UNDS, KC_NO, KC_NO, KC_PERC, KC_7, KC_8, KC_9, KC_COLN, KC_K, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PLUS, KC_4, KC_5, KC_6, KC_MINS, KC_J, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LT, KC_GT, KC_ASTR, KC_1, KC_2, KC_3, KC_SLSH, KC_G, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_COMM, KC_DOT, KC_0, KC_NO, KC_NO, KC_NO, KC_AT),
//         [3] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_O, KC_U, KC_A, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
// };

// NEEDS TO BE HERE. :/
uint16_t get_combo_term(uint16_t index, combo_t* combo) {
  switch (index) {
    default:
      return COMBO_TERM;
  }
}
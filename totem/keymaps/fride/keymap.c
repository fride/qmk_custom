/* 
                                             ▀▀▀▀▀     ▀▀▀▀▀          ▀▀█▀▀
                                             ▄▀▀▀▄  ▄  ▄▀▀▀▄  ▄  ▄▀▀▀▄  █  ▄▀▀▀▄
                                             █   █  █  █   █  █  █   █  █  █   █
                                              ▀▀▀   █   ▀▀▀   █   ▀▀▀   ▀   ▀▀▀
                                                    █      ▄▄▄█▄▄▄    █   █  
                                                    ▀      █  █  █     █▄█
                                                  ▀▀▀▀▀    █  █  █      ▀   ┌─┐┌─╴╷┌──┬─
                                                           ▀  ▀  ▀          │ ┐├─╴│└─┐│
                                                                            └─┘└─╴╵╶─┘╵                                                          
▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄
*/

#include QMK_KEYBOARD_H
#include <stdio.h>
#include "totem.h"
#include "layout.h"
#include "g/keymap_combo.h"


#define LAYOUT_TOTEM(...) LAYOUT(__VA_ARGS__)
#define TOTEM(k) CONV_TOTEM(k)
#define CONV_TOTEM( \
  k15, k16, k17, k18, k19,        k22, k23, k24, k25, k26, \
  k29, k30, k31, k32, k33,        k36, k37, k38, k39, k40, \
  k43, k44, k45, k46, k47,        k50, k51, k52, k53, k54, \
            k59, k60, k61,        k64, k65, k66 \
) \
        k15, k16, k17, k18, k19,        k22, k23, k24, k25, k26, \
        k29, k30, k31, k32, k33,        k36, k37, k38, k39, k40, \
KC_NO,  k43, k44, k45, k46, k47,        k50, k51, k52, k53, k54, KC_NO, \
                  k59, k60, k61,        k64, k65, k66


// ┌────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐
// │ K E Y M A P S                                                                                                          │
// └────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘
// ▝▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▘

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
 [ALPHA] = LAYOUT_TOTEM(TOTEM(_BASE)),
 [NUM] = LAYOUT_TOTEM(TOTEM(_NUM)),
 [SYM] = LAYOUT_TOTEM(TOTEM(_SYM)),
 [UTIL] = LAYOUT_TOTEM(TOTEM(_UTIL)),
 [WINNAV] = LAYOUT_TOTEM(TOTEM(_WINNAV)),
 [ALWAYS] = LAYOUT_TOTEM(TOTEM(_ALWAYS_ACC))
};

// NEEDS TO BE HERE. :/
uint16_t get_combo_term(uint16_t index, combo_t* combo) {
  switch (index) {
    default:
      return COMBO_TERM;
  }
}
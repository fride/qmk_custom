#pragma once
#include QMK_KEYBOARD_H

enum layers {
  ALPHA,  
  UTIL,
  NUM,  
  NUM2,  
  SYM,
  WINNAV,
  FUN,
  ALWAYS
};

// Tap Dance keycodes
enum td_keycodes {
  ALT_LP  // Our example key: `LALT` when held, `(` when tapped. Add additional
          // keycodes for each tapdance.
};

enum custom_keycodes {
  QUOTE = SAFE_RANGE,
  LEADER,
  LLOCK,
  CIRC,
  GRV,
  TILD,
  DELIM,  // on the NUM word layer

  LPAREN,
  RPAREN,

  // Smart caps lock and layers that turn off on certain keys
  CAPSWORD,
  MINS,
  NUMWORD,
  SYMWORD,
  SENTENCE,
  CAMEL,
  KEBAB,

  // Layer management
  CANCEL,  // Cancel SYMWORD and NUMWORD
  CLEAR,  // Clear all WORD, one-shots and reset to BASE
  MG_THE,
  MG_ION,
  MG_ON,
  MG_ENT,
  MG_UST,
  MG_MENT,
  MG_VER,
  M_SENTENCE,

  // N-Shot Mods
  OS_LSFT,  // OS Mods
  OS_LCTL,  // OS Mods
  OS_LALT,  // OS Mods
  OS_LGUI,  // OS Mods
  TS_LCTL,  // Two-shot ctrl

  // used below in the thumb
  NEXTSEN,

  // German special nonsense
  A_UML,
  O_UML,
  U_UML,
  SZ,

  ARROW_L,
  ARROW_R,
  QU,
  KC_SCH,

  COPY_PASTE,
  SP_MOD,  // oneshot modifier and tap, nav layer on hold. See 'NAV_MOD'
  SP_SFT,
  CPYPASTE,

  SW_APP,
  SW_WIN,
  MOUSE_TGL,
  SLASH,
  UNDER,
  ALFRED,

  // lates stuff
  QUOTE_BRACKET,
  KC_PH,
  KC_TH,

  // window management.
  WN_WEST,
  WN_EAST,
  WN_NORTH,
  WN_SOUTH,
  W_ROTATE,
  W_ROTATE2,

  BI_PH,

  KA,
  KAU,
  KU,
};


#define META_DEAD LT(UTIL, KC_LGUI)

#define NICE_QU LALT(KC_3)
// macOS shortcuts
#define Z_UND G(KC_Z)
#define Z_CUT G(KC_X)
#define Z_CPY G(KC_C)
#define Z_PST G(KC_V)
#define Z_RDO S(G(KC_Z))
#define Z_LOCK C(G(KC_Q))
#define Z_SLEEP S(C(KC_EJCT))
#define Z_SHUT C(A(G(KC_PWR)))
#define Z_SSHT G(S(KC_4))
#define Z_SRCD G(S(KC_5))
#define Z_VSML A(KC_LSFT)
#define Z_HASH A(KC_3)
#define Z_AT S(KC_2)
#define EURO S(A(KC_2))
#define FWD G(KC_RBRC)
#define BACK G(KC_LBRC)
#define TAB_L G(S(KC_LBRC))
#define TAB_R G(S(KC_RBRC))
#define SPACE_L A(G(KC_LEFT))
#define SPACE_R A(G(KC_RGHT))

// special keys
#define MAGIC QK_ALT_REPEAT_KEY
#define REPEAT QK_REPEAT_KEY
#define MAG_SFT LSFT_T(QK_ALT_REPEAT_KEY)
#define ENT_CTL LCTL_T(KC_ENTER)
#define REP_SFT LSFT_T(QK_REPEAT_KEY)
#define ENT_CTL LCTL_T(KC_ENTER)

#define ESC_SYM LT(SYM,KC_ESC)
#define COLON_SYM LT(SYM,KC_COLON)

#define M_LT LT(NUM, KC_LT)
#define M_GT LT(SYM, KC_GT)

#define BSPC_UTIL LT(UTIL,KC_BSPC)
#define DEL_NUM LT(NUM,KC_DEL)

// thumb keys!
#define NAV_SPC LT(UTIL, KC_SPC)
#define MEH_SPC MEH_T(KC_SPC)
#define NUM_QUO LT(NUM, KC_QUOT)
#define OS_SYM OSL(SYM)
#define OS_MEH OSM(MOD_MEH)
#define UM_CTL LCTL_T(KC_U)
#define BSPACE LT(NUM,KC_BSPC)

#define ___A___ RGUI_T(KC_A)
#define ___B___ KC_B
#define ___C___ RSFT_T(KC_C)
#define ___D___ MEH_T(KC_D)
#define ___E___ LALT_T(KC_E)
#define ___F___ KC_F
#define ___G___ MEH_T(KC_G)
#define ___H___ KC_H
#define ___I___ RCTL_T(KC_I)
#define ___J___ KC_J
#define ___K___ KC_K
#define ___L___ RALT_T(KC_L)
#define ___M___ KC_M
#define ___N___ LGUI_T(KC_N)
#define ___O___ KC_O
#define ___P___ KC_P
#define ___Q___ KC_Q
#define ___R___ LALT_T(KC_R)
#define ___S___ LCTL_T(KC_S)
#define ___T___ LSFT_T(KC_T)
#define ___U___ RALT_T(KC_U)
#define ___V___ KC_V
#define ___W___ KC_W
#define ___X___ KC_X
#define ___Y___ KC_Y
#define ___Z___ KC_Z
#define _COMMA_ KC_COMM
#define __DOT__ KC_DOT
#define _SLASH_ KC_SLSH
#define _SQUOT_ KC_QUOT
#define _DQUOT_ KC_DQUO
#define _MINUS_ KC_MINS
#define __HASH_ KC_HASH
#define _SEMIC_ KC_SCLN
#define _QUEST_ KC_QUES

#define ___0___ RSFT_T(KC_0)
#define ___2___ RGUI_T(KC_2)
#define ___4___ RALT_T(KC_4)
#define ___6___ RCTL_T(KC_6)
#define ___8___ MEH_T(KC_8)

#define ___1___ LSFT_T(KC_1)
#define ___3___ LGUI_T(KC_3)
#define ___5___ LALT_T(KC_5)
#define ___7___ LCTL_T(KC_7)
#define ___9___ MEH_T(KC_9)

#define _______ KC_TRNS
#define _XXXXX_ KC_NO
#define ___________________________________________ \
  _______, _______, _______, _______, _______


// ----------------
// layout wrappers inspired by https://github.com/pixelbreaker/qmk_userspace

/*
Hands down - again ;)
xz  wq m  g  j   #@ .: / * "! '?  
s  c  n  t  k   ,; a  e  i  h  
b  p  l  d  v   -+ u  o  y  f  
r   ␣  
*/
#define ______________HANDS_DOWN_L1________________ KC_Z,         RALT_T(KC_W), KC_M,         KC_G,         KC_J
#define ______________HANDS_DOWN_L2________________ LCTL_T(KC_S), LALT_T(KC_C), LGUI_T(KC_N), LSFT_T(KC_T), KC_K
#define ______________HANDS_DOWN_L3________________ KC_B,         KC_P,         KC_L,         MEH_T(KC_D),  KC_V

#define ______________HANDS_DOWN_R1________________ KC_BSLS, KC_DOT,       KC_SLSH,      KC_EQL,          KC_QUOT
#define ______________HANDS_DOWN_R2________________ KC_COMM, RSFT_T(KC_A), RGUI_T(KC_E), LALT_T(KC_I),    RCTL_T(KC_H)
#define ______________HANDS_DOWN_R3________________ KC_MINS, MEH_T(KC_U),  KC_O,         KC_Y,            KC_F


#define _________________UTILS_L1__________________ SW_APP,  TAB_L,   TAB_R,   SW_WIN,  KC_NO
#define _________________UTILS_L2__________________ KC_LCTL, KC_LALT, KC_LGUI, KC_LSFT, OSM(MOD_MEH)
#define _________________UTILS_L3__________________ Z_UND,   Z_CUT,   Z_CPY,   Z_PST,   ALFRED

#define _________________UTILS_R1__________________ KC_NO, KC_BSPC, KC_UP,   KC_DEL,  KC_NO
#define _________________UTILS_R2__________________ FWD,   KC_LEFT, KC_DOWN, KC_RGHT, BACK
#define _________________UTILS_R3__________________ KC_NO, KC_ESC,  KC_COLON,KC_NO,   KC_NO


#define _________________NUMBER_L1_________________ _______, KC_D,    KC_E,    KC_F,    KC_UNDS
#define _________________NUMBER_L2_________________ KC_LCTL, KC_LALT, KC_LGUI, KC_LSFT, KC_MEH
#define _________________NUMBER_L3_________________ OS_LSFT, G(KC_Z), _______, KC_SPC,  KC_TAB

#define _________________NUMBER_R1_________________ KC_PERC, KC_7, KC_8, KC_9, KC_COLN
#define _________________NUMBER_R2_________________ KC_PLUS, KC_4, KC_5, KC_6, KC_MINS
#define _________________NUMBER_R3_________________ KC_PAST, KC_1, KC_2, KC_3, KC_SLSH
        

#define _NUM2 \
  KC_BSLS ,KC_7, KC_8, KC_9, KC_SLSH      ,KC_MINS, KC_LT, KC_GT, KC_EQL, _COMMA_, \
  KC_COLN, KC_4, KC_5, KC_6, KC_HASH      ,TG(NUM), KC_LSFT, KC_LGUI, KC_LALT, KC_LCTL , \
  KC_AT   ,KC_1, KC_2 ,KC_3, KC_GRV       ,_______, _______, _______, _______, __DOT__, \
              KC_MINS, KC_0, KC_BSLS      ,_______, _XXXXX_, _______

#define _ALWAYS_ACC \
  _______ ,KC_ESC, KC_COLON, _______, _______      ,_______, _______,  _______, _______, _______, \
  _______, KC_PERC,_SLASH_, KC_ENTER, _______      ,_______, _______,  _______, _______, _______ , \
  _______ ,_______, _______, S(KC_1), _______      ,_______, _______,  _______, _______, QK_BOOT, \
                    _______, _______, _______      ,_______, _______, _______

#define _SYM \
  KC_GRV  ,KC_LT   ,KC_GT,   KC_AT  , KC_DOT       ,KC_AMPR, MAGIC,    KC_LBRC, KC_RBRC, _______, \
  KC_EXLM ,KC_MINS ,KC_PLUS ,KC_EQL,  KC_HASH      ,KC_PIPE, KC_COLON, KC_LPRN, KC_RPRN, KC_PERC , \
  _______ ,KC_SLSH ,KC_PAST, KC_CIRC, _______      ,KC_TILD, KC_AMPR,  KC_LCBR, KC_RCBR, _______, \
                    _______, _______, _______      ,_______, _______, _______

#define _WINNAV \
  KC_NO,        W_ROTATE,     WN_NORTH,     W_ROTATE2,    KC_PLUS,      KC_BSLS, MEH(KC_6),    MEH(KC_7),      MEH(KC_8),     KC_TILD, \
  SPACE_L,      WN_WEST,      A(KC_F),      WN_EAST,      SPACE_R,      KC_NO,   MEH(KC_4),    MEH(KC_5),      MEH(KC_6),     LALT_T(KC_6), \
  KC_NO,        KC_NO,        WN_SOUTH,     KC_NO,        KC_NO,        KC_NO,   MEH(KC_1),    MEH(KC_2),      MEH(KC_3),     KC_SLSH, \
                                _______, _______, _______      ,_______, _______, _______

#define _FUN \
  KC_NO,        W_ROTATE,     WN_NORTH,     W_ROTATE2,    KC_PLUS,           KC_BSLS, KC_F7,        KC_F8,           KC_F9,      KC_F10, \
  OS_LALT,      OS_LCTL,      OS_LGUI,      OS_LSFT,      OSM(MOD_MEH),      KC_NO,   KC_F4,        KC_F5,           KC_F6,      KC_F11, \
  KC_NO,        KC_NO,        WN_SOUTH,     KC_NO,        KC_NO,             KC_NO,   KC_F1,        KC_F2,           KC_F3,      KC_F12, \
                                _______, _______, _______      ,_______, _______, _______


// -------------------------------------------------------------------------------------------------------- //

#define LAYOUT_FERRIS(...) LAYOUT(__VA_ARGS__)

#define FERRIS(k) CONV_FERRIS(k)

#define CONV_FERRIS( \
  k15, k16, k17, k18, k19,        k22, k23, k24, k25, k26, \
  k29, k30, k31, k32, k33,        k36, k37, k38, k39, k40, \
  k43, k44, k45, k46, k47,        k50, k51, k52, k53, k54, \
            k59, k60, k61,        k64, k65, k66 \
) \
        k15, k16, k17, k18, k19,        k22, k23, k24, k25, k26, \
        k29, k30, k31, k32, k33,        k36, k37, k38, k39, k40, \
        k43, k44, k45, k46, k47,        k50, k51, k52, k53, k54, \
                      k60, k61,         k64, k65


#define LAYOUT_PLANCK(...) LAYOUT(__VA_ARGS__)
#define PLANCK(k) CONV_PLANCK(k)
#define CONV_PLANCK( \
    k01, k02, k03, k04, k05,    k06, k07, k08, k09, k0a, \
    k11, k12, k13, k14, k15,    k16, k17, k18, k19, k1a, \
    k21, k22, k23, k24, k25,    k26, k27, k28, k29, k2a, \
              k33, k34, k35,    k36, k37, k38            \
    ) \
     KC_ESC, k01, k02, k03, k04, k05, \
     KC_TAB, k11, k12, k13, k14, k15, \
     OS_LSFT, k21, k22, k23, k24, k25, \
     KC_LCTL, KC_LALT, KC_LGUI, KC_LALT, KC_RCTL, k36, \
     k06, k07, k08, k09, k0a, KC_BSPC, \
     k16, k17, k18, k19, k1a, KC_ENTER, \
     k26, k27, k28, k29, k2a, OSL(NUM), \
     k37, OSL(NUM), KC_RGUI, OSL(NUM), k34, k35



/*

#define _TEMPLATE_LAYER \
  _______ ,_______, _______, _______, _______      ,_______, _______,  _______, _______, _______, \
  _______, _______, _______, _______, _______      ,_______, _______,  _______, _______, _______ , \
  _______ ,_______, _______, _______, _______      ,_______, _______,  _______, _______, _______, \
                    _______, _______, _______      ,_______, _______, _______

*/


#define ______________MAGICSTURDY_L1_______________ KC_V,         ___M___,      KC_L,         KC_C,         KC_P
#define ______________MAGICSTURDY_L2_______________ LCTL_T(KC_S), LALT_T(KC_T), LGUI_T(KC_R), LSFT_T(KC_D), KC_Y
#define ______________MAGICSTURDY_L3_______________ KC_X,         KC_K,         KC_J,         ___G___,      KC_W

#define ______________MAGICSTURDY_R1_______________ KC_B,    MAGIC,        KC_U,         ___O___,         KC_QUOT
#define ______________MAGICSTURDY_R2_______________ KC_F,    RSFT_T(KC_N), RGUI_T(KC_E), LALT_T(KC_A),    RCTL_T(KC_I)
#define ______________MAGICSTURDY_R3_______________ KC_Z,    ___H___,      KC_COMM,      KC_DOT,          KC_SCLN

#define _________________DHORF_L1__________________ ___V___, ___L___, ___H___, ___K___, ___Q___
#define _________________DHORF_L2__________________ ___S___, ___R___, ___N___, ___T___, ___W___
#define _________________DHORF_L3__________________ ___Z___, ___X___, ___M___, ___D___, ___B___

#define _________________DHORF_R1__________________ KC_J,    ___F___, ___O___, ___U___, KC_COMM
#define _________________DHORF_R2__________________ KC_Y,    ___C___, ___A___, ___E___, ___I___
#define _________________DHORF_R3__________________ KC_P,    ___G___, KC_QUOT, KC_SCLN, KC_DOT


#define _BASE \
  _________________DHORF_L1__________________, _________________DHORF_R1__________________, \
  _________________DHORF_L2__________________, _________________DHORF_R2__________________, \
  _________________DHORF_L3__________________, _________________DHORF_R3__________________, \
           KC_BSPC,NAV_SPC,LT(KC_SLSH,SYM),     LT(SYM,KC_ENTER), LT(NUM,KC_BSPC), OSL(FUN)

#define _UTIL \
  _________________UTILS_L1__________________, _________________UTILS_R1__________________, \
  _________________UTILS_L2__________________, _________________UTILS_R2__________________, \
  _________________UTILS_L3__________________, _________________UTILS_R3__________________, \
                    _______, _______,   _______            , _______, _XXXXX_, _______


#define _NUM \
  KC_GRV  ,KC_EQL , KC_MINS, KC_UNDS, KC_PAST      ,KC_BSLS, KC_HASH,  KC_AMPR, KC_PIPE, _COMMA_, \
  ___7___ ,___5___ ,___3___ ,___1___, KC_PLUS      ,KC_TILD, ___0___,  ___2___, ___4___, ___6___ , \
  KC_TILD ,KC_COLON,KC_SCLN, ___9___, KC_AT        ,KC_SLSH, ___8___,  KC_CIRC, KC_DLR,  __DOT__, \
                    KC_LT, _______, KC_GT      ,_______, _XXXXX_, _______

/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

// QWERTY left bottom home row mods (mod tap)
#define SFT_V LSFT_T(KC_V)
#define CTL_C LCTL_T(KC_C)
#define ALT_X LALT_T(KC_X)
#define GUI_Z LGUI_T(KC_Z)

// QWERTY right bottom home row mods (mod tap)
#define SFT_M RSFT_T(KC_M)
#define CTL_COMM LCTL_T(KC_COMM)
#define ALT_DOT LALT_T(KC_DOT)
#define GUI_SLSH LGUI_T(KC_SLSH)

// Gallium v2 left bottom home row mods (mod tap)
#define SFT_W LSFT_T(KC_W)
#define CTL_M LCTL_T(KC_M)
#define ALT_Q LALT_T(KC_Q)
#define GUI_X LGUI_T(KC_X)

// Gallium v2 right bottom home row mods (mod tap)
#define SFT_P RSFT_T(KC_P)
#define CTL_QUOT LCTL_T(KC_QUOT)
#define ALT_SCLN LALT_T(KC_SCLN)
#define GUI_DOT LGUI_T(KC_DOT)

// Layer taps
#define LT2_ENT LT(2, KC_ENT)
#define LT3_SPC LT(3, KC_SPC)
#define LT4_ESC LT(4, KC_ESC)
#define LT5_BSPC LT(5, KC_BSPC)
#define LT6_TAB LT(6, KC_TAB)
#define LT7_DEL LT(7, KC_DEL)

// =============================
// Keymap
// =============================

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    // QWERTY
    [0] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX,   GUI_Z,   ALT_X,   CTL_C,   SFT_V,    KC_B,                         KC_N,   SFT_M,CTL_COMM, ALT_DOT,GUI_SLSH, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          LT6_TAB, LT2_ENT, LT4_ESC,   LT5_BSPC, LT3_SPC, LT7_DEL
                                      //`--------------------------'  `--------------------------'

  ),

    // Gallium v2
    [1] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX,    KC_B,    KC_L,    KC_D,    KC_C,    KC_V,                         KC_J,    KC_F,    KC_O,    KC_U, KC_COMM, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX,    KC_N,    KC_R,    KC_T,    KC_S,    KC_G,                         KC_Y,    KC_H,    KC_A,    KC_E,    KC_I, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX,   GUI_X,   ALT_Q,   CTL_M,   SFT_W,    KC_Z,                         KC_K,   SFT_P,CTL_QUOT,ALT_SCLN, GUI_DOT, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          LT6_TAB, LT2_ENT, LT4_ESC,   LT5_BSPC, LT3_SPC, LT7_DEL
                                      //`--------------------------'  `--------------------------'
  ),

    // Symbols
    [2] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, KC_ASTR,   KC_LT,   KC_GT, KC_SLSH, KC_BSLS,                      KC_TILD,  KC_DOT, KC_LCBR, KC_RCBR, KC_QUES, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_EXLM, KC_PLUS, KC_MINS,  KC_EQL, KC_PIPE,                      KC_AMPR, KC_UNDS, KC_LPRN, KC_RPRN, KC_QUOT, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_CIRC,   KC_AT,  KC_DLR, KC_HASH, XXXXXXX,                       KC_GRV, KC_PERC, KC_LBRC, KC_RBRC, KC_DQUO, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,    KC_SPC,  KC_BSPC,  KC_TAB
                                      //`--------------------------'  `--------------------------'
  ),

    [3] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, XXXXXXX,    KC_7,    KC_8,    KC_9, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX,    KC_4,    KC_5,    KC_6, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX,    KC_1,    KC_2,    KC_3, XXXXXXX,                      XXXXXXX, KC_RSFT, KC_LCTL, KC_LALT, KC_LGUI, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______,    KC_0, _______,    _______, _______, _______
                                      //`--------------------------'  `--------------------------'
  ),

    // Navigation
    [4] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_HOME, KC_PGDN, KC_PGUP,  KC_END, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,      MO(9), _______, _______
                                      //`--------------------------'  `--------------------------'
  ),

    [5] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______,   MO(9),   _______ , _______, _______
                                      //`--------------------------'  `--------------------------'
  ),

    // Numbers
      [6] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,    _______, _______, _______
                                      //`--------------------------'  `--------------------------'
  ),

      [7] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX,   KC_F9,  KC_F10,  KC_F11,  KC_F12, XXXXXXX,                     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX,   KC_F5,   KC_F6,   KC_F7,   KC_F8, XXXXXXX,                     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX,   KC_F1,   KC_F2,   KC_F3,   KC_F4, XXXXXXX,                     XXXXXXX, KC_RSFT, KC_LCTL, KC_LALT, KC_LGUI, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,    _______, _______, _______
                                      //`--------------------------'  `--------------------------'
  ),

      [8] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,    _______, _______, _______
                                      //`--------------------------'  `--------------------------'
  ),

      [9] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, KC_MPRV, KC_MPLY, KC_MNXT, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX,   DF(1),   DF(0), XXXXXXX,                      XXXXXXX, KC_VOLD, KC_MUTE, KC_VOLU, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,    _______, _______, _______
                                      //`--------------------------'  `--------------------------'
  ),

      [10] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,    _______, _______, _______
                                      //`--------------------------'  `--------------------------'
  )

};

// =============================
// Combos
// =============================

enum combos {
  // 1 = index
  // 2 = middle
  // 3 = ring
  // 4 = pinky

  // first letter is the more inward letter (toward thumbs)

  // lh top
  RE_LPRN, // 1-2
  EW_LBRC, // 2-3
  WQ_LT, // 3-4
  RW_LCBR, // 1-3
  EQ_TILD, // 2-4

  // lh home
  FD_MINS, // 1-2
  DS_UNDS, // 2-3
  SA_PLUS, // 3-4
  FS_EQL, // 1-3
  DA_AT, // 2-4
  

  // lh bot
  VC_SLSH, // 1-2
  CX_BSLS, // 2-3
  XZ_ASTR, // 3-4
  VX_PIPE, // 1-3

  // rh top
  UI_RPRN, // 1-2
  IO_RBRC, // 2-3
  OP_GT, // 3-4
  UO_RCBR, // 1-3
  IP_CIRC, // 2-4

  // rh home
  JK_QUOT, // 1-2
  KL_DQUO, // 2-3
  LSCLN_GRV, // 3-4
  JL_HASH, // 1-3
  KSCLN_PERC, // 2-4

  // rh bot
  MCOMM_AMPR, // 1-2
  COMMDOT_EXLM, // 2-3
  DOTSLSH_QUES, // 3-4
  MDOT_DLR, // 1-3

  // leader
  FJ_LEAD, // lh 1 - rh 1
};

const uint16_t PROGMEM re_combo[] = {KC_R, KC_E, COMBO_END};
const uint16_t PROGMEM ew_combo[] = {KC_E, KC_W, COMBO_END};
const uint16_t PROGMEM wq_combo[] = {KC_W, KC_Q, COMBO_END};
const uint16_t PROGMEM rw_combo[] = {KC_R, KC_W, COMBO_END};
const uint16_t PROGMEM eq_combo[] = {KC_E, KC_Q, COMBO_END};

// lh home
const uint16_t PROGMEM fd_combo[] = {KC_F, KC_D, COMBO_END};
const uint16_t PROGMEM ds_combo[] = {KC_D, KC_S, COMBO_END};
const uint16_t PROGMEM sa_combo[] = {KC_S, KC_A, COMBO_END};
const uint16_t PROGMEM fs_combo[] = {KC_F, KC_S, COMBO_END};
const uint16_t PROGMEM da_combo[] = {KC_D, KC_A, COMBO_END};

// lh bot
const uint16_t PROGMEM vc_combo[] = {LSFT_T(KC_V), LCTL_T(KC_C), COMBO_END};
const uint16_t PROGMEM cx_combo[] = {LCTL_T(KC_C), LALT_T(KC_X), COMBO_END};
const uint16_t PROGMEM xz_combo[] = {LALT_T(KC_X), LGUI_T(KC_Z), COMBO_END};
const uint16_t PROGMEM vx_combo[] = {LSFT_T(KC_V), LALT_T(KC_X), COMBO_END};

// rh top
const uint16_t PROGMEM ui_combo[] = {KC_U, KC_I, COMBO_END};
const uint16_t PROGMEM io_combo[] = {KC_I, KC_O, COMBO_END};
const uint16_t PROGMEM op_combo[] = {KC_O, KC_P, COMBO_END};
const uint16_t PROGMEM uo_combo[] = {KC_U, KC_O, COMBO_END};
const uint16_t PROGMEM ip_combo[] = {KC_I, KC_P, COMBO_END};

// rh home
const uint16_t PROGMEM jk_combo[] = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM kl_combo[] = {KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM lscln_combo[] = {KC_L, KC_SCLN, COMBO_END};
const uint16_t PROGMEM jl_combo[] = {KC_J, KC_L, COMBO_END};
const uint16_t PROGMEM kscln_combo[] = {KC_K, KC_SCLN, COMBO_END};

// rh bot
const uint16_t PROGMEM mcomm_combo[] = {RSFT_T(KC_M), LCTL_T(KC_COMM), COMBO_END};
const uint16_t PROGMEM commdot_combo[] = {LCTL_T(KC_COMM), LALT_T(KC_DOT), COMBO_END};
const uint16_t PROGMEM dotslsh_combo[] = {LALT_T(KC_DOT), LGUI_T(KC_SLSH), COMBO_END};
const uint16_t PROGMEM mdot_combo[] = {RSFT_T(KC_M), LALT_T(KC_DOT), COMBO_END};

const uint16_t PROGMEM fj_combo[] = {KC_F, KC_J, COMBO_END};

combo_t key_combos[] = {
  [RE_LPRN] = COMBO(re_combo, KC_LPRN), // 1-2
  [EW_LBRC] = COMBO(ew_combo, KC_LBRC), // 2-3
  [WQ_LT] = COMBO(wq_combo, KC_LT), // 3-4
  [RW_LCBR] = COMBO(rw_combo, KC_LCBR), // 1-3
  [EQ_TILD] = COMBO(eq_combo, KC_TILD), // 2-4

  // lh home
  [FD_MINS] = COMBO(fd_combo, KC_MINS), // 1-2
  [DS_UNDS] = COMBO(ds_combo, KC_UNDS), // 2-3
  [SA_PLUS] = COMBO(sa_combo, KC_PLUS), // 3-4
  [FS_EQL] = COMBO(fs_combo, KC_EQL), // 1-3
  [DA_AT] = COMBO(da_combo, KC_AT), // 2-4
  

  // lh bot
  [VC_SLSH] = COMBO(vc_combo, KC_SLSH), // 1-2
  [CX_BSLS] = COMBO(cx_combo, KC_BSLS), // 2-3
  [XZ_ASTR] = COMBO(xz_combo, KC_ASTR), // 3-4
  [VX_PIPE] = COMBO(vx_combo, KC_PIPE), // 1-3

  // rh top
  [UI_RPRN] = COMBO(ui_combo, KC_RPRN), // 1-2
  [IO_RBRC] = COMBO(io_combo, KC_RBRC), // 2-3
  [OP_GT] = COMBO(op_combo, KC_GT), // 3-4
  [UO_RCBR] = COMBO(uo_combo, KC_RCBR), // 1-3
  [IP_CIRC] = COMBO(ip_combo, KC_CIRC), // 2-4

  // rh home
  [JK_QUOT] = COMBO(jk_combo, KC_QUOT), // 1-2
  [KL_DQUO] = COMBO(kl_combo, KC_DQUO), // 2-3
  [LSCLN_GRV] = COMBO(lscln_combo, KC_GRV), // 3-4
  [JL_HASH] = COMBO(jl_combo, KC_HASH), // 1-3
  [KSCLN_PERC] = COMBO(kscln_combo, KC_PERC), // 2-4

  // rh bot
  [MCOMM_AMPR] = COMBO(mcomm_combo, KC_AMPR), // 1-2
  [COMMDOT_EXLM] = COMBO(commdot_combo, KC_EXLM), // 2-3
  [DOTSLSH_QUES] = COMBO(dotslsh_combo, KC_QUES), // 3-4
  [MDOT_DLR] = COMBO(mdot_combo, KC_DLR), // 1-3  

  [FJ_LEAD] = COMBO(fj_combo, QK_LEAD),
};

// =============================
// Leader
// =============================

void leader_start_user(void) {
    // Do something when the leader key is pressed
}

void leader_end_user(void) {
    if (leader_sequence_two_keys(KC_S, KC_P)) {
        SEND_STRING("()");
    } else if (leader_sequence_two_keys(KC_S, KC_C)) {
        SEND_STRING("{}");
    } else if (leader_sequence_two_keys(KC_S, KC_K)) {
        SEND_STRING("[]");
    } else if (leader_sequence_two_keys(KC_S, KC_T)) {
        SEND_STRING("<>");
    }
}
#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_german_ch.h"
#include "keymap_jp.h"
#include "keymap_korean.h"
#include "keymap_bepo.h"
#include "keymap_italian.h"
#include "keymap_slovenian.h"
#include "keymap_lithuanian_azerty.h"
#include "keymap_danish.h"
#include "keymap_norwegian.h"
#include "keymap_portuguese.h"
#include "keymap_contributions.h"
#include "keymap_czech.h"
#include "keymap_romanian.h"
#include "keymap_russian.h"
#include "keymap_uk.h"
#include "keymap_estonian.h"
#include "keymap_belgian.h"
#include "keymap_us_international.h"
#include "keymap_croatian.h"
#include "keymap_turkish_q.h"
#include "keymap_slovak.h"
#include "quantum/quantum_keycodes.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)
#define SE_SECT_MAC ALGR(KC_6)

enum custom_keycodes {
  RGB_SLD = EZ_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  NZ_MB_MIDDLE
};

enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
  DANCE_4,
  DANCE_5,
  DANCE_6,
  DANCE_7,
  DANCE_8,
  DANCE_9,
  DANCE_10,
  DANCE_11,
  DANCE_12,
  DANCE_13,
  DANCE_14,
  DANCE_15,
  DANCE_16,
  DANCE_17,
  DANCE_18,
  DANCE_19,
  DANCE_20,
  DANCE_21,
  DANCE_22,
  DANCE_23,
  DANCE_24,
  DANCE_25,
  DANCE_26,
  DANCE_27,
  DANCE_28,
  DANCE_29,
  DANCE_30,
  DANCE_31,
  DANCE_32,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox_pretty(
    KC_ESCAPE,      KC_EXLM,        KC_AT,          KC_HASH,        KC_DLR,         KC_PERC,        KC_CAPSLOCK,                                    KC_TRANSPARENT, TD(DANCE_15),   TD(DANCE_16),   TD(DANCE_17),   ST_MACRO_0,     ST_MACRO_1,     KC_TRANSPARENT,
    KC_TAB,         TD(DANCE_0),    TD(DANCE_1),    TD(DANCE_2),    TD(DANCE_3),    TD(DANCE_4),    KC_1,                                           ST_MACRO_2,     TD(DANCE_18),   TD(DANCE_19),   TD(DANCE_20),   KC_O,           TD(DANCE_21),   ST_MACRO_3,
    KC_LCTRL,       TD(DANCE_5),    TD(DANCE_6),    TD(DANCE_7),    TD(DANCE_8),    TD(DANCE_9),                                                                    TD(DANCE_22),   TD(DANCE_23),   TD(DANCE_24),   KC_L,           TD(DANCE_25),   KC_ENTER,
    KC_LSHIFT,      TD(DANCE_10),   TD(DANCE_11),   TD(DANCE_12),   TD(DANCE_13),   TD(DANCE_14),   KC_0,                                           KC_TRANSPARENT, TD(DANCE_26),   TD(DANCE_27),   TD(DANCE_28),   KC_DOT,         TD(DANCE_29),   KC_RSHIFT,
    TT(2),          KC_LGUI,        KC_LALT,        KC_TRANSPARENT, TT(1),                                                                                                          KC_UNDS,        KC_MINUS,       KC_SCOLON,      TD(DANCE_30),   TT(2),
                                                                                                    KC_ENTER,       TT(3),          KC_RALT,        TG(3),
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_BSPACE,      LCTL(KC_BSPACE),KC_DELETE,      TT(1),          KC_TRANSPARENT, KC_SPACE
  ),
  [1] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_PSCREEN,     KC_F11,         LCTL(KC_S),                                     KC_TRANSPARENT, KC_TRANSPARENT, LCTL(KC_PGUP),  KC_TRANSPARENT, LCTL(KC_PGDOWN),KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LCTL(KC_R),     LCTL(KC_T),     LCTL(KC_C),                                     KC_TRANSPARENT, KC_PGUP,        KC_HOME,        KC_UP,          KC_END,         KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN2,     KC_MS_BTN3,     KC_MS_BTN1,     KC_TRANSPARENT,                                                                 KC_PGDOWN,      KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, LSFT(KC_MS_BTN2), NZ_MB_MIDDLE,LSFT(KC_MS_BTN1),KC_TRANSPARENT, LCTL(KC_V),                                     KC_TRANSPARENT, KC_TRANSPARENT, LCTL(KC_LEFT),  KC_TRANSPARENT, LCTL(KC_RIGHT), KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_SLASH,       KC_ASTR,        KC_MINUS,       KC_TRANSPARENT,
    KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_7,           KC_8,           KC_9,           KC_PLUS,        KC_TRANSPARENT,
    KC_TRANSPARENT, KC_6,           KC_7,           KC_8,           KC_9,           KC_A,                                                                           KC_TRANSPARENT, TD(DANCE_31),   TD(DANCE_32),   KC_6,           KC_PLUS,        KC_TRANSPARENT,
    KC_TRANSPARENT, KC_B,           KC_C,           KC_D,           KC_E,           KC_F,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_ENTER,       KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_0,           KC_0,           KC_DOT,         KC_ENTER,       KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_ergodox_pretty(
    RESET, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_LABK,        KC_RABK,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_LBRACKET,    KC_RBRACKET,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_6,           KC_7,           KC_8,           KC_9,           KC_A,                                                                           KC_PLUS,        KC_LPRN,        KC_RPRN,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_B,           KC_C,           KC_D,           KC_E,           KC_F,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_ASTR,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_SLASH,       KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};


extern bool g_suspend_state;
extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [0] = { {165,211,152}, {165,211,152}, {165,211,152}, {165,211,152}, {165,211,152}, {165,211,152}, {165,211,152}, {165,211,152}, {165,211,152}, {165,211,152}, {165,211,152}, {165,211,152}, {165,211,152}, {165,211,152}, {165,211,152}, {165,211,152}, {165,211,152}, {165,211,152}, {165,211,152}, {165,211,152}, {165,211,152}, {165,211,152}, {165,211,152}, {165,211,152}, {165,211,152}, {165,211,152}, {165,211,152}, {165,211,152}, {165,211,152}, {165,211,152}, {165,211,152}, {165,211,152}, {165,211,152}, {165,211,152}, {165,211,152}, {165,211,152}, {165,211,152}, {165,211,152}, {165,211,152}, {165,211,152}, {165,211,152}, {165,211,152}, {165,211,152}, {165,211,152}, {165,211,152}, {165,211,152}, {165,211,152}, {165,211,152} },

    [1] = { {0,0,0}, {219,124,251}, {0,0,0}, {219,124,251}, {0,0,0}, {219,255,255}, {219,255,255}, {74,255,255}, {219,255,255}, {0,0,0}, {219,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {0,0,0}, {0,0,0}, {219,124,251}, {0,0,0}, {219,124,251}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {219,255,255}, {219,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {219,124,251}, {219,124,251}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {74,255,255}, {74,255,255}, {74,255,255}, {0,0,0}, {0,0,0}, {74,255,255}, {74,255,255}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },
    [2] = { {0,0,0}, {0,0,0}, {0,245,245}, {0,245,245}, {0,245,245}, {0,0,0}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,0,0}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,0,0}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [3] = { {0,0,0}, {154,149,216}, {154,149,216}, {0,0,0}, {0,0,0}, {0,0,0}, {154,149,216}, {154,149,216}, {0,0,0}, {0,0,0}, {154,149,216}, {154,149,216}, {154,149,216}, {0,0,0}, {0,0,0}, {154,149,216}, {0,0,0}, {0,0,0}, {0,0,0}, {154,149,216}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

void rgb_matrix_indicators_user(void) {
  if (g_suspend_state || keyboard_config.disable_layer_led) { return; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case ST_MACRO_0:
            if (record->event.pressed) {
                SEND_STRING(SS_TAP(X_RALT) SS_DELAY(100) SS_TAP(X_M) SS_DELAY(100) SS_TAP(X_U));
            }
            break;
        case ST_MACRO_1:
            if (record->event.pressed) {
                SEND_STRING(SS_TAP(X_RALT) SS_DELAY(100) SS_TAP(X_O) SS_DELAY(100) SS_TAP(X_O));
            }
            break;
        case ST_MACRO_2:
            if (record->event.pressed) {
                SEND_STRING(SS_TAP(X_MINUS) SS_DELAY(100) SS_LSFT(SS_TAP(X_DOT)));
            }
            break;
        case ST_MACRO_3:
            if (record->event.pressed) {
                SEND_STRING(SS_TAP(X_SCOLON) SS_DELAY(100) SS_TAP(X_ENTER));
            }
            break;
        case RGB_SLD:
            if (record->event.pressed) {
                rgblight_mode(1);
            }
            break;
        case NZ_MB_MIDDLE:
            if (record->event.pressed) {
                register_code(KC_LSHIFT);
                wait_ms(100);
                register_code(KC_MS_BTN3);
            } else {
                unregister_code(KC_MS_BTN3);
                unregister_code(KC_LSHIFT);
            }
            break;

            return false;
    }
    return true;
}

uint32_t layer_state_set_user(uint32_t state) {

  uint8_t layer = biton32(state);

  ergodox_board_led_off();
  ergodox_right_led_1_off();
  ergodox_right_led_2_off();
  ergodox_right_led_3_off();
  switch (layer) {
    case 1:
      ergodox_right_led_2_on();
      break;
    case 2:
      ergodox_right_led_1_on();
      break;
    case 3:
      ergodox_right_led_3_on();
      break;
    case 4:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      break;
    case 5:
      ergodox_right_led_1_on();
      ergodox_right_led_3_on();
      break;
    case 6:
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    case 7:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    default:
      break;
  }
  return state;
};
#include "symshift.h"
symshift_pair symshifts[] = {
	SYMSHIFT(KC_Q, KC_1),
	SYMSHIFT(KC_W, KC_2),
	SYMSHIFT(KC_E, KC_3),
	SYMSHIFT(KC_R, KC_4),
	SYMSHIFT(KC_T, KC_5),
	SYMSHIFT(KC_A, KC_6),
	SYMSHIFT(KC_S, KC_7),
	SYMSHIFT(KC_D, KC_8),
	SYMSHIFT(KC_F, KC_9),
	SYMSHIFT(KC_G, KC_A),
	SYMSHIFT(KC_Z, KC_B),
	SYMSHIFT(KC_X, KC_C),
	SYMSHIFT(KC_C, KC_D),
	SYMSHIFT(KC_V, KC_E),
	SYMSHIFT(KC_B, KC_F),
	SYMSHIFT(KC_CIRC, KC_PIPE),
	SYMSHIFT(KC_AMPR, KC_LABK),
	SYMSHIFT(KC_TILD, KC_RABK),
	SYMSHIFT(KC_Y, KC_EQUAL),
	SYMSHIFT(KC_U, KC_LBRACKET),
	SYMSHIFT(KC_I, KC_RBRACKET),
	SYMSHIFT(KC_P, KC_GRAVE),
	SYMSHIFT(KC_H, KC_PLUS),
	SYMSHIFT(KC_J, KC_LPRN),
	SYMSHIFT(KC_K, KC_RPRN),
	SYMSHIFT(KC_QUOTE, KC_DQUO),
	SYMSHIFT(KC_N, KC_ASTR),
	SYMSHIFT(KC_M, KC_LCBR),
	SYMSHIFT(KC_COMMA, KC_RCBR),
	SYMSHIFT(KC_SLASH, KC_QUES),
	SYMSHIFT(KC_COLN, KC_BSLASH),
	SYMSHIFT(KC_4, KC_LPRN),
	SYMSHIFT(KC_5, KC_RPRN)
};

qk_tap_dance_action_t tap_dance_actions[] = {
	SYMSHIFT_FN(0),
	SYMSHIFT_FN(1),
	SYMSHIFT_FN(2),
	SYMSHIFT_FN(3),
	SYMSHIFT_FN(4),
	SYMSHIFT_FN(5),
	SYMSHIFT_FN(6),
	SYMSHIFT_FN(7),
	SYMSHIFT_FN(8),
	SYMSHIFT_FN(9),
	SYMSHIFT_FN(10),
	SYMSHIFT_FN(11),
	SYMSHIFT_FN(12),
	SYMSHIFT_FN(13),
	SYMSHIFT_FN(14),
	SYMSHIFT_FN(15),
	SYMSHIFT_FN(16),
	SYMSHIFT_FN(17),
	SYMSHIFT_FN(18),
	SYMSHIFT_FN(19),
	SYMSHIFT_FN(20),
	SYMSHIFT_FN(21),
	SYMSHIFT_FN(22),
	SYMSHIFT_FN(23),
	SYMSHIFT_FN(24),
	SYMSHIFT_FN(25),
	SYMSHIFT_FN(26),
	SYMSHIFT_FN(27),
	SYMSHIFT_FN(28),
	SYMSHIFT_FN(29),
	SYMSHIFT_FN(30),
	SYMSHIFT_FN(31),
	SYMSHIFT_FN(32)
};
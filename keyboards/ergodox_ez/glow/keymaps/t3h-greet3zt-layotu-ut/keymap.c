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
};

enum tap_dance_codes {
  DANCE_0,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_LGUI,        KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_LGUI,
    KC_CAPSLOCK,    MT(MOD_LCTL, KC_A),MT(MOD_LSFT, KC_S),MT(MOD_LALT, KC_D),MT(MOD_LGUI, KC_F),KC_G,                                                                           KC_H,           MT(MOD_LGUI, KC_J),MT(MOD_LALT, KC_K),MT(MOD_LSFT, KC_L),MT(MOD_LCTL, KC_SCOLON),KC_CAPSLOCK,
    KC_LSHIFT,      KC_Z,           KC_X,           MT(MOD_RALT, KC_C),KC_V,           KC_B,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_N,           KC_M,           MT(MOD_RALT, KC_COMMA),KC_DOT,         KC_SLASH,       KC_LSHIFT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, MO(6),                                                                                                          MO(6),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    LT(1,KC_SPACE), LT(6,KC_SPACE), KC_TRANSPARENT, KC_TRANSPARENT, LT(6,KC_SPACE), LT(2,KC_SPACE)
  ),
  [1] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, RESET,
    KC_TRANSPARENT, TD(DANCE_0),    KC_AT,          KC_HASH,        KC_DLR,         KC_PERC,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_CIRC,        KC_AMPR,        KC_ASTR,        KC_UNDS,        KC_BSPACE,      KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TAB,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_DQUO,                                                                        KC_LBRACKET,    KC_LPRN,        KC_RPRN,        KC_RBRACKET,    KC_ENTER,       KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_GRAVE,       KC_QUOTE,       KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_PIPE,        KC_LCBR,        KC_RCBR,        KC_BSLASH,      KC_QUES,        KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LT(3,KC_SPACE)
  ),
  [2] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, RESET,
    KC_TRANSPARENT, KC_ESCAPE,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_UNDS,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_MINUS,       KC_7,           KC_8,           KC_9,           KC_BSPACE,      KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TAB,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_PLUS,                                                                        KC_EQUAL,       KC_4,           KC_5,           KC_6,           KC_ENTER,       KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TILD,        KC_DOT,         KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_0,           KC_1,           KC_2,           KC_3,           KC_COLN,        KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    LT(3,KC_SPACE), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, RESET,
    KC_TRANSPARENT, KC_ESCAPE,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_BSPACE,      KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TAB,         KC_TRANSPARENT, KC_TRANSPARENT, KC_SPACE,       KC_TRANSPARENT,                                                                 KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_ENTER,       KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_HOME,        KC_PGDOWN,      KC_PGUP,        KC_END,         KC_TRANSPARENT, KC_TRANSPARENT,
    WEBUSB_PAIR,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, RESET,
    KC_TRANSPARENT, KC_MS_BTN2,     KC_MS_UP,       KC_MS_BTN1,     KC_MS_BTN4,     KC_MS_ACCEL2,   KC_TRANSPARENT,                                 KC_TRANSPARENT, RGB_SPI,        RGB_VAI,        TOGGLE_LAYER_COLOR,KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_TRANSPARENT,
    KC_TRANSPARENT, KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_MS_BTN5,     KC_MS_ACCEL1,                                                                   RGB_SPD,        RGB_VAD,        RGB_MOD,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_ESCAPE,      KC_MS_BTN3,     KC_ESCAPE,      KC_ESCAPE,      KC_MS_ACCEL0,   KC_TRANSPARENT,                                 KC_TRANSPARENT, RGB_SLD,        KC_AUDIO_MUTE,  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_LCTRL,       KC_LSHIFT,      KC_LALT,        KC_LGUI,        KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_RGUI,        KC_LALT,        KC_RSHIFT,      KC_RCTRL,       KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_RALT,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_RALT,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, OSM(MOD_LCTL),  OSM(MOD_LSFT),  OSM(MOD_LALT),  OSM(MOD_LGUI),  OSM(MOD_HYPR),                                                                  OSM(MOD_HYPR),  OSM(MOD_LGUI),  OSM(MOD_LALT),  OSM(MOD_RSFT),  OSM(MOD_RGUI),  KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};


extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [0] = { {0,0,7}, {0,0,7}, {0,0,7}, {0,0,7}, {0,0,7}, {21,164,240}, {21,164,240}, {21,164,240}, {21,164,240}, {21,164,240}, {21,164,240}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {21,164,240}, {21,164,240}, {21,164,240}, {21,164,240}, {21,164,240}, {21,164,240}, {0,0,7}, {0,0,7}, {0,0,7}, {0,0,7}, {0,0,7}, {0,0,7}, {0,0,7}, {0,0,7}, {21,164,240}, {21,164,240}, {21,164,240}, {21,164,240}, {21,164,240}, {21,164,240}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {21,164,240}, {21,164,240}, {21,164,240}, {21,164,240}, {21,164,240}, {21,164,240}, {0,0,7}, {0,0,7}, {0,0,7} },

    [1] = { {0,0,7}, {0,0,7}, {0,0,7}, {0,0,7}, {0,0,7}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {21,164,240}, {0,0,7}, {0,0,7}, {0,0,7}, {0,0,7}, {0,0,7}, {0,0,7}, {0,0,7}, {0,0,7}, {0,0,7}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {86,255,255}, {86,255,255}, {43,204,255}, {0,255,255}, {43,204,255}, {21,164,240}, {21,164,240}, {21,164,240}, {0,0,7}, {0,0,7}, {0,0,7}, {0,0,7} },

    [2] = { {0,0,7}, {0,0,7}, {0,0,7}, {0,0,7}, {0,0,7}, {196,174,251}, {196,174,251}, {196,174,251}, {196,174,251}, {0,255,255}, {196,174,251}, {196,174,251}, {196,174,251}, {196,174,251}, {0,255,255}, {196,174,251}, {196,174,251}, {196,174,251}, {196,174,251}, {21,164,240}, {0,0,7}, {0,0,7}, {0,0,7}, {0,0,7}, {0,0,7}, {0,0,7}, {0,0,7}, {0,0,7}, {0,0,7}, {196,174,251}, {21,164,240}, {196,174,251}, {21,164,240}, {21,164,240}, {196,174,251}, {196,174,251}, {86,255,255}, {86,255,255}, {86,255,255}, {196,174,251}, {86,255,255}, {21,164,240}, {21,164,240}, {21,164,240}, {0,0,7}, {0,0,7}, {0,0,7}, {0,0,7} },

    [3] = { {0,0,7}, {0,0,7}, {0,0,7}, {0,0,7}, {0,0,7}, {21,164,240}, {21,164,240}, {21,164,240}, {21,164,240}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {21,164,240}, {21,164,240}, {21,164,240}, {21,164,240}, {21,164,240}, {0,0,7}, {0,0,7}, {0,0,7}, {0,0,7}, {0,0,7}, {0,0,7}, {0,0,7}, {0,0,7}, {0,0,7}, {21,164,240}, {21,164,240}, {21,164,240}, {21,164,240}, {21,164,240}, {21,164,240}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {21,164,240}, {21,164,240}, {21,164,240}, {0,0,255}, {21,164,240}, {0,0,7}, {0,0,7}, {0,0,7}, {0,0,7} },

    [4] = { {0,0,7}, {0,0,7}, {0,0,7}, {0,0,7}, {0,0,7}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {196,174,251}, {196,174,251}, {172,255,255}, {172,255,255}, {172,255,255}, {196,174,251}, {196,174,251}, {196,174,251}, {196,174,251}, {0,0,7}, {0,0,7}, {0,0,7}, {0,0,7}, {0,0,7}, {0,0,7}, {0,0,7}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {196,174,251}, {196,174,251}, {0,0,7}, {0,0,7} },

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
  if (keyboard_config.disable_layer_led) { return; }
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
    case 4:
      set_layer_color(4);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
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
      ergodox_right_led_1_on();
      break;
    case 2:
      ergodox_right_led_2_on();
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

typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

// static tap dance_state[1];

// uint8_t dance_step(qk_tap_dance_state_t *state);

// uint8_t dance_step(qk_tap_dance_state_t *state) {
//     if (state->count == 1) {
//         if (state->interrupted || !state->pressed) return SINGLE_TAP;
//         else return SINGLE_HOLD;
//     } else if (state->count == 2) {
//         if (state->interrupted) return DOUBLE_SINGLE_TAP;
//         else if (state->pressed) return DOUBLE_HOLD;
//         else return DOUBLE_TAP;
//     }
//     return MORE_TAPS;
// }


// void on_dance_0(qk_tap_dance_state_t *state, void *user_data);
// void dance_0_finished(qk_tap_dance_state_t *state, void *user_data);
// void dance_0_reset(qk_tap_dance_state_t *state, void *user_data);

// void on_dance_0(qk_tap_dance_state_t *state, void *user_data) {
//     if(state->count == 3) {
//         tap_code16(KC_EXLM);
//         tap_code16(KC_EXLM);
//         tap_code16(KC_EXLM);
//     }
//     if(state->count > 3) {
//         tap_code16(KC_EXLM);
//     }
// }

// void dance_0_finished(qk_tap_dance_state_t *state, void *user_data) {
//     dance_state[0].step = dance_step(state);
//     switch (dance_state[0].step) {
//         case SINGLE_TAP: register_code16(KC_EXLM); break;
//         case SINGLE_HOLD: register_code16(KC_ESCAPE); break;
//         case DOUBLE_TAP: register_code16(KC_ESCAPE); break;
//         case DOUBLE_SINGLE_TAP: tap_code16(KC_EXLM); register_code16(KC_EXLM);
//     }
// }

// void dance_0_reset(qk_tap_dance_state_t *state, void *user_data) {
//     wait_ms(10);
//     switch (dance_state[0].step) {
//         case SINGLE_TAP: unregister_code16(KC_EXLM); break;
//         case SINGLE_HOLD: unregister_code16(KC_ESCAPE); break;
//         case DOUBLE_TAP: unregister_code16(KC_ESCAPE); break;
//         case DOUBLE_SINGLE_TAP: unregister_code16(KC_EXLM); break;
//     }
//     dance_state[0].step = 0;
// }

// qk_tap_dance_action_t tap_dance_actions[] = {
//         [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
// };


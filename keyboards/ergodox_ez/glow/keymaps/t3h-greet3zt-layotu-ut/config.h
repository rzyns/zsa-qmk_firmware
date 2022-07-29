/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/
#define ORYX_CONFIGURATOR
#define IGNORE_MOD_TAP_INTERRUPT
#undef TAPPING_TERM
#define TAPPING_TERM 202

#define TAPPING_FORCE_HOLD

#define PERMISSIVE_HOLD
#define USB_SUSPEND_WAKEUP_DELAY 0
#define FIRMWARE_VERSION u8"bJElP/BjXmA"
#define RAW_USAGE_PAGE 0xFF60
#define RAW_USAGE_ID 0x61
#define RGB_MATRIX_STARTUP_SPD 60

#define BILATERAL_COMBINATIONS 500

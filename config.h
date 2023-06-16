#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    qmkbuilder
#define PRODUCT         keyboard
#define DESCRIPTION     Keyboard

//#define STM32_HSECLK 8000000  //已经定义为8MHZplatforms/chibios/boards/STM32_F103_STM32DUINO/board/board.h

#define MATRIX_ROWS 6
#define MATRIX_COLS 5

//     ROW                0    1   2   3   4
//#define MATRIX_ROW_PINS { B3, B4, B5, A15, B12 ,A3}
#define MATRIX_ROW_PINS { B3, B4, B5, A15, B12 ,A3}   //////////////////////
//     COL                0    1    2   3   4
//#define MATRIX_COL_PINS { B15, B14, B13, A8 , B7 }
#define MATRIX_COL_PINS { B15, B14, B13, A8 , B7 }    /////////////////////
//#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW
/*
//                             1    2   3   4
#define BACKLIGHT_PIN  A1    //A0  A1  A2  A3
#define BACKLIGHT_PWM_DRIVER    PWMD2
#define BACKLIGHT_PWM_CHANNEL   2
#define BACKLIGHT_PAL_MODE      2
*/
//                             1   2   3  4
#define BACKLIGHT_PIN  A6    //A6  A7  B0 B1
#define BACKLIGHT_PWM_DRIVER    PWMD3
#define BACKLIGHT_PWM_CHANNEL   1
#define BACKLIGHT_PAL_MODE      2

/*
//#define BACKLIGHT_PIN B8     //B6  B7 B8 B9
#define BACKLIGHT_PWM_DRIVER    PWMD4
#define BACKLIGHT_PWM_CHANNEL   1
#define BACKLIGHT_PAL_MODE      2
*/
#define BACKLIGHT_LEVELS 3
#define BACKLIGHT_BREATHING
#define BREATHING_PERIOD 6

/*
#define BACKLIGHT_PIN B0
#define BACKLIGHT_PWM_DRIVER PWMD3
#define BACKLIGHT_PWM_CHANNEL 3
#define BACKLIGHT_PAL_MODE    1
*/

/* Set 0 if debouncing isn't needed */
//#define DEBOUNCING_DELAY 5
#define DEBOUNCING_DELAY 0
/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

/* prevent stuck modifiers */
#define PREVENT_STUCK_MODIFIERS

//#define CH_CFG_ST_RESOLUTION 16   //防止：error "TIM2 is not a 32bits timer"
//#define CH_CFG_ST_TIMEDELTA 0

//#define RGB_DI_PIN B9

//#ifdef RGB_DI_PIN
// # define RGBLIGHT_ANIMATIONS
// # define RGBLED_NUM 3
// # define RGBLIGHT_HUE_STEP 8
// # define RGBLIGHT_SAT_STEP 8
// # define RGBLIGHT_VAL_STEP 8
// # endif

#endif

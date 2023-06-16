# MCU name
#MCU = STM32F103 #APM32F103
MCU = STM32F103

MCU_LDSCRIPT = STM32F103xB_uf2
FIRMWARE_FORMAT = uf2
BOARD = STM32_F103_STM32DUINO
# Bootloader selection
#BOOTLOADER = stm32duino
BOOTLOADER = custom
#BOOTLOADER = tinyuf2
#BOOTLOADER = caterina

# Bootloader selection

# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = yes     # Enable Bootmagic Lite
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = no      # Audio control and System control
CONSOLE_ENABLE = no        # Console for debug
COMMAND_ENABLE = no        # Commands for debug and configuration
NKRO_ENABLE = yes           # Enable N-Key Rollover
BACKLIGHT_ENABLE = yes      # Enable keyboard backlight functionality
BACKLIGHT_DRIVER = pwm
RGBLIGHT_ENABLE = no      # Enable keyboard RGB underglow
AUDIO_ENABLE = no          # Audio output

ENCODER_ENABLE = no
# Enter lower-power sleep mode when on the ChibiOS idle thread
OPT_DEFS += -DCORTEX_ENABLE_WFI_IDLE=TRUE

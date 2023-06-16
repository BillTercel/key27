#include "key27.h"

#define MAGIC_BOOT 0x544F4F42UL
#define MAGIC_REG *(volatile uint32_t*)0x20004000
void bootloader_jump(void) {
     MAGIC_REG = MAGIC_BOOT;
     NVIC_SystemReset();
}

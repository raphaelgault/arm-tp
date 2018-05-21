#include "board.h"

DEFINE_GPIO(A, 0x40020000);
DEFINE_GPIO(B, 0x40020400);
DEFINE_GPIO(C, 0x40020800);
DEFINE_GPIO(D, 0x40020C00);
DEFINE_GPIO(E, 0x40021000);
DEFINE_GPIO(F, 0x40021400);
DEFINE_GPIO(G, 0x40021800);
DEFINE_GPIO(H, 0x40021C00);
DEFINE_GPIO(I, 0x40022000);
DEFINE_GPIO(J, 0x40022400);
DEFINE_GPIO(K, 0x40022800);


DEFINE_REGISTER(RCC_AHB1ENR, 0x40023800, 0x30);
DEFINE_REGISTER(SYSCFG_EXTICR1, 0x40013800, 0x08);
DEFINE_REGISTER(EXTI_IMR, 0x40013c00, 0x00);
DEFINE_REGISTER(EXTI_FTSR, 0x40013c00, 0x08);
DEFINE_REGISTER(EXTI_RTSR, 0x40013c00, 0x0C);
DEFINE_REGISTER(EXTI_PR, 0x40013c00, 0x14);
DEFINE_REGISTER(NVIC_ISER0, 0xE000E100, 0x00);
DEFINE_REGISTER(NVIC_ICPR0, 0xE000E280, 0x00);
#ifndef RCC_PRIVATE_H
#define RCC_PRIVATE_H
/*System clock configurations*/
#define HSI 1
#define HSE_RC 2
#define HSE_CRYSTAL 3
#define PLL 4

/*RCC Registers*/
#define RCC_CR *((volatile u32 *)(0x40023800))//RCC clock control register

#define RCC_PLLCFGR *((volatile u32 *)(0x40023804))//RCC PLL configuration register

#define RCC_CFGR *((volatile u32 *)(0x40023808))//RCC clock configuration register

#define RCC_CIR *((volatile u32 *)(0x4002380C))//RCC clock interrupt register

#define RCC_AHB1RSTR *((volatile u32 *)(0x40023810))//RCC AHB1 peripheral reset register

#define RCC_AHB2RSTR *((volatile u32 *)(0x40023814))//RCC AHB2 peripheral reset register

#define RCC_APB1RSTR *((volatile u32 *)(0x40023820))//RCC APB1 peripheral reset register for

#define RCC_APB2RSTR *((volatile u32 *)(0x40023824))//RCC APB2 peripheral reset register

#define RCC_AHB1ENR *((volatile u32 *)(0x40023830))//RCC AHB1 peripheral clock enable register

#define RCC_AHB2ENR *((volatile u32 *)(0x40023834))//RCC AHB2 peripheral clock enable register

#define RCC_APB1ENR *((volatile u32 *)(0x40023840))//RCC APB1 peripheral clock enable register

#define RCC_APB2ENR *((volatile u32 *)(0x40023844))//RCC APB2 peripheral clock enable register

#define RCC_AHB1LPENR *((volatile u32 *)(0x40023850))//RCC AHB1 peripheral clock enable in low power mode register

#define RCC_AHB2LPENR *((volatile u32 *)(0x40023854))//RCC AHB2 peripheral clock enable in low power mode register

#define RCC_APB1LPENR *((volatile u32 *)(0x40023860))//RCC APB1 peripheral clock enable in low power mode register

#define RCC_APB2LPENR *((volatile u32 *)(0x40023864))//RCC APB2 peripheral clock enabled in low power mode register

#define RCC_BDCR *((volatile u32 *)(0x40023870)) //RCC backup domain control register

#define RCC_CSR *((volatile u32 *)(0x40023874)) //RCC clock control & status register

#define RCC_SSCGR *((volatile u32 *)(0x40023880)) //RCC spread spectrum clock generation register

#define RCC_PLLI2SCFGR *((volatile u32 *)(0x40023884)) //RCC PLLI2S configuration register

#define RCC_DCKCFGR *((volatile u32 *)(0x4002388C)) //RCC Dedicated Clocks Configuration Register


#endif

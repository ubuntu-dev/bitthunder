/**
 *	Defines the Reset and Clock Control Register definitions for STM32
 *
 *
 *
 **/
#ifndef _RCC_H_
#define _RCC_H_

#include <bitthunder.h>

typedef struct _LPC11xx_RCC_REGS {
	BT_u32 SYSMEMREMAP;
	BT_u32 PRESETCTRL;

#define	LPC11xx_RCC_PRESETCTRL_CAN_DEASSERT		0x00000008

	BT_u32 SYSPLLCTRL;

#define LPC11xx_RCC_SYSPLLCTRL_MSEL(x)			((x & 0x0000001F)+1)

	BT_u32 SYSPLLSTAT;

#define LPC11xx_RCC_SYSPLLSTAT_LOCKED			0x00000001

	BT_STRUCT_RESERVED_u32(0, 0x0C, 0x20);
	BT_u32 SYSOSCCTRL;


#define	LPC11xx_RCC_SYSOSCCTL_XTAL_1MHZ_20MHz				0x00000000
#define	LPC11xx_RCC_SYSOSCCTL_XTAL_15MHZ_25MHz				0x00000002

	BT_u32 WDTOSCCTRL;

#define LPC11xx_RCC_WDTOSC_NOT_USED				0xFFFFFFFF

	BT_u32 IRCCTRL;
	BT_u32 LFOSCCTRL;
	BT_u32 SYSRSTSTAT;
	BT_STRUCT_RESERVED_u32(2, 0x30, 0x40);
	BT_u32 SYSPLLCLKSEL;

#define LPC11xx_RCC_SYSPLLCLKSEL_RESERVED		0x00000003
#define LPC11xx_RCC_SYSPLLCLKSEL_CLKIN			0x00000002
#define LPC11xx_RCC_SYSPLLCLKSEL_XTAL			0x00000001
#define LPC11xx_RCC_SYSPLLCLKSEL_IRC_OSC		0x00000000
#define LPC11xx_RCC_SYSPLLCLKSEL_NOT_USED		0xFFFFFFFF


	BT_u32 SYSPLLCLKUEN;

#define LPC11xx_RCC_SYSPLLCLKUEN_UPDATE			0x00000001

	BT_STRUCT_RESERVED_u32(3, 0x44, 0x70);
	BT_u32 MAINCLKSEL;

#define LPC11xx_RCC_MAINCLKSEL_PLL_OUT			0x00000003
#define LPC11xx_RCC_MAINCLKSEL_WDT_OSC			0x00000002
#define LPC11xx_RCC_MAINCLKSEL_LF_OSC			0x00000002
#define LPC11xx_RCC_MAINCLKSEL_PLL_IN			0x00000001
#define LPC11xx_RCC_MAINCLKSEL_IRC_OSC			0x00000000

	BT_u32 MAINCLKUEN;

#define LPC11xx_RCC_MAINCLKUEN_UPDATE			0x00000001

	BT_u32 SYSAHBCLKDIV;
	BT_STRUCT_RESERVED_u32(4, 0x78, 0x80);
	BT_u32 SYSAHBCLKCTRL;

#define LPC11xx_RCC_SYSAHBCLKCTRL_TMR0EN		0x00000080
#define LPC11xx_RCC_SYSAHBCLKCTRL_TMR1EN		0x00000100
#define LPC11xx_RCC_SYSAHBCLKCTRL_TMR2EN		0x00000200
#define LPC11xx_RCC_SYSAHBCLKCTRL_TMR3EN		0x00000400
#define LPC11xx_RCC_SYSAHBCLKCTRL_UARTEN		0x00001000
#define LPC11xx_RCC_SYSAHBCLKCTRL_IOCON			0x00010000
#define LPC11xx_RCC_SYSAHBCLKCTRL_CANEN			0x00020000


	BT_STRUCT_RESERVED_u32(5, 0x80, 0x94);
	BT_u32 SSP0CLKDIV2;
	BT_u32 UARTCLKDIV;
	BT_u32 SSP1CLKDIV;
	BT_STRUCT_RESERVED_u32(6, 0x9C, 0xD0);
	BT_u32 WDTCLKSEL;

	BT_u32 WDTCLKUEN;

#define LPC11xx_RCC_WDTCLKUEN_UPDATE			0x00000001

	BT_u32 WDTCLKDIV;
	BT_STRUCT_RESERVED_u32(7, 0xD8, 0xE0);
	BT_u32 CLKOUTCLKSEL;
	BT_u32 CLKOUTUEN;
	BT_u32 CLKOUTCLKDIV;
	BT_STRUCT_RESERVED_u32(8, 0xE8, 0x100);
	BT_u32 PIOPORCAP0;
	BT_u32 PIOPORCAP1;
	BT_STRUCT_RESERVED_u32(9, 0x104, 0x150);
	BT_u32 BODCTRL;
	BT_u32 SYSTCKCAL;
	BT_STRUCT_RESERVED_u32(10, 0x154, 0x174);
	BT_u32 NMISRC;
	BT_u32 PINTSEL0;
	BT_u32 PINTSEL1;
	BT_u32 PINTSEL2;
	BT_u32 PINTSEL3;
	BT_u32 PINTSEL4;
	BT_u32 PINTSEL5;
	BT_u32 PINTSEL6;
	BT_u32 PINTSEL7;
	BT_STRUCT_RESERVED_u32(11, 0x194, 0x200);
#ifdef BT_CONFIG_MACH_LPC11xx_LPC11Cxx
	BT_u32 STARTAPRP0;
	BT_u32 STARTERP0;
	BT_u32 STARTRSRP0CLR;
	BT_u32 STARTSRP0;
	BT_STRUCT_RESERVED_u32(12, 0x20C, 0x230);
	BT_u32 PDASLEEPCFG;
	BT_u32 PDAWAKECFG;
#endif
	BT_u32 PDRUNCFG;

#define	LPC11xx_RCC_PDRUNCFG_SYSPLL_PD			0x00000080
#define	LPC11xx_RCC_PDRUNCFG_WDTOSC_PD			0x00000040
#define	LPC11xx_RCC_PDRUNCFG_SYSOSC_PD			0x00000020
#define	LPC11xx_RCC_PDRUNCFG_ADC_PD				0x00000010
#define	LPC11xx_RCC_PDRUNCFG_BOD_PD				0x00000008
#define	LPC11xx_RCC_PDRUNCFG_FLASH_PD			0x00000004
#define	LPC11xx_RCC_PDRUNCFG_IRC_PD				0x00000002
#define	LPC11xx_RCC_PDRUNCFG_IRCOUT_PD			0x00000001

	BT_STRUCT_RESERVED_u32(13, 0x238, 0x3F4);
	BT_u32 DEVICE_ID;

} LPC11xx_RCC_REGS;

#define LPC11xx_RCC_BASE	0x40048000
#define LPC11xx_RCC 		((LPC11xx_RCC_REGS *) (LPC11xx_RCC_BASE))

BT_u32 BT_LPC11xx_GetMainFrequency(void);
BT_u32 BT_LPC11xx_GetSystemFrequency(void);
void BT_LPC11xx_SetSystemFrequency(BT_u32 MainClkSrc,
	  							   BT_u32 SysClkCtrl,
								   BT_u32 PLLClkSrc,
								   BT_u32 PLLClkCtrl,
								   BT_u32 WDTClkSrc,
								   BT_u32 SystemClockDivider);


#endif

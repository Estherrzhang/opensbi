#ifndef AONSYS_CLKGEN_REG_OFFSET_DEFINE_H
#define AONSYS_CLKGEN_REG_OFFSET_DEFINE_H

#define REG_APSYS_CLKGEN_BASE		0xFF010000

#define REG_AP_C910_CORE_CLK_TEECFG	(REG_APSYS_CLKGEN_BASE + 0x1104)

#define C910_CORE0		0
#define C910_CORE1		1
#define C910_CORE2		2
#define C910_CORE3		3

/* REG_AP_C910_CORE_CLK_TEECFG */
#define C910_CORE0_CLK_EN		(1 << 5)
#define C910_CORE1_CLK_EN		(1 << 13)
#define C910_CORE2_CLK_EN		(1 << 21)
#define C910_CORE3_CLK_EN		(1 << 29)
#endif


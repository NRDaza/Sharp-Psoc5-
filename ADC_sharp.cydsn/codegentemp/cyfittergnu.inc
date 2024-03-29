/*******************************************************************************
* File Name: cyfittergnu.inc
* 
* PSoC Creator  4.2
*
* Description:
* 
* This file is automatically generated by PSoC Creator.
*
********************************************************************************
* Copyright (c) 2007-2018 Cypress Semiconductor.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

.ifndef INCLUDED_CYFITTERGNU_INC
.set INCLUDED_CYFITTERGNU_INC, 1
.include "cydevicegnu.inc"
.include "cydevicegnu_trm.inc"

/* E */
.set E__0__INTTYPE, CYREG_PICU12_INTTYPE7
.set E__0__MASK, 0x80
.set E__0__PC, CYREG_PRT12_PC7
.set E__0__PORT, 12
.set E__0__SHIFT, 7
.set E__AG, CYREG_PRT12_AG
.set E__BIE, CYREG_PRT12_BIE
.set E__BIT_MASK, CYREG_PRT12_BIT_MASK
.set E__BYP, CYREG_PRT12_BYP
.set E__DM0, CYREG_PRT12_DM0
.set E__DM1, CYREG_PRT12_DM1
.set E__DM2, CYREG_PRT12_DM2
.set E__DR, CYREG_PRT12_DR
.set E__INP_DIS, CYREG_PRT12_INP_DIS
.set E__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU12_BASE
.set E__MASK, 0x80
.set E__PORT, 12
.set E__PRT, CYREG_PRT12_PRT
.set E__PRTDSI__DBL_SYNC_IN, CYREG_PRT12_DBL_SYNC_IN
.set E__PRTDSI__OE_SEL0, CYREG_PRT12_OE_SEL0
.set E__PRTDSI__OE_SEL1, CYREG_PRT12_OE_SEL1
.set E__PRTDSI__OUT_SEL0, CYREG_PRT12_OUT_SEL0
.set E__PRTDSI__OUT_SEL1, CYREG_PRT12_OUT_SEL1
.set E__PRTDSI__SYNC_OUT, CYREG_PRT12_SYNC_OUT
.set E__PS, CYREG_PRT12_PS
.set E__SHIFT, 7
.set E__SIO_CFG, CYREG_PRT12_SIO_CFG
.set E__SIO_DIFF, CYREG_PRT12_SIO_DIFF
.set E__SIO_HYST_EN, CYREG_PRT12_SIO_HYST_EN
.set E__SIO_REG_HIFREQ, CYREG_PRT12_SIO_REG_HIFREQ
.set E__SLW, CYREG_PRT12_SLW

/* D4 */
.set D4__0__INTTYPE, CYREG_PICU2_INTTYPE3
.set D4__0__MASK, 0x08
.set D4__0__PC, CYREG_PRT2_PC3
.set D4__0__PORT, 2
.set D4__0__SHIFT, 3
.set D4__AG, CYREG_PRT2_AG
.set D4__AMUX, CYREG_PRT2_AMUX
.set D4__BIE, CYREG_PRT2_BIE
.set D4__BIT_MASK, CYREG_PRT2_BIT_MASK
.set D4__BYP, CYREG_PRT2_BYP
.set D4__CTL, CYREG_PRT2_CTL
.set D4__DM0, CYREG_PRT2_DM0
.set D4__DM1, CYREG_PRT2_DM1
.set D4__DM2, CYREG_PRT2_DM2
.set D4__DR, CYREG_PRT2_DR
.set D4__INP_DIS, CYREG_PRT2_INP_DIS
.set D4__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU2_BASE
.set D4__LCD_COM_SEG, CYREG_PRT2_LCD_COM_SEG
.set D4__LCD_EN, CYREG_PRT2_LCD_EN
.set D4__MASK, 0x08
.set D4__PORT, 2
.set D4__PRT, CYREG_PRT2_PRT
.set D4__PRTDSI__CAPS_SEL, CYREG_PRT2_CAPS_SEL
.set D4__PRTDSI__DBL_SYNC_IN, CYREG_PRT2_DBL_SYNC_IN
.set D4__PRTDSI__OE_SEL0, CYREG_PRT2_OE_SEL0
.set D4__PRTDSI__OE_SEL1, CYREG_PRT2_OE_SEL1
.set D4__PRTDSI__OUT_SEL0, CYREG_PRT2_OUT_SEL0
.set D4__PRTDSI__OUT_SEL1, CYREG_PRT2_OUT_SEL1
.set D4__PRTDSI__SYNC_OUT, CYREG_PRT2_SYNC_OUT
.set D4__PS, CYREG_PRT2_PS
.set D4__SHIFT, 3
.set D4__SLW, CYREG_PRT2_SLW

/* D5 */
.set D5__0__INTTYPE, CYREG_PICU2_INTTYPE4
.set D5__0__MASK, 0x10
.set D5__0__PC, CYREG_PRT2_PC4
.set D5__0__PORT, 2
.set D5__0__SHIFT, 4
.set D5__AG, CYREG_PRT2_AG
.set D5__AMUX, CYREG_PRT2_AMUX
.set D5__BIE, CYREG_PRT2_BIE
.set D5__BIT_MASK, CYREG_PRT2_BIT_MASK
.set D5__BYP, CYREG_PRT2_BYP
.set D5__CTL, CYREG_PRT2_CTL
.set D5__DM0, CYREG_PRT2_DM0
.set D5__DM1, CYREG_PRT2_DM1
.set D5__DM2, CYREG_PRT2_DM2
.set D5__DR, CYREG_PRT2_DR
.set D5__INP_DIS, CYREG_PRT2_INP_DIS
.set D5__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU2_BASE
.set D5__LCD_COM_SEG, CYREG_PRT2_LCD_COM_SEG
.set D5__LCD_EN, CYREG_PRT2_LCD_EN
.set D5__MASK, 0x10
.set D5__PORT, 2
.set D5__PRT, CYREG_PRT2_PRT
.set D5__PRTDSI__CAPS_SEL, CYREG_PRT2_CAPS_SEL
.set D5__PRTDSI__DBL_SYNC_IN, CYREG_PRT2_DBL_SYNC_IN
.set D5__PRTDSI__OE_SEL0, CYREG_PRT2_OE_SEL0
.set D5__PRTDSI__OE_SEL1, CYREG_PRT2_OE_SEL1
.set D5__PRTDSI__OUT_SEL0, CYREG_PRT2_OUT_SEL0
.set D5__PRTDSI__OUT_SEL1, CYREG_PRT2_OUT_SEL1
.set D5__PRTDSI__SYNC_OUT, CYREG_PRT2_SYNC_OUT
.set D5__PS, CYREG_PRT2_PS
.set D5__SHIFT, 4
.set D5__SLW, CYREG_PRT2_SLW

/* D6 */
.set D6__0__INTTYPE, CYREG_PICU2_INTTYPE5
.set D6__0__MASK, 0x20
.set D6__0__PC, CYREG_PRT2_PC5
.set D6__0__PORT, 2
.set D6__0__SHIFT, 5
.set D6__AG, CYREG_PRT2_AG
.set D6__AMUX, CYREG_PRT2_AMUX
.set D6__BIE, CYREG_PRT2_BIE
.set D6__BIT_MASK, CYREG_PRT2_BIT_MASK
.set D6__BYP, CYREG_PRT2_BYP
.set D6__CTL, CYREG_PRT2_CTL
.set D6__DM0, CYREG_PRT2_DM0
.set D6__DM1, CYREG_PRT2_DM1
.set D6__DM2, CYREG_PRT2_DM2
.set D6__DR, CYREG_PRT2_DR
.set D6__INP_DIS, CYREG_PRT2_INP_DIS
.set D6__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU2_BASE
.set D6__LCD_COM_SEG, CYREG_PRT2_LCD_COM_SEG
.set D6__LCD_EN, CYREG_PRT2_LCD_EN
.set D6__MASK, 0x20
.set D6__PORT, 2
.set D6__PRT, CYREG_PRT2_PRT
.set D6__PRTDSI__CAPS_SEL, CYREG_PRT2_CAPS_SEL
.set D6__PRTDSI__DBL_SYNC_IN, CYREG_PRT2_DBL_SYNC_IN
.set D6__PRTDSI__OE_SEL0, CYREG_PRT2_OE_SEL0
.set D6__PRTDSI__OE_SEL1, CYREG_PRT2_OE_SEL1
.set D6__PRTDSI__OUT_SEL0, CYREG_PRT2_OUT_SEL0
.set D6__PRTDSI__OUT_SEL1, CYREG_PRT2_OUT_SEL1
.set D6__PRTDSI__SYNC_OUT, CYREG_PRT2_SYNC_OUT
.set D6__PS, CYREG_PRT2_PS
.set D6__SHIFT, 5
.set D6__SLW, CYREG_PRT2_SLW

/* D7 */
.set D7__0__INTTYPE, CYREG_PICU2_INTTYPE6
.set D7__0__MASK, 0x40
.set D7__0__PC, CYREG_PRT2_PC6
.set D7__0__PORT, 2
.set D7__0__SHIFT, 6
.set D7__AG, CYREG_PRT2_AG
.set D7__AMUX, CYREG_PRT2_AMUX
.set D7__BIE, CYREG_PRT2_BIE
.set D7__BIT_MASK, CYREG_PRT2_BIT_MASK
.set D7__BYP, CYREG_PRT2_BYP
.set D7__CTL, CYREG_PRT2_CTL
.set D7__DM0, CYREG_PRT2_DM0
.set D7__DM1, CYREG_PRT2_DM1
.set D7__DM2, CYREG_PRT2_DM2
.set D7__DR, CYREG_PRT2_DR
.set D7__INP_DIS, CYREG_PRT2_INP_DIS
.set D7__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU2_BASE
.set D7__LCD_COM_SEG, CYREG_PRT2_LCD_COM_SEG
.set D7__LCD_EN, CYREG_PRT2_LCD_EN
.set D7__MASK, 0x40
.set D7__PORT, 2
.set D7__PRT, CYREG_PRT2_PRT
.set D7__PRTDSI__CAPS_SEL, CYREG_PRT2_CAPS_SEL
.set D7__PRTDSI__DBL_SYNC_IN, CYREG_PRT2_DBL_SYNC_IN
.set D7__PRTDSI__OE_SEL0, CYREG_PRT2_OE_SEL0
.set D7__PRTDSI__OE_SEL1, CYREG_PRT2_OE_SEL1
.set D7__PRTDSI__OUT_SEL0, CYREG_PRT2_OUT_SEL0
.set D7__PRTDSI__OUT_SEL1, CYREG_PRT2_OUT_SEL1
.set D7__PRTDSI__SYNC_OUT, CYREG_PRT2_SYNC_OUT
.set D7__PS, CYREG_PRT2_PS
.set D7__SHIFT, 6
.set D7__SLW, CYREG_PRT2_SLW

/* RS */
.set RS__0__INTTYPE, CYREG_PICU2_INTTYPE7
.set RS__0__MASK, 0x80
.set RS__0__PC, CYREG_PRT2_PC7
.set RS__0__PORT, 2
.set RS__0__SHIFT, 7
.set RS__AG, CYREG_PRT2_AG
.set RS__AMUX, CYREG_PRT2_AMUX
.set RS__BIE, CYREG_PRT2_BIE
.set RS__BIT_MASK, CYREG_PRT2_BIT_MASK
.set RS__BYP, CYREG_PRT2_BYP
.set RS__CTL, CYREG_PRT2_CTL
.set RS__DM0, CYREG_PRT2_DM0
.set RS__DM1, CYREG_PRT2_DM1
.set RS__DM2, CYREG_PRT2_DM2
.set RS__DR, CYREG_PRT2_DR
.set RS__INP_DIS, CYREG_PRT2_INP_DIS
.set RS__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU2_BASE
.set RS__LCD_COM_SEG, CYREG_PRT2_LCD_COM_SEG
.set RS__LCD_EN, CYREG_PRT2_LCD_EN
.set RS__MASK, 0x80
.set RS__PORT, 2
.set RS__PRT, CYREG_PRT2_PRT
.set RS__PRTDSI__CAPS_SEL, CYREG_PRT2_CAPS_SEL
.set RS__PRTDSI__DBL_SYNC_IN, CYREG_PRT2_DBL_SYNC_IN
.set RS__PRTDSI__OE_SEL0, CYREG_PRT2_OE_SEL0
.set RS__PRTDSI__OE_SEL1, CYREG_PRT2_OE_SEL1
.set RS__PRTDSI__OUT_SEL0, CYREG_PRT2_OUT_SEL0
.set RS__PRTDSI__OUT_SEL1, CYREG_PRT2_OUT_SEL1
.set RS__PRTDSI__SYNC_OUT, CYREG_PRT2_SYNC_OUT
.set RS__PS, CYREG_PRT2_PS
.set RS__SHIFT, 7
.set RS__SLW, CYREG_PRT2_SLW

/* ADC */
.set ADC_DEC__COHER, CYREG_DEC_COHER
.set ADC_DEC__CR, CYREG_DEC_CR
.set ADC_DEC__DR1, CYREG_DEC_DR1
.set ADC_DEC__DR2, CYREG_DEC_DR2
.set ADC_DEC__DR2H, CYREG_DEC_DR2H
.set ADC_DEC__GCOR, CYREG_DEC_GCOR
.set ADC_DEC__GCORH, CYREG_DEC_GCORH
.set ADC_DEC__GVAL, CYREG_DEC_GVAL
.set ADC_DEC__OCOR, CYREG_DEC_OCOR
.set ADC_DEC__OCORH, CYREG_DEC_OCORH
.set ADC_DEC__OCORM, CYREG_DEC_OCORM
.set ADC_DEC__OUTSAMP, CYREG_DEC_OUTSAMP
.set ADC_DEC__OUTSAMPH, CYREG_DEC_OUTSAMPH
.set ADC_DEC__OUTSAMPM, CYREG_DEC_OUTSAMPM
.set ADC_DEC__OUTSAMPS, CYREG_DEC_OUTSAMPS
.set ADC_DEC__PM_ACT_CFG, CYREG_PM_ACT_CFG10
.set ADC_DEC__PM_ACT_MSK, 0x01
.set ADC_DEC__PM_STBY_CFG, CYREG_PM_STBY_CFG10
.set ADC_DEC__PM_STBY_MSK, 0x01
.set ADC_DEC__SHIFT1, CYREG_DEC_SHIFT1
.set ADC_DEC__SHIFT2, CYREG_DEC_SHIFT2
.set ADC_DEC__SR, CYREG_DEC_SR
.set ADC_DEC__TRIM__M1, CYREG_FLSHID_CUST_TABLES_DEC_M1
.set ADC_DEC__TRIM__M2, CYREG_FLSHID_CUST_TABLES_DEC_M2
.set ADC_DEC__TRIM__M3, CYREG_FLSHID_CUST_TABLES_DEC_M3
.set ADC_DEC__TRIM__M4, CYREG_FLSHID_CUST_TABLES_DEC_M4
.set ADC_DEC__TRIM__M5, CYREG_FLSHID_CUST_TABLES_DEC_M5
.set ADC_DEC__TRIM__M6, CYREG_FLSHID_CUST_TABLES_DEC_M6
.set ADC_DEC__TRIM__M7, CYREG_FLSHID_CUST_TABLES_DEC_M7
.set ADC_DEC__TRIM__M8, CYREG_FLSHID_CUST_TABLES_DEC_M8
.set ADC_DSM__BUF0, CYREG_DSM0_BUF0
.set ADC_DSM__BUF1, CYREG_DSM0_BUF1
.set ADC_DSM__BUF2, CYREG_DSM0_BUF2
.set ADC_DSM__BUF3, CYREG_DSM0_BUF3
.set ADC_DSM__CLK, CYREG_DSM0_CLK
.set ADC_DSM__CR0, CYREG_DSM0_CR0
.set ADC_DSM__CR1, CYREG_DSM0_CR1
.set ADC_DSM__CR10, CYREG_DSM0_CR10
.set ADC_DSM__CR11, CYREG_DSM0_CR11
.set ADC_DSM__CR12, CYREG_DSM0_CR12
.set ADC_DSM__CR13, CYREG_DSM0_CR13
.set ADC_DSM__CR14, CYREG_DSM0_CR14
.set ADC_DSM__CR15, CYREG_DSM0_CR15
.set ADC_DSM__CR16, CYREG_DSM0_CR16
.set ADC_DSM__CR17, CYREG_DSM0_CR17
.set ADC_DSM__CR2, CYREG_DSM0_CR2
.set ADC_DSM__CR3, CYREG_DSM0_CR3
.set ADC_DSM__CR4, CYREG_DSM0_CR4
.set ADC_DSM__CR5, CYREG_DSM0_CR5
.set ADC_DSM__CR6, CYREG_DSM0_CR6
.set ADC_DSM__CR7, CYREG_DSM0_CR7
.set ADC_DSM__CR8, CYREG_DSM0_CR8
.set ADC_DSM__CR9, CYREG_DSM0_CR9
.set ADC_DSM__DEM0, CYREG_DSM0_DEM0
.set ADC_DSM__DEM1, CYREG_DSM0_DEM1
.set ADC_DSM__MISC, CYREG_DSM0_MISC
.set ADC_DSM__OUT0, CYREG_DSM0_OUT0
.set ADC_DSM__OUT1, CYREG_DSM0_OUT1
.set ADC_DSM__REF0, CYREG_DSM0_REF0
.set ADC_DSM__REF1, CYREG_DSM0_REF1
.set ADC_DSM__REF2, CYREG_DSM0_REF2
.set ADC_DSM__REF3, CYREG_DSM0_REF3
.set ADC_DSM__RSVD1, CYREG_DSM0_RSVD1
.set ADC_DSM__SW0, CYREG_DSM0_SW0
.set ADC_DSM__SW2, CYREG_DSM0_SW2
.set ADC_DSM__SW3, CYREG_DSM0_SW3
.set ADC_DSM__SW4, CYREG_DSM0_SW4
.set ADC_DSM__SW6, CYREG_DSM0_SW6
.set ADC_DSM__TR0, CYREG_NPUMP_DSM_TR0
.set ADC_DSM__TST0, CYREG_DSM0_TST0
.set ADC_DSM__TST1, CYREG_DSM0_TST1
.set ADC_Ext_CP_Clk__CFG0, CYREG_CLKDIST_DCFG0_CFG0
.set ADC_Ext_CP_Clk__CFG1, CYREG_CLKDIST_DCFG0_CFG1
.set ADC_Ext_CP_Clk__CFG2, CYREG_CLKDIST_DCFG0_CFG2
.set ADC_Ext_CP_Clk__CFG2_SRC_SEL_MASK, 0x07
.set ADC_Ext_CP_Clk__INDEX, 0x00
.set ADC_Ext_CP_Clk__PM_ACT_CFG, CYREG_PM_ACT_CFG2
.set ADC_Ext_CP_Clk__PM_ACT_MSK, 0x01
.set ADC_Ext_CP_Clk__PM_STBY_CFG, CYREG_PM_STBY_CFG2
.set ADC_Ext_CP_Clk__PM_STBY_MSK, 0x01
.set ADC_IRQ__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set ADC_IRQ__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set ADC_IRQ__INTC_MASK, 0x20000000
.set ADC_IRQ__INTC_NUMBER, 29
.set ADC_IRQ__INTC_PRIOR_NUM, 7
.set ADC_IRQ__INTC_PRIOR_REG, CYREG_NVIC_PRI_29
.set ADC_IRQ__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set ADC_IRQ__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0
.set ADC_theACLK__CFG0, CYREG_CLKDIST_ACFG0_CFG0
.set ADC_theACLK__CFG1, CYREG_CLKDIST_ACFG0_CFG1
.set ADC_theACLK__CFG2, CYREG_CLKDIST_ACFG0_CFG2
.set ADC_theACLK__CFG2_SRC_SEL_MASK, 0x07
.set ADC_theACLK__CFG3, CYREG_CLKDIST_ACFG0_CFG3
.set ADC_theACLK__CFG3_PHASE_DLY_MASK, 0x0F
.set ADC_theACLK__INDEX, 0x00
.set ADC_theACLK__PM_ACT_CFG, CYREG_PM_ACT_CFG1
.set ADC_theACLK__PM_ACT_MSK, 0x01
.set ADC_theACLK__PM_STBY_CFG, CYREG_PM_STBY_CFG1
.set ADC_theACLK__PM_STBY_MSK, 0x01

/* LCD */
.set LCD_Cntl_Port_Sync_ctrl_reg__0__MASK, 0x01
.set LCD_Cntl_Port_Sync_ctrl_reg__0__POS, 0
.set LCD_Cntl_Port_Sync_ctrl_reg__1__MASK, 0x02
.set LCD_Cntl_Port_Sync_ctrl_reg__1__POS, 1
.set LCD_Cntl_Port_Sync_ctrl_reg__16BIT_CONTROL_AUX_CTL_REG, CYREG_B0_UDB10_11_ACTL
.set LCD_Cntl_Port_Sync_ctrl_reg__16BIT_CONTROL_CONTROL_REG, CYREG_B0_UDB10_11_CTL
.set LCD_Cntl_Port_Sync_ctrl_reg__16BIT_CONTROL_COUNT_REG, CYREG_B0_UDB10_11_CTL
.set LCD_Cntl_Port_Sync_ctrl_reg__16BIT_COUNT_CONTROL_REG, CYREG_B0_UDB10_11_CTL
.set LCD_Cntl_Port_Sync_ctrl_reg__16BIT_COUNT_COUNT_REG, CYREG_B0_UDB10_11_CTL
.set LCD_Cntl_Port_Sync_ctrl_reg__16BIT_MASK_MASK_REG, CYREG_B0_UDB10_11_MSK
.set LCD_Cntl_Port_Sync_ctrl_reg__16BIT_MASK_PERIOD_REG, CYREG_B0_UDB10_11_MSK
.set LCD_Cntl_Port_Sync_ctrl_reg__16BIT_PERIOD_MASK_REG, CYREG_B0_UDB10_11_MSK
.set LCD_Cntl_Port_Sync_ctrl_reg__16BIT_PERIOD_PERIOD_REG, CYREG_B0_UDB10_11_MSK
.set LCD_Cntl_Port_Sync_ctrl_reg__2__MASK, 0x04
.set LCD_Cntl_Port_Sync_ctrl_reg__2__POS, 2
.set LCD_Cntl_Port_Sync_ctrl_reg__3__MASK, 0x08
.set LCD_Cntl_Port_Sync_ctrl_reg__3__POS, 3
.set LCD_Cntl_Port_Sync_ctrl_reg__4__MASK, 0x10
.set LCD_Cntl_Port_Sync_ctrl_reg__4__POS, 4
.set LCD_Cntl_Port_Sync_ctrl_reg__5__MASK, 0x20
.set LCD_Cntl_Port_Sync_ctrl_reg__5__POS, 5
.set LCD_Cntl_Port_Sync_ctrl_reg__CONTROL_AUX_CTL_REG, CYREG_B0_UDB10_ACTL
.set LCD_Cntl_Port_Sync_ctrl_reg__CONTROL_REG, CYREG_B0_UDB10_CTL
.set LCD_Cntl_Port_Sync_ctrl_reg__CONTROL_ST_REG, CYREG_B0_UDB10_ST_CTL
.set LCD_Cntl_Port_Sync_ctrl_reg__COUNT_REG, CYREG_B0_UDB10_CTL
.set LCD_Cntl_Port_Sync_ctrl_reg__COUNT_ST_REG, CYREG_B0_UDB10_ST_CTL
.set LCD_Cntl_Port_Sync_ctrl_reg__MASK, 0x3F
.set LCD_Cntl_Port_Sync_ctrl_reg__MASK_CTL_AUX_CTL_REG, CYREG_B0_UDB10_MSK_ACTL
.set LCD_Cntl_Port_Sync_ctrl_reg__PER_CTL_AUX_CTL_REG, CYREG_B0_UDB10_MSK_ACTL
.set LCD_Cntl_Port_Sync_ctrl_reg__PERIOD_REG, CYREG_B0_UDB10_MSK

/* Opamp */
.set Opamp_ABuf__CR, CYREG_OPAMP3_CR
.set Opamp_ABuf__MX, CYREG_OPAMP3_MX
.set Opamp_ABuf__NPUMP_OPAMP_TR0, CYREG_NPUMP_OPAMP_TR0
.set Opamp_ABuf__PM_ACT_CFG, CYREG_PM_ACT_CFG4
.set Opamp_ABuf__PM_ACT_MSK, 0x08
.set Opamp_ABuf__PM_STBY_CFG, CYREG_PM_STBY_CFG4
.set Opamp_ABuf__PM_STBY_MSK, 0x08
.set Opamp_ABuf__RSVD, CYREG_OPAMP3_RSVD
.set Opamp_ABuf__SW, CYREG_OPAMP3_SW
.set Opamp_ABuf__TR0, CYREG_OPAMP3_TR0
.set Opamp_ABuf__TR1, CYREG_OPAMP3_TR1

/* Sharp */
.set Sharp__0__INTTYPE, CYREG_PICU1_INTTYPE6
.set Sharp__0__MASK, 0x40
.set Sharp__0__PC, CYREG_PRT1_PC6
.set Sharp__0__PORT, 1
.set Sharp__0__SHIFT, 6
.set Sharp__AG, CYREG_PRT1_AG
.set Sharp__AMUX, CYREG_PRT1_AMUX
.set Sharp__BIE, CYREG_PRT1_BIE
.set Sharp__BIT_MASK, CYREG_PRT1_BIT_MASK
.set Sharp__BYP, CYREG_PRT1_BYP
.set Sharp__CTL, CYREG_PRT1_CTL
.set Sharp__DM0, CYREG_PRT1_DM0
.set Sharp__DM1, CYREG_PRT1_DM1
.set Sharp__DM2, CYREG_PRT1_DM2
.set Sharp__DR, CYREG_PRT1_DR
.set Sharp__INP_DIS, CYREG_PRT1_INP_DIS
.set Sharp__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU1_BASE
.set Sharp__LCD_COM_SEG, CYREG_PRT1_LCD_COM_SEG
.set Sharp__LCD_EN, CYREG_PRT1_LCD_EN
.set Sharp__MASK, 0x40
.set Sharp__PORT, 1
.set Sharp__PRT, CYREG_PRT1_PRT
.set Sharp__PRTDSI__CAPS_SEL, CYREG_PRT1_CAPS_SEL
.set Sharp__PRTDSI__DBL_SYNC_IN, CYREG_PRT1_DBL_SYNC_IN
.set Sharp__PRTDSI__OE_SEL0, CYREG_PRT1_OE_SEL0
.set Sharp__PRTDSI__OE_SEL1, CYREG_PRT1_OE_SEL1
.set Sharp__PRTDSI__OUT_SEL0, CYREG_PRT1_OUT_SEL0
.set Sharp__PRTDSI__OUT_SEL1, CYREG_PRT1_OUT_SEL1
.set Sharp__PRTDSI__SYNC_OUT, CYREG_PRT1_SYNC_OUT
.set Sharp__PS, CYREG_PRT1_PS
.set Sharp__SHIFT, 6
.set Sharp__SLW, CYREG_PRT1_SLW

/* Miscellaneous */
.set BCLK__BUS_CLK__HZ, 24000000
.set BCLK__BUS_CLK__KHZ, 24000
.set BCLK__BUS_CLK__MHZ, 24
.set CYDEV_CHIP_DIE_LEOPARD, 1
.set CYDEV_CHIP_DIE_PSOC4A, 18
.set CYDEV_CHIP_DIE_PSOC5LP, 2
.set CYDEV_CHIP_DIE_PSOC5TM, 3
.set CYDEV_CHIP_DIE_TMA4, 4
.set CYDEV_CHIP_DIE_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_FM0P, 5
.set CYDEV_CHIP_FAMILY_FM3, 6
.set CYDEV_CHIP_FAMILY_FM4, 7
.set CYDEV_CHIP_FAMILY_PSOC3, 1
.set CYDEV_CHIP_FAMILY_PSOC4, 2
.set CYDEV_CHIP_FAMILY_PSOC5, 3
.set CYDEV_CHIP_FAMILY_PSOC6, 4
.set CYDEV_CHIP_FAMILY_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_USED, CYDEV_CHIP_FAMILY_PSOC5
.set CYDEV_CHIP_JTAG_ID, 0x2E161069
.set CYDEV_CHIP_MEMBER_3A, 1
.set CYDEV_CHIP_MEMBER_4A, 18
.set CYDEV_CHIP_MEMBER_4D, 13
.set CYDEV_CHIP_MEMBER_4E, 6
.set CYDEV_CHIP_MEMBER_4F, 19
.set CYDEV_CHIP_MEMBER_4G, 4
.set CYDEV_CHIP_MEMBER_4H, 17
.set CYDEV_CHIP_MEMBER_4I, 23
.set CYDEV_CHIP_MEMBER_4J, 14
.set CYDEV_CHIP_MEMBER_4K, 15
.set CYDEV_CHIP_MEMBER_4L, 22
.set CYDEV_CHIP_MEMBER_4M, 21
.set CYDEV_CHIP_MEMBER_4N, 10
.set CYDEV_CHIP_MEMBER_4O, 7
.set CYDEV_CHIP_MEMBER_4P, 20
.set CYDEV_CHIP_MEMBER_4Q, 12
.set CYDEV_CHIP_MEMBER_4R, 8
.set CYDEV_CHIP_MEMBER_4S, 11
.set CYDEV_CHIP_MEMBER_4T, 9
.set CYDEV_CHIP_MEMBER_4U, 5
.set CYDEV_CHIP_MEMBER_4V, 16
.set CYDEV_CHIP_MEMBER_5A, 3
.set CYDEV_CHIP_MEMBER_5B, 2
.set CYDEV_CHIP_MEMBER_6A, 24
.set CYDEV_CHIP_MEMBER_FM3, 28
.set CYDEV_CHIP_MEMBER_FM4, 29
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1, 25
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2, 26
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3, 27
.set CYDEV_CHIP_MEMBER_UNKNOWN, 0
.set CYDEV_CHIP_MEMBER_USED, CYDEV_CHIP_MEMBER_5B
.set CYDEV_CHIP_DIE_EXPECT, CYDEV_CHIP_MEMBER_USED
.set CYDEV_CHIP_DIE_ACTUAL, CYDEV_CHIP_DIE_EXPECT
.set CYDEV_CHIP_REV_LEOPARD_ES1, 0
.set CYDEV_CHIP_REV_LEOPARD_ES2, 1
.set CYDEV_CHIP_REV_LEOPARD_ES3, 3
.set CYDEV_CHIP_REV_LEOPARD_PRODUCTION, 3
.set CYDEV_CHIP_REV_PSOC4A_ES0, 17
.set CYDEV_CHIP_REV_PSOC4A_PRODUCTION, 17
.set CYDEV_CHIP_REV_PSOC5LP_ES0, 0
.set CYDEV_CHIP_REV_PSOC5LP_PRODUCTION, 0
.set CYDEV_CHIP_REV_PSOC5TM_ES0, 0
.set CYDEV_CHIP_REV_PSOC5TM_ES1, 1
.set CYDEV_CHIP_REV_PSOC5TM_PRODUCTION, 1
.set CYDEV_CHIP_REV_TMA4_ES, 17
.set CYDEV_CHIP_REV_TMA4_ES2, 33
.set CYDEV_CHIP_REV_TMA4_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_3A_ES1, 0
.set CYDEV_CHIP_REVISION_3A_ES2, 1
.set CYDEV_CHIP_REVISION_3A_ES3, 3
.set CYDEV_CHIP_REVISION_3A_PRODUCTION, 3
.set CYDEV_CHIP_REVISION_4A_ES0, 17
.set CYDEV_CHIP_REVISION_4A_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4D_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD, 0
.set CYDEV_CHIP_REVISION_4E_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION_256K, 0
.set CYDEV_CHIP_REVISION_4G_ES, 17
.set CYDEV_CHIP_REVISION_4G_ES2, 33
.set CYDEV_CHIP_REVISION_4G_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4H_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4I_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4J_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4K_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4L_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4M_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4N_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4O_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4P_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4Q_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4R_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4S_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4T_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4U_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4V_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_5A_ES0, 0
.set CYDEV_CHIP_REVISION_5A_ES1, 1
.set CYDEV_CHIP_REVISION_5A_PRODUCTION, 1
.set CYDEV_CHIP_REVISION_5B_ES0, 0
.set CYDEV_CHIP_REVISION_5B_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_6A_ES, 17
.set CYDEV_CHIP_REVISION_6A_NO_UDB, 33
.set CYDEV_CHIP_REVISION_6A_PRODUCTION, 33
.set CYDEV_CHIP_REVISION_FM3_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_FM4_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_USED, CYDEV_CHIP_REVISION_5B_PRODUCTION
.set CYDEV_CHIP_REV_EXPECT, CYDEV_CHIP_REVISION_USED
.set CYDEV_CONFIG_FASTBOOT_ENABLED, 1
.set CYDEV_CONFIG_UNUSED_IO_AllowButWarn, 0
.set CYDEV_CONFIG_UNUSED_IO, CYDEV_CONFIG_UNUSED_IO_AllowButWarn
.set CYDEV_CONFIG_UNUSED_IO_AllowWithInfo, 1
.set CYDEV_CONFIG_UNUSED_IO_Disallowed, 2
.set CYDEV_CONFIGURATION_COMPRESSED, 1
.set CYDEV_CONFIGURATION_DMA, 0
.set CYDEV_CONFIGURATION_ECC, 1
.set CYDEV_CONFIGURATION_IMOENABLED, CYDEV_CONFIG_FASTBOOT_ENABLED
.set CYDEV_CONFIGURATION_MODE_COMPRESSED, 0
.set CYDEV_CONFIGURATION_MODE, CYDEV_CONFIGURATION_MODE_COMPRESSED
.set CYDEV_CONFIGURATION_MODE_DMA, 2
.set CYDEV_CONFIGURATION_MODE_UNCOMPRESSED, 1
.set CYDEV_DEBUG_ENABLE_MASK, 0x20
.set CYDEV_DEBUG_ENABLE_REGISTER, CYREG_MLOGIC_DEBUG
.set CYDEV_DEBUGGING_DPS_Disable, 3
.set CYDEV_DEBUGGING_DPS_JTAG_4, 1
.set CYDEV_DEBUGGING_DPS_JTAG_5, 0
.set CYDEV_DEBUGGING_DPS_SWD, 2
.set CYDEV_DEBUGGING_DPS_SWD_SWV, 6
.set CYDEV_DEBUGGING_DPS, CYDEV_DEBUGGING_DPS_SWD_SWV
.set CYDEV_DEBUGGING_ENABLE, 1
.set CYDEV_DEBUGGING_XRES, 0
.set CYDEV_DMA_CHANNELS_AVAILABLE, 24
.set CYDEV_ECC_ENABLE, 0
.set CYDEV_HEAP_SIZE, 0x200
.set CYDEV_INSTRUCT_CACHE_ENABLED, 1
.set CYDEV_INTR_RISING, 0x00000000
.set CYDEV_IS_EXPORTING_CODE, 0
.set CYDEV_IS_IMPORTING_CODE, 0
.set CYDEV_PROJ_TYPE, 0
.set CYDEV_PROJ_TYPE_BOOTLOADER, 1
.set CYDEV_PROJ_TYPE_LAUNCHER, 5
.set CYDEV_PROJ_TYPE_LOADABLE, 2
.set CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER, 4
.set CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER, 3
.set CYDEV_PROJ_TYPE_STANDARD, 0
.set CYDEV_PROTECTION_ENABLE, 0
.set CYDEV_STACK_SIZE, 0x0800
.set CYDEV_USE_BUNDLED_CMSIS, 1
.set CYDEV_VARIABLE_VDDA, 0
.set CYDEV_VDDA_MV, 5000
.set CYDEV_VDDD_MV, 5000
.set CYDEV_VDDIO0_MV, 5000
.set CYDEV_VDDIO1_MV, 5000
.set CYDEV_VDDIO2_MV, 5000
.set CYDEV_VDDIO3_MV, 5000
.set CYDEV_VIO0_MV, 5000
.set CYDEV_VIO1_MV, 5000
.set CYDEV_VIO2_MV, 5000
.set CYDEV_VIO3_MV, 5000
.set CYIPBLOCK_ARM_CM3_VERSION, 0
.set CYIPBLOCK_P3_ANAIF_VERSION, 0
.set CYIPBLOCK_P3_CAN_VERSION, 0
.set CYIPBLOCK_P3_CAPSENSE_VERSION, 0
.set CYIPBLOCK_P3_COMP_VERSION, 0
.set CYIPBLOCK_P3_DECIMATOR_VERSION, 0
.set CYIPBLOCK_P3_DFB_VERSION, 0
.set CYIPBLOCK_P3_DMA_VERSION, 0
.set CYIPBLOCK_P3_DRQ_VERSION, 0
.set CYIPBLOCK_P3_DSM_VERSION, 0
.set CYIPBLOCK_P3_EMIF_VERSION, 0
.set CYIPBLOCK_P3_I2C_VERSION, 0
.set CYIPBLOCK_P3_LCD_VERSION, 0
.set CYIPBLOCK_P3_LPF_VERSION, 0
.set CYIPBLOCK_P3_OPAMP_VERSION, 0
.set CYIPBLOCK_P3_PM_VERSION, 0
.set CYIPBLOCK_P3_SCCT_VERSION, 0
.set CYIPBLOCK_P3_TIMER_VERSION, 0
.set CYIPBLOCK_P3_USB_VERSION, 0
.set CYIPBLOCK_P3_VIDAC_VERSION, 0
.set CYIPBLOCK_P3_VREF_VERSION, 0
.set CYIPBLOCK_S8_GPIO_VERSION, 0
.set CYIPBLOCK_S8_IRQ_VERSION, 0
.set CYIPBLOCK_S8_SAR_VERSION, 0
.set CYIPBLOCK_S8_SIO_VERSION, 0
.set CYIPBLOCK_S8_UDB_VERSION, 0
.set Dedicated_Output__INTTYPE, CYREG_PICU3_INTTYPE7
.set Dedicated_Output__MASK, 0x80
.set Dedicated_Output__PC, CYREG_PRT3_PC7
.set Dedicated_Output__PORT, 3
.set Dedicated_Output__SHIFT, 7
.set DMA_CHANNELS_USED__MASK0, 0x00000000
.set CYDEV_BOOTLOADER_ENABLE, 0
.endif

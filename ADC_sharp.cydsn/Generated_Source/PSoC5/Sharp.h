/*******************************************************************************
* File Name: Sharp.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_Sharp_H) /* Pins Sharp_H */
#define CY_PINS_Sharp_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Sharp_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Sharp__PORT == 15 && ((Sharp__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Sharp_Write(uint8 value);
void    Sharp_SetDriveMode(uint8 mode);
uint8   Sharp_ReadDataReg(void);
uint8   Sharp_Read(void);
void    Sharp_SetInterruptMode(uint16 position, uint16 mode);
uint8   Sharp_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Sharp_SetDriveMode() function.
     *  @{
     */
        #define Sharp_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Sharp_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Sharp_DM_RES_UP          PIN_DM_RES_UP
        #define Sharp_DM_RES_DWN         PIN_DM_RES_DWN
        #define Sharp_DM_OD_LO           PIN_DM_OD_LO
        #define Sharp_DM_OD_HI           PIN_DM_OD_HI
        #define Sharp_DM_STRONG          PIN_DM_STRONG
        #define Sharp_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Sharp_MASK               Sharp__MASK
#define Sharp_SHIFT              Sharp__SHIFT
#define Sharp_WIDTH              1u

/* Interrupt constants */
#if defined(Sharp__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Sharp_SetInterruptMode() function.
     *  @{
     */
        #define Sharp_INTR_NONE      (uint16)(0x0000u)
        #define Sharp_INTR_RISING    (uint16)(0x0001u)
        #define Sharp_INTR_FALLING   (uint16)(0x0002u)
        #define Sharp_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Sharp_INTR_MASK      (0x01u) 
#endif /* (Sharp__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Sharp_PS                     (* (reg8 *) Sharp__PS)
/* Data Register */
#define Sharp_DR                     (* (reg8 *) Sharp__DR)
/* Port Number */
#define Sharp_PRT_NUM                (* (reg8 *) Sharp__PRT) 
/* Connect to Analog Globals */                                                  
#define Sharp_AG                     (* (reg8 *) Sharp__AG)                       
/* Analog MUX bux enable */
#define Sharp_AMUX                   (* (reg8 *) Sharp__AMUX) 
/* Bidirectional Enable */                                                        
#define Sharp_BIE                    (* (reg8 *) Sharp__BIE)
/* Bit-mask for Aliased Register Access */
#define Sharp_BIT_MASK               (* (reg8 *) Sharp__BIT_MASK)
/* Bypass Enable */
#define Sharp_BYP                    (* (reg8 *) Sharp__BYP)
/* Port wide control signals */                                                   
#define Sharp_CTL                    (* (reg8 *) Sharp__CTL)
/* Drive Modes */
#define Sharp_DM0                    (* (reg8 *) Sharp__DM0) 
#define Sharp_DM1                    (* (reg8 *) Sharp__DM1)
#define Sharp_DM2                    (* (reg8 *) Sharp__DM2) 
/* Input Buffer Disable Override */
#define Sharp_INP_DIS                (* (reg8 *) Sharp__INP_DIS)
/* LCD Common or Segment Drive */
#define Sharp_LCD_COM_SEG            (* (reg8 *) Sharp__LCD_COM_SEG)
/* Enable Segment LCD */
#define Sharp_LCD_EN                 (* (reg8 *) Sharp__LCD_EN)
/* Slew Rate Control */
#define Sharp_SLW                    (* (reg8 *) Sharp__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Sharp_PRTDSI__CAPS_SEL       (* (reg8 *) Sharp__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Sharp_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Sharp__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Sharp_PRTDSI__OE_SEL0        (* (reg8 *) Sharp__PRTDSI__OE_SEL0) 
#define Sharp_PRTDSI__OE_SEL1        (* (reg8 *) Sharp__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Sharp_PRTDSI__OUT_SEL0       (* (reg8 *) Sharp__PRTDSI__OUT_SEL0) 
#define Sharp_PRTDSI__OUT_SEL1       (* (reg8 *) Sharp__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Sharp_PRTDSI__SYNC_OUT       (* (reg8 *) Sharp__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Sharp__SIO_CFG)
    #define Sharp_SIO_HYST_EN        (* (reg8 *) Sharp__SIO_HYST_EN)
    #define Sharp_SIO_REG_HIFREQ     (* (reg8 *) Sharp__SIO_REG_HIFREQ)
    #define Sharp_SIO_CFG            (* (reg8 *) Sharp__SIO_CFG)
    #define Sharp_SIO_DIFF           (* (reg8 *) Sharp__SIO_DIFF)
#endif /* (Sharp__SIO_CFG) */

/* Interrupt Registers */
#if defined(Sharp__INTSTAT)
    #define Sharp_INTSTAT            (* (reg8 *) Sharp__INTSTAT)
    #define Sharp_SNAP               (* (reg8 *) Sharp__SNAP)
    
	#define Sharp_0_INTTYPE_REG 		(* (reg8 *) Sharp__0__INTTYPE)
#endif /* (Sharp__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Sharp_H */


/* [] END OF FILE */

/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"
#include "stdio.h"

    int32 sensor;
    float numS;
    char salida[12];

int main(void)
{
   
    ADC_Start();
    Opamp_Start();
    LCD_Start();
    
    LCD_Position(0,5);
    LCD_PrintString("hola prras");
     CyGlobalIntEnable; /* Enable global interrupts. */

    for(;;)
    {
        ADC_StartConvert();
        ADC_IsEndConversion(ADC_WAIT_FOR_RESULT);
        sensor = ADC_GetResult32();
        ADC_StopConvert();
        
        numS = ADC_CountsTo_Volts(sensor);
        
//        numS= (numS-2.35)/-0.035 +1.3 ;
         numS= (-200*numS+470)/7 ;
        sprintf(salida,"%.2f",numS);
        
        LCD_Position(1,3);
        LCD_PrintString(salida);
        
//        LCD_Position(1,5);
//        LCD_PrintString("cm");
        
        
        
   
    }
}

/* [] END OF FILE */

#include "lcd.h"
#include "adc.h"
#include "soc.h"
#include <reg51.h>

sbit BJT_Trigger=P1^4;

void main(void){
	unsigned int ADC_Val;
	unsigned int SOC_Val;
	
	int itr=0;
	LCD_Init();
	ADC_Init();
	LCD_Show("Welcome To BMS");
	LCD_Cmd(0xC0);
	msdelay(399);
	LCD_Show("ProtectionModule");
	msdelay(3993);
	LCD_Cmd(0x01);
	LCD_Show("   BMS MODULE");
	
	while(1){
		ADC_Val=ADC_Read();
		
		SOC_Val=Calculate_SOC(ADC_Val);
		LCD_Cmd(0xC0);
		LCD_Show("   ");
		LCD_DisplaySOC(SOC_Val);
		
		if(SOC_Val>99){
			BJT_Trigger=0;
		}
		else if(SOC_Val<3){
			BJT_Trigger=1;
		}
		
		msdelay(93);
	}
}
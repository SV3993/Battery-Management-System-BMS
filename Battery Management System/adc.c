#include "adc.h"
#include <reg51.h>

sbit ADC_CS=P1^3;
sbit ADC_RD=P1^2;
sbit ADC_WR=P1^1;
sbit ADC_INTR=P1^0;

void ADC_Init(void){
	ADC_CS=0;
}

unsigned int ADC_Read(void){
	unsigned int ADC_Value=0;
	ADC_WR=0;
	ADC_WR=1;
	while(ADC_INTR == 1);
	
	
	ADC_RD=0;
	ADC_Value=P3;
	ADC_RD=1;
	
	
	return ADC_Value;
}
#include "lcd.h"
#include <stdio.h>
#include <reg51.h>

sbit LCD_RS=P0^0;
sbit LCD_RW=P0^1;
sbit LCD_E=P0^2;
#define display_port P2

void LCD_Init(void){
	LCD_Cmd(0x38);
	msdelay(9);
	LCD_Cmd(0x0E);
	msdelay(9);
	LCD_Cmd(0x01);
	msdelay(9);
	LCD_Cmd(0x06);
	msdelay(9);
	LCD_Cmd(0x0C);
	msdelay(9);
	LCD_Cmd(0x80);
	msdelay(9);
}
void LCD_Cmd(unsigned char Cmd){
	display_port = Cmd;
	LCD_RS=0;
	LCD_RW=0;
	LCD_E=1;
	msdelay(3);
	LCD_E=0;
	
}
void LCD_Data(unsigned char Data){
	display_port = Data;
	LCD_RS=1;
	LCD_RW=0;
	LCD_E=1;
	msdelay(3);
	LCD_E=0;
}

void LCD_Show(char *Str)
{
    while(*Str) {
        LCD_Data(*Str++);
    }
}

void LCD_DisplaySOC(unsigned int SOC_Val){
	char buffer[16];
	sprintf(buffer,"SOC : %u%%", SOC_Val);
	LCD_Show(buffer);
}

	
void msdelay(unsigned int count){
	unsigned int i;
	while(count>0){
		for(i=0;i<115;i++);
		count--;
	}
}
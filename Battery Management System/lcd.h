void LCD_Init(void);
void LCD_Cmd(unsigned char Cmd);
void LCD_Data(unsigned char Data);
void LCD_Show(unsigned char *Str);
void LCD_DisplaySOC(unsigned int SOC_Val);
void msdelay(unsigned int count);
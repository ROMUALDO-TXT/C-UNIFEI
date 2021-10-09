# 1 "stdio.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 288 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "C:/Program Files (x86)/Microchip/MPLABX/v5.35/packs/Microchip/PIC18Fxxxx_DFP/1.2.26/xc8\\pic\\include\\language_support.h" 1 3
# 2 "<built-in>" 2
# 1 "stdio.c" 2
# 1 "./stdio.h" 1



    void printf(char msg[]);
# 1 "stdio.c" 2

# 1 "./lcd.h" 1


  void lcdCommand(char value);
  void lcdChar(char value);
  void lcdString(char msg[]);
  void lcdNumber(int value);
  void lcdPosition(int line, int col);
  void lcdInit(void);
# 2 "stdio.c" 2


void printf(char msg[]){
    lcdInit();
    char i;
    for(i=0; i < 15; i++){
        if(msg[i] == '\n'){
            lcdCommand(0xc0);
        }else{
            lcdChar(msg[i]);
        }
    }
}

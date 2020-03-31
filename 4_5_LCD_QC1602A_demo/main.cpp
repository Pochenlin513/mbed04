#include "mbed.h"
#include "TextLCD.h"

TextLCD lcd(D2, D3, D4, D5, D6, D7);

int main()
{
      lcd.printf("Hello World!\n");
      wait(0.5);
      lcd.printf("\n  Starting Demo...");
      wait(0.5);
      lcd.printf("\n106061227\n");
      wait(0.5);
      for(int x = 30; x >= 0; x--){
          lcd.locate(5,1);
          lcd.printf("%2D", x);
          wait(1);
      }
}
// uLCD-144-G2 basic text demo program for uLCD-4GL LCD driver library
//
#include "mbed.h"
#include "uLCD_4DGL.h"

uLCD_4DGL uLCD(D1, D0, D2); // serial tx, serial rx, reset pin;

int main()
{
    // basic printf demo = 16 by 18 characters on screen
    uLCD.printf("\nHello uLCD World\n"); //Default Green on black text
    wait(1);
    uLCD.printf("\n  Starting Demo...");
    wait(1);
    uLCD.text_width(10); //10X size text
    uLCD.text_height(10);
    uLCD.background_color(WHITE);
    uLCD.textbackground_color(WHITE);
    uLCD.cls();
    uLCD.color(BLUE);
    uLCD.printf("\n106061227\n");
    wait(0.5);
    uLCD.color(GREEN);
    for (int i=30; i>=0; --i) {
        uLCD.locate(1,2);
        uLCD.printf("%2D",i);
        wait(.5);
    }
}
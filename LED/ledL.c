#include <stdio.h>
#include <wiringPi.h>
#include <stdlib.h>

#define REDLED 4
#define GREENLED 2

void multiBlink(int bDelay){
        pinMode(REDLED, OUTPUT);
        pinMode(GREENLED, OUTPUT);
        while(1){
                digitalWrite(REDLED,1);
                digitalWrite(GREENLED,1);
                delay (20);
                digitalWrite(REDLED,0);
                digitalWrite(GREENLED,0);
                delay (20);
        }
}


void blink(char* selection)
{
   char* all="all";
   char* random="random";
   wiringPiSetup () ;
   if(selection==all){
printf(all);
	multiBlink(20);
   }
   if(selection==random){
	srand(time(NULL));
	multiBlink(rand());
   }
}

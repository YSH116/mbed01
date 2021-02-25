#include "mbed.h"

DigitalOut myLED(LED3);
DigitalOut myLED2(LED1);

int main()
{
   myLED = 1;
   for (int i = 0; i < 6; ++i)
   {                     //blink for 6 times
      myLED = !myLED; // toggle led
      ThisThread::sleep_for(1000ms);
   }
   myLED2 = 1;
   for (int i = 0; i < 4; ++i)
   {                     //blink for 6 times
      myLED2 = !myLED2; // toggle led
      ThisThread::sleep_for(1000ms);
   }
   myLED2 = 0;
}

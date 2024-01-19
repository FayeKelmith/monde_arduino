
#include "Led.h"

Led led(13);

void setup(){
led.init(); 
}

void loop(){
  led.on();
  delay(500);
  led.off();
  delay(500);
    
}
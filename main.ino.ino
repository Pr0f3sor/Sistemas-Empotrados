#include <Arduino.h>
#include "modulo_blink.h"
#include "modulo_mensaje.h"





void setup(){

initPins();
initSerialPort();



}

void loop(){

blink();
mensaje();


}
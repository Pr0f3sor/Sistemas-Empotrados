#include <Arduino.h>



void initSerialPort(){

Serial.begin(9600); // Velocidad de comunicación del puerto serial del Atmega328p

}


void mensaje(){

Serial.println("Este es un mensaje");

}
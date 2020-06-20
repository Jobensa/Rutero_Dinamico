#include <Arduino.h>
//#include <SPI.h>

#include "user.h"
#include "user_bluetooth.h"
#include "display16x48.h"
#include "fileSistem.h"

  
void setup() {
   Serial.begin(115200);
   initFiles();
   xTaskCreate(Task_bluetooth,"Bluetooth Task",10000,NULL,1,NULL); 
   //xTaskCreate(Task_display,"Display Task",10000,NULL,1,NULL); 
}

void loop() 
{

 
}
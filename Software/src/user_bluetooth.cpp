#include "user.h"
#include "user_bluetooth.h"
//Bluetooth
#define BLYNK_PRINT Serial
#define BLYNK_USE_DIRECT_CONNECT
#include <BlynkSimpleEsp32_BT.h>

//Bluetooth
char auth[] = "Token";

uint8_t status_menu;

BlynkTransportEsp32_BT connBluetooth;

void Task_bluetooth(void* parameter)
{

  //Bluetooth
  
  Blynk.setDeviceName("DisproBT");
  Blynk.begin(auth);
 
  connBluetooth.begin();
  status_menu=0;
  

  for(;;)
  {
       //Bluetooth
    Blynk.run();
    if(connBluetooth.available()>=3)
    {
        char str[16];
        //String str1=WiFi.localIP().toString();
        
        connBluetooth.read(str,connBluetooth.available());
        Serial.println(str);      
        String s="Configuración,12345";         
        connBluetooth.write(s.c_str(),s.length()+1);
     
   }   
   vTaskDelay(250);
  }
}
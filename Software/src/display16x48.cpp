
#include "display16x48.h"
//#include "LedMatrix.h"
//#include <SPI.h>
//#include "WiFi.h"
//#include "ESPAsyncWebServer.h"
#include "SPIFFS.h"



#define NUMBER_OF_DEVICES 6
#define CS_PIN 2


//LedMatrix ledMatrix = LedMatrix(NUMBER_OF_DEVICES, CS_PIN);
CDisplay16x50::CDisplay16x50(uint8_t noRow,uint8_t noCol)
{
    _mCols=noCol;
    
    if((noCol%8)==0)
    {
        _mRowMatrix=new uint8_t[_mCols/8];
    }
    else 
    {
        _mRowMatrix=new uint8_t[(_mCols/8)+1];
    }
   
}


void CDisplay16x50::drawPixel(uint8_t x,uint8_t y,boolean val)
{
    if((x%8)==0)
    {
        uint8_t entero;
        uint8_t bitVal;

        entero=x/8;
        bitVal=x%8;

        _mRowMatrix[entero]=bit(bitVal);
    }
    
    

}

void CDisplay16x50::sendRowDisplay()
{

}



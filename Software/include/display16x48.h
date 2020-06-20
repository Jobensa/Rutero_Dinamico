#ifndef DISPLAY16X48_H
#define DISPLAY16X48_H
#include "user.h"

#define COL_DIN 25
#define COL_CKL 26
#define COL_CLEAR 27  

#define ROW1 14
#define ROW2 16
#define ROW3 17
#define ROW4 18
#define ROW5 19
#define ROW6 21
#define ROW7 22
#define ROW8 23

class CDisplay16x50
{
public:
    CDisplay16x50(uint8_t noRow,uint8_t noCol);
    

private:
    void drawPixel(uint8_t x,uint8_t y,boolean val);
    void sendRowDisplay();
    uint8_t *_mRowMatrix;
    uint8_t _mCols;
    
};
#endif
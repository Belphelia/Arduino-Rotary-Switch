#ifndef _RotaryRes_h
#define _RotaryRes_h

#if (ARDUINO >= 100)
 #include "Arduino.h"
#else
 #include "WProgram.h"
#endif

#define ROTARYSW_OFFSET 46
#define ROTARYSW_DIVIDE 88

uint8_t getRotaryRes(uint8_t pin);

#endif

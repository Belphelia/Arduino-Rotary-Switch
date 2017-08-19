#include "RotaryRes.h"

uint8_t getRotaryRes(uint8_t pin){
  return (analogRead(pin) + ROTARYSW_OFFSET) / ROTARYSW_DIVIDE;
}

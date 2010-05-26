#ifndef __REGISTERS_H__
#define __REGISTERS_H__

#include <avr/pgmspace.h>

struct Registers
{
  uint8_t ddr;
  uint8_t port;
  uint8_t pin;
  uint8_t bitmask;
  char name[3];
};

extern uint8_t registers_length;
extern Registers registers[];

#endif // __REGISTERS_H__

#ifndef IRINPUT_H
#define IRINPUT_H

#include "IRremote.h"


int receiver;
IRrecv irrecv;
decode_results IRresults;
extern void IRpin(int pin);
extern bool isIrInput();

#endif 
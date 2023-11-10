#include "irInput.h"

#include "IRremote.h"

extern void IRpin(int pin){
    receiver = pin;
    IRrecv irrecv(receiver);
    
}

bool isIrInput(){
    return irrecv.decode(&IRresults);
}
#include "irInput.h"
#include "IRremote.h"

void IRpin(int pin){
    receiver = pin;
    IRrecv irrecv(receiver);
    
}

bool isIrInput(){
    return irrecv.decode(&IRresults);
}
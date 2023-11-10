#ifndef CUSTOMCHAR_H
#define CUSTOMCHAR_H

#include <LiquidCrystal.h>

#define DEFINE_CHAR_NUM 4

//dinosaur
byte dinosaur[8] = {
  B00111,
  B01011,
  B01111,
  B01110,
  B11110,
  B01010,
  B00000,
  B00000
};


// Big cactus
byte bigCactus[8] = {
  B00100,
  B01110,
  B01111,
  B01110,
  B11110,
  B01110,
  B11111,
  B00000
};

// Thin cactus
byte thinCactus[8] = {
  B00100,
  B00101,
  B10101,
  B10111,
  B11100,
  B00100,
  B11111,
  B00000
};

// Ground 
byte ground[8] = {
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B11111,
  B00000
};

extern int customChar(String name);

#endif
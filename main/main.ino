#include <LiquidCrystal.h>
#include "IRremote.h"
#include "irInput.h"

//#include "../lib/customChar/customChar.h"


LiquidCrystal lcd(4, 6, 10, 11, 12, 13);


void setup() {
  LiquidCrystal lcd(4, 6, 10, 11, 12, 13);
  lcd.begin(16, 2);
  IRpin(3);
  //lcd.print();


}

void loop() {
  lcd.clear();
  lcd.home();
  lcd.print((String) isIrInput());
}

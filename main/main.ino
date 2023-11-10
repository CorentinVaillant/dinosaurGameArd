#include <LiquidCrystal.h>
#include "IRremote.h"

int receiver = 3;

IRrecv irrecv(receiver);     // create instance of 'irrecv'
decode_results results;      // create instance of 'decode_results'

LiquidCrystal lcd(4, 6, 10, 11, 12, 13);

String translateIR() {
  switch (results.value) {
    case 0xFFA25D: return ("POWER");
    case 0xFFE21D: return ("FUNC/STOP");
    case 0xFF629D: return ("VOL+");
    case 0xFF22DD: return ("FAST BACK");
    case 0xFF02FD: return ("PAUSE");
    case 0xFFC23D: return ("FAST FORWARD");
    case 0xFFE01F: return ("DOWN");
    case 0xFFA857: return ("VOL-");
    case 0xFF906F: return ("UP");
    case 0xFF9867: return ("EQ");
    case 0xFFB04F: return ("ST/REPT");
    case 0xFF6897: return ("0");
    case 0xFF30CF: return ("1");
    case 0xFF18E7: return ("2");
    case 0xFF7A85: return ("3");
    case 0xFF10EF: return ("4");
    case 0xFF38C7: return ("5");
    case 0xFF5AA5: return ("6");
    case 0xFF42BD: return ("7");
    case 0xFF4AB5: return ("8");
    case 0xFF52AD: return ("9");
    case 0xFFFFFFFF: return (" REPEAT");

    default:
      return ("other: " + String(results.value, HEX));
      
  }// End Case
}

void setup() {
  LiquidCrystal lcd(4, 6, 10, 11, 12, 13);
  lcd.begin(16, 2);
  irrecv.enableIRIn(); // Start the receiver

}

void loop() {
  if (irrecv.decode(&results)) {
    lcd.clear();
    lcd.print(translateIR());
    lcd.setCursor(0, 0);
    irrecv.resume(); // receive the next value
  }
  delay(1000);
}

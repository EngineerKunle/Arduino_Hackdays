
#include <LiquidCrystal.h>

LiquidCrystal lcd(12,11, 5, 4, 3, 2);
void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);
  lcd.print("well done");
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(3000);
  // print the number of seconds since reset:
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Completed");
  lcd.setCursor(0, 1);
  lcd.print("Ready 4 today?");
  delay(5000);
}

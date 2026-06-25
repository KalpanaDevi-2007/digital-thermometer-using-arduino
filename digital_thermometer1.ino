#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int tempPin = A0;

void setup()
{
  lcd.begin(16, 2);
  lcd.print("Digital Thermo");
  delay(2000);
  lcd.clear();
}

void loop()
{
  int reading = analogRead(tempPin);

  float voltage = reading * (5.0 / 1023.0);

  float temperatureC = (voltage - 0.5) * 100;

  lcd.setCursor(0, 0);
  lcd.print("Temp:");

  lcd.setCursor(0, 1);
  lcd.print(temperatureC);
  lcd.print((char)223);
  lcd.print("C   ");

  delay(1000);
}
#include <LiquidCrystal.h>
LiquidCrystal lcd(11, 10, 7, 6, 5, 4);

int suradnica = 0;
int doba = 0;

void setup()
{
lcd.begin(16, 2);
pinMode(3, OUTPUT);
pinMode(A5, INPUT);
doba = millis();
}

void loop()
{
if (millis() >= doba)
{


int a = analogRead(A5); // 0-1023

lcd.setCursor(suradnica, 0); // 0-15
lcd.print(" ");

suradnica = map(a, 0, 1023, 0, 15);

lcd.setCursor(suradnica, 0); // 0-15
lcd.print("X");

if (suradnica == 0 || suradnica == 15)
{
digitalWrite(3, HIGH);
}
else
digitalWrite(3, LOW);


doba = millis() + 100;
}
}
https://imgur.com/a/40bbjX2

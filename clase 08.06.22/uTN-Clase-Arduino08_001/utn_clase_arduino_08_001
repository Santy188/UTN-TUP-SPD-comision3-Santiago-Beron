#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int sumador = 0;
int contador = 0;
void setup() 
{
	lcd.begin(16, 2);
	lcd.print("Iniciando");
	lcd.setCursor(0, 1);
	lcd.print("Sistema");
	delay(1000);
	lcd.clear();
	delay(1000);
	lcd.print("contando");
	lcd.setCursor(0, 1);
	lcd.print("de 2 en 2");
	delay(1000);
  lcd.clear();
}
void loop() 
{
  	sumador += 2;
  	contador++;
  	lcd.setCursor(0,0);
  	lcd.print("contador:");

  	lcd.setCursor(13,0);
  	lcd.print(contador);
  
    lcd.setCursor(0, 1);
    lcd.print("sumador:");

    lcd.setCursor(13,1);
    lcd.print(sumador);

  	delay(1000);
}

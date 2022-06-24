#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int contador = 0;
int lectura = 0;
int distancia = 0;
int pin = 7;

void setup() 
{
    Serial.begin(9600);
	Serial.println("Iniciando");
	lcd.begin(16, 2);
	lcd.print("Iniciando");
	lcd.setCursor(0, 1);
	lcd.print("Sistema");
	delay(1000);
	lcd.clear();
	lcd.print("mostrando");
	lcd.setCursor(0, 1);
	lcd.print("distancia");
	lcd.clear();
}
void loop() 
{
	lectura = readUltrasonicDistance(pin, pin);
	distancia = 0.01723 * lectura;
	Serial.print(distancia); 
  	lcd.setCursor(0, 0);
  	lcd.print("cm");
  	lcd.setCursor(0, 1);
  	lcd.print(distancia);
  	lcd.setCursor(3,0);
  	lcd.print("|");
  	lcd.setCursor(3,1);
  	lcd.print("|");
  	lcd.setCursor(7,0);
  	lcd.print("mirando");
  	lcd.setCursor(6,1);
  	lcd.print("(#^.^#)");
}
long readUltrasonicDistance(int triggerPin, int echoPin)
{
	pinMode(triggerPin, OUTPUT);
	digitalWrite(triggerPin, LOW);
	delayMicroseconds(2);
	digitalWrite(triggerPin, HIGH);
	delayMicroseconds(10);
	digitalWrite(triggerPin, LOW);
	pinMode(echoPin, INPUT);
	return pulseIn(echoPin, HIGH);
}

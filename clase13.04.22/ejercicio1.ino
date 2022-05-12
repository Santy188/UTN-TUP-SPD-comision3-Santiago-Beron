// Código Ejemplo
int buttonState = 0;
void setup()
{
// Configurar Pin como Entrada
pinMode(2, INPUT);
// Configurar Pines como Salida
pinMode(3, OUTPUT);  
pinMode(5, OUTPUT);
pinMode(10, OUTPUT);
pinMode(13, OUTPUT);
}
void loop()
{
// Leer Estado del Puerto de Entrada 2
buttonState = digitalRead(2);
// Actual Segun el Estado de la Lectura
if (buttonState == HIGH){
 //APAGAR LED 10
digitalWrite(10, LOW);  
// Encender LED 4
digitalWrite(3, HIGH);  
// Apagar Led en Puerto 5
digitalWrite(5, LOW);
// Encender Led en Puerto 13
digitalWrite(13, HIGH);
// Esperar 1 Segundo
delay(500);
//ENCENDER LED 10
digitalWrite(3, LOW);
// Encender Led en Puerto 5
digitalWrite(5, HIGH);
// Apagar Led en Puerto 13
digitalWrite(13, LOW);
// Esperar 1 Segundo
//PRENDER LED 10
digitalWrite(10, HIGH);  
delay(500);
} else {
// Apagar Leds en Puertos 5 y 13

digitalWrite(13, LOW);
digitalWrite(10, LOW);

}
  if (buttonState == LOW){
    digitalWrite(5, LOW);
    digitalWrite(3, LOW);
}
}
#include <IRremote.h>
int RECV_PIN = 4;
int IRData = 0;
int Bomb_pin = 12;
int contador =1;
int Led_Pin = 7;

IRrecv irrecv(RECV_PIN);
decode_results results;

void setup()
{
  	pinMode(Bomb_pin, OUTPUT);
  	pinMode(Led_Pin, OUTPUT);
	Serial.begin(9600);
	irrecv.enableIRIn();
}
void loop() 
{
  if (irrecv.decode(&results))
  {

      IRData = results.value;
      irrecv.resume();
      if (IRData == 255)
      {
        digitalWrite(Bomb_pin, HIGH);
        digitalWrite(Led_Pin, HIGH);

        contador += 1;
        if(contador % 2 == 0)
        {
          digitalWrite(Bomb_pin, LOW);
          digitalWrite(Led_Pin, LOW);
        } 
      } 
  }
}

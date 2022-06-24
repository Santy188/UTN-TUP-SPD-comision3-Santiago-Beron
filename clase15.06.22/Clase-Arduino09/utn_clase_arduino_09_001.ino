int lectura = 0;
int anterior = 0;
int distancia = 0;
int pin = 6;
int luz_pin = 7;
void setup()
{
	Serial.begin(9600);
  	pinMode(luz_pin, OUTPUT);
	Serial.println("Iniciando");
}
void loop()
{
	lectura = readUltrasonicDistance(pin, pin);
	distancia = 0.01723 * lectura;
	if ( distancia != anterior )
 	{
    	anterior = distancia;
		Serial.print(distancia);
 		Serial.println("cm");

  	}
    delay(100);   
    if(distancia <= 90)
    {
          digitalWrite(luz_pin, HIGH);
    }
    else
    {
          digitalWrite(luz_pin, LOW); 
    }
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

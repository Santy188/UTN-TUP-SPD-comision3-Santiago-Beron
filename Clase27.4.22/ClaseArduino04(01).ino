// Codigo Ejemplo
int Led_Pin = 3;
int Fot_Pin = A0;
int Fot_Pin2 = A2;
int Led_Pin2 = 2;
int sensorValue = 0;
int sensorValue2 = 0;
int outputValue = 0;
int ouputVaule2 = 0;  
void setup()
{
Serial.begin(9600);
pinMode(Led_Pin, OUTPUT);
pinMode(Led_Pin2, OUTPUT);  
}
void loop()
{
 digitalWrite(Led_Pin, HIGH);
  digitalWrite(Led_Pin2, HIGH);
 sensorValue = analogRead(Fot_Pin);
  sensorValue2 = analogRead(Fot_Pin2);
 outputValue = map(sensorValue, 0, 255, 0, 1023);
  outputValue = map(sensorValue2, 0, 255, 0, 1023);
 analogWrite(Led_Pin, outputValue);
 analogWrite(Led_Pin2, ouputVaule2);
 Serial.print("Lectura1: ");
 Serial.println(sensorValue);
  Serial.print("Lectura2: ");
  Serial.println(sensorValue2);
 Serial.print("Mapeado1: ");
 Serial.println(outputValue);
  Serial.print("Mapeado2: ");
 delay(250);
 digitalWrite(Led_Pin, HIGH);
 delay(250);
 digitalWrite(Led_Pin2, HIGH);
  delay(250);
}
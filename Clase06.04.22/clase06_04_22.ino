int Led_Pin1 = 10;
int Led_Pin2 = 13;
int Led_Pin3 = 12;
int Led_Pin4 = 11;

void setup()
{

  pinMode(Led_Pin1, OUTPUT);
  pinMode(Led_Pin2, OUTPUT);
  pinMode(Led_Pin3, OUTPUT);
  pinMode(Led_Pin4, OUTPUT);
}

void loop()
{
  digitalWrite(Led_Pin1, HIGH);
  digitalWrite(Led_Pin2, HIGH);
  delay(500);
  digitalWrite(Led_Pin3, HIGH);
  digitalWrite(Led_Pin4, HIGH);
  delay(1000);
  digitalWrite(Led_Pin1, LOW);
  digitalWrite(Led_Pin2, LOW);
  delay(500);
  digitalWrite(Led_Pin3, LOW);
  digitalWrite(Led_Pin4, LOW);
  delay(1000);
}
#include <IRremote.h>
int RECV_PIN = 14;
int IRData = 0;
int foco_Pin = 7;
int foco_Status = 0;
int Rel_Pin = 2;
int Rel_Status = 0;
bool test_mode = true;
IRrecv irrecv(RECV_PIN);
decode_results results;
void setup()
{
  Serial.begin(9600);
  pinMode(foco_Pin, OUTPUT);
  irrecv.enableIRIn();
}
void loop()
{
	if (irrecv.decode(&results))
    {
        // Mostrar Lectura
        IRData = results.value;
        irrecv.resume();
        // Ver Valores
        if (test_mode == false)
        {
           Serial.print("Datos: ");
           Serial.print(IRData, HEX);
           Serial.print(" {");
           Serial.print(IRData);
           Serial.println("}");
        }
        switch (IRData)
        {
            case 255:
              if (foco_Status == 0)
              {
                 Serial.println("Bombilla Encendida");
                 digitalWrite(foco_Pin, 1);
                 foco_Status = 1;
              }
              else
              {
                 Serial.println("Bombilla Apagada");
                 digitalWrite(foco_Pin, 0);
                 foco_Status = 0;
              }
              break;
			case -30601:
              if (Rel_Status == 0)
              {
                Serial.println("Motor Encendido");
                digitalWrite(Rel_Pin, 1);
                Rel_Status = 1;
              }
              else
              {
                Serial.println("Motor Apagado");
                digitalWrite(Rel_Pin, 0);
                Rel_Status = 0;
              }
              break;
            case 18615:
            Serial.println("Boton3");
            break;
            default:
            Serial.println("Boton No Permitido");
		}
	}
}
#define buzzer 7
#define gas_reading A0
int leitorgas = gas_reading;
int som = buzzer;
void setup()
{   
  pinMode(som, OUTPUT);
  Serial.begin(9600); 
}

void loop()
{
  int valor = analogRead(leitorgas);
  Serial.println(valor);
  if (valor >= 400){
   tone(som, 1000, 10000);
     delay(1000);
  }
  else {
    noTone(som);
    delay(1000);
    }
}

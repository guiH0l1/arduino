/**
  Sensor de estacionamento
  @author Guilherme Holi
*/

int  distancia;
long sensor;
  
  
void setup()
{
 pinMode(13, OUTPUT);
 pinMode(12, OUTPUT);
 pinMode(A4, INPUT); //echo
 pinMode(A5, OUTPUT); //tring
}

void loop()
{
  distancia = ping();
  if (distancia <= 10){
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);  
  } else {
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);    
    
  }
}

long ping() {
  digitalWrite(A5, LOW); //zerar
  delayMicroseconds(2);
  digitalWrite(A5, HIGH); //disparar o pulso sonoro
  delayMicroseconds(10);
  sensor = pulseIn(A4, HIGH); //receber o retorno do pulso
  return (sensor / 29) / 2; //calcular o valor em cm
}

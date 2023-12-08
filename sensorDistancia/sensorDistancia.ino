/**
  Sensor ultrassonico HC-SR04
  @author Guilherme Holi
  -------------------------
  |  Sensor   |  Arduino  |
  |   Vcc     |    5v     |
  |   Trig    |    A5     |
  |   Echo    |    A4     |
  |   GND     |    GND    |
  -------------------------

*/
 //variaveis para medir distancia
int distancia; //cm
long sensor; //variavel de precisão numeros nao inteiros (apoio ao calculo)

void setup() {
  Serial.begin(9600);
  pinMode(A4, INPUT); //echo
  pinMode(A5, OUTPUT); //tring

}

void loop() {
 distancia = ping(); //chamar a funçao ping e armazenar o valor de retorno na variavel distancia

 Serial.print(distancia);
 Serial.println(" cm");


}

//funçao usada para o disparo do pulso e calculo da distancia
//função e um bloco de codigo reutilizavel
long ping() {
  digitalWrite(A5, LOW); //zerar
  delayMicroseconds(2);
  digitalWrite(A5, HIGH); //disparar o pulso sonoro
  delayMicroseconds(10);
  sensor = pulseIn(A4, HIGH); //receber o retorno do pulso
  return (sensor / 29) / 2; //calcular o valor em cm
}


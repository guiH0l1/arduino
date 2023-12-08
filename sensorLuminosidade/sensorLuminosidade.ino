/**
  Sensor de luminosidade
  @author Guilherme Holi
*/

int sensor;

void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  sensor = analogRead(A0);  //leitura do sensor (0 a 1024)
  Serial.println(sensor);

  if (sensor <= 800) {
    digitalWrite(13, HIGH);
  } else {
    digitalWrite(13, LOW);
  }
}

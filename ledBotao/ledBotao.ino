/**
  Acionamento de led com botão
  @author Guilherme holi
*/

int botao;  //cria a variavel de nome botão do tipo numerico inteiro

void setup() {
  pinMode(13, OUTPUT);
  pinMode(3, INPUT_PULLUP);  //CONFIGURAR O PINO 3 COMO SAÍDA PROTEGIDA
}

void loop() {
  botao = digitalRead(3);  //0 -> botão pressionado | 1 -> botão não pressionado
  if (botao == 0) {
    digitalWrite(13, HIGH);
  } else {
    digitalWrite(13, LOW);
  }
}
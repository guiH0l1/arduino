/**
  Leitura de um botão
  @author Guilherme holi
*/

int botao; //cria a variavel de nome botão do tipo numerico inteiro

void setup() {
  pinMode(3, INPUT_PULLUP); //CONFIGURAR O PINO 3 COMO SAÍDA PROTEGIDA
  Serial.begin(9600); //ativar a comunicação serial

}

void loop() {
  botao = digitalRead(3); //a variavel botão recebe o valor que recebe 0 ou 1
  Serial.println(botao); // escrever no terminal o valor da variavel botão

}

const int led = 9;
const int botao = 2;

int estadobotao = 0;

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(botao , INPUT);
}

void loop()
{
  estadobotao = digitalRead(botao);
  
  if ( estadobotao == HIGH) {
    digitalWrite(led,HIGH);
  } else {
    digitalWrite(led,LOW);
  }
}

   

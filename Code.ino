int amarelo = 9;
int verde = 8;
int vermelho = 10;

void setup() {
  // put your setup code here, to run once:
  pinMode(amarelo, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(vermelho, OUTPUT);
}

void loop() {
  digitalWrite(vermelho, LOW);
  digitalWrite(verde, HIGH);
  delay(25000);
  digitalWrite(verde, LOW);
  digitalWrite(amarelo, HIGH);
  delay(4000);
  digitalWrite(amarelo, LOW);
  digitalWrite(vermelho, HIGH);
  delay(2000);
}

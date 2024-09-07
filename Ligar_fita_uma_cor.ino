// C++ code
// Programa para ligar uma fita LED de uma única cor
// Atuação da saída do arduino para relé -> lógica invertida
// https://www.youtube.com/@EE44YY


int estado = 0;

void setup()
{
  pinMode(7, INPUT);
  pinMode(3, OUTPUT);
  digitalWrite(3, HIGH);
}

void loop()
{
  if (digitalRead(7) == 1 && estado == 0) {
    digitalWrite(3, LOW);
    estado = 1;
    delay(500); // Wait for 500 millisecond(s)
  } else {
    if (digitalRead(7) == 1 && estado == 1) {
      digitalWrite(3, HIGH);
      estado = 0;
      delay(500); // Wait for 500 millisecond(s)
    }
  }
}
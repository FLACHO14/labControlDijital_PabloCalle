// Definir el pin del LED
const int ledPin = 13;

void setup() {
  // Inicializar el pin del LED como salida
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Encender el LED
  digitalWrite(ledPin, HIGH);
  // Esperar 1 segundo
  delay(1000);
  // Apagar el LED
  digitalWrite(ledPin, LOW);
  // Esperar 1 segundo
  delay(1000);
}
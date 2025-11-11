

const int LED_PIN = 23;               // Pin del LED
const int TEMPS_ENCES = 500;         // Temps que el LED triga en encendre 
const int TEMPS_APAGAT = 1500;       // Temps que el LED triga en apagar

void setup() {
  pinMode(LED_PIN, OUTPUT);          // Configurem el pin com a sortida
}

void loop() {
  digitalWrite(LED_PIN, HIGH);       // Encén el LED
  delay(TEMPS_ENCES);                // Espera el temps d’encesa

  digitalWrite(LED_PIN, LOW);        // Apaga el LED
  delay(TEMPS_APAGAT);               // Espera el temps d’apagat
}

/*
  Analog Input test for SPRESENSE
*/

uint16_t AIN4;
uint16_t AIN5;

uint16_t AIN4_MAX = 1004; // ADC Value when 3.3V input
uint16_t AIN5_MAX = 990; // ADC Value when 3.3V input

float AIN4_V;
float AIN5_V;

void setup() {
    Serial.begin(115200);
    pinMode(LED0, OUTPUT);
    pinMode(LED1, OUTPUT);
    pinMode(LED2, OUTPUT);
    pinMode(LED3, OUTPUT);
}

void loop() {
    AIN4 = analogRead(A2);
    AIN4_V = 3.3 * ((float)AIN4/AIN4_MAX);

    Serial.println("AIN4 =" + String(AIN4));
    Serial.println("AIN4 =" + String(AIN4_V) + " V");
    digitalWrite(LED0, HIGH);
    delay(100);
    digitalWrite(LED1, HIGH);
    delay(100);
    digitalWrite(LED2, HIGH);
    delay(100);
    digitalWrite(LED3, HIGH);
    delay(300);

    AIN5 = analogRead(A3);
    AIN5_V = 3.3 * ((float)AIN5/AIN5_MAX);

    Serial.println("AIN5=" + String(AIN5));
    Serial.println("AIN5 =" + String(AIN5_V) + " V");
    digitalWrite(LED0, LOW);
    delay(100);
    digitalWrite(LED1, LOW);
    delay(100);
    digitalWrite(LED2, LOW);
    delay(100);
    digitalWrite(LED3, LOW);
    delay(300);
}

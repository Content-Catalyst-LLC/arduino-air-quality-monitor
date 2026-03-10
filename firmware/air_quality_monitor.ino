/*
  Arduino Air Quality Monitor
  ---------------------------
  Prototype firmware for particulate matter monitoring.

  Notes:
  - Replace placeholder sensor logic with your final sensor library / parser.
  - Intended as a reference structure for PM2.5 / PM10 monitoring.
*/

const unsigned long SAMPLE_INTERVAL_MS = 5000UL;

unsigned long lastSampleTime = 0;

// Placeholder particulate values
float pm25 = 0.0;
float pm10 = 0.0;

void setup() {
  Serial.begin(9600);
  Serial.println("Arduino Air Quality Monitor Starting");
  Serial.println("-----------------------------------");
}

void loop() {
  unsigned long now = millis();

  if (now - lastSampleTime >= SAMPLE_INTERVAL_MS) {
    lastSampleTime = now;

    // Replace this block with actual sensor reads
    pm25 = 12.5;
    pm10 = 21.8;

    Serial.print("PM2.5: ");
    Serial.print(pm25);
    Serial.print(" ug/m3 | PM10: ");
    Serial.print(pm10);
    Serial.println(" ug/m3");
  }
}

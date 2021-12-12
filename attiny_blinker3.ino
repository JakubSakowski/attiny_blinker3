// Written by Kuba Sakowski (2021)
// Thanks Martin Vrana (2017) for motivation!

// this variable stores the analog value aquired from the potentiometer
int val = 0;

void setup() {
    //setup for output pins for LEDs 
    pinMode(0, OUTPUT);
    pinMode(1, OUTPUT);
    pinMode(2, OUTPUT);
}

void loop() {
    // First the analog value on analog pin 3 is read and stored into val
    val = analogRead(3);
    // Then the 1st LED is turned on for the delay set by the potentiometer reading val
    digitalWrite(0, HIGH);
    delay(val);
    digitalWrite(0, LOW);
    // After the 1st LED is turned off, the process repeats for the 2nd LED
    digitalWrite(1, HIGH);
    delay(val);
    digitalWrite(1, LOW);
    // After the 2nd LED is turned off, the process repeats for the 3rd LED
    digitalWrite(2, HIGH);
    delay(val);
    digitalWrite(2, LOW);
    // After the 3rd LED is turned off, the process repeats for the 1st LED
} 

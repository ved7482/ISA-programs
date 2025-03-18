// JAI SHREE RAM

// Defines pin numbers
const int trigPin = 6;
const int echoPin = 7;
const int buzzer = 8;
const int ledPin = 13;

// Defines variables
long duration;
int distance;
int safetyDistance;

void setup() {
    pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
    pinMode(echoPin, INPUT); // Sets the echoPin as an Input
    pinMode(buzzer, OUTPUT);
    pinMode(ledPin, OUTPUT);
    Serial.begin(9600); // Starts the serial communication
}

void loop() {
    // Clears the trigPin
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);

    // Sets the trigPin on HIGH state for 10 microseconds
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);

    // Reads the echoPin, returns the sound wave travel time in microseconds
    duration = pulseIn(echoPin, HIGH);

    // Calculating the distance
    distance = duration * 0.034 / 2;
    safetyDistance = distance;

    if (safetyDistance <= 5) {  // Fixed comparison operator
        digitalWrite(buzzer, HIGH);
        digitalWrite(ledPin, HIGH);
        Serial.println("Keep safety distance please");  // Fixed quotes
    } else {
        digitalWrite(buzzer, LOW);
        digitalWrite(ledPin, LOW);
    }

    Serial.print("Distance: ");  // Fixed quotes
    Serial.println(distance);
  
    delay(500); // Small delay to avoid too many readings
}
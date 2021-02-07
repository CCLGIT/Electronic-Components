
int ledPin = 7;    // pin connecting to LED
int photoPin = A0; // pin connecting to photoresistor

int photoresistor = 0; // this variable is to store the value from photoresistor intensity
int threshold = 30;   // if photoresistor falls below this value,LED will light up

void setup() {
   Serial.begin(115200);  // start serial communication

   pinMode(ledPin,OUTPUT); //set pin 7 as output to HIGH or LOW
   
}

void loop() {
  photoresistor = analogRead(photoPin); // read the values of photoresistor between 0 tp 1023 depending on light intensity
  Serial.println(photoresistor);        // display the values of photoresistor at the serial monitor

  // if the value is below threshold, LED will light and coversely
  if (photoresistor < threshold) {
    digitalWrite(ledPin,HIGH);  // LED will light up
  } else {
    digitalWrite(ledPin,LOW);   // LED will dimmed
  }
    delay(100);                 // to allow for easier data reading
}
/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/

// Define input pin for the button
const int buttonPin = 9;

// Define output pins for LEDs (using analog input pins 3, 4, and 5)
const int led_1 = A3; // Analog Input 3 (PC3)
const int led_2 = A4; // Analog Input 4 (PC4)
const int led_3 = A5; // Analog Input 5 (PC5)

void setup() {
  pinMode(buttonPin, INPUT); // Set button pin as input

  // Set LED pins as output pins
  pinMode(led_1, OUTPUT);
  pinMode(led_2, OUTPUT);
  pinMode(led_3, OUTPUT);
}

void loop() {
  // Read button state
  if (digitalRead(buttonPin) == HIGH) { // Button is pressed
    
    //Successively blink the LEDs
    digitalWrite(led_1, HIGH);
    delay(500);
    digitalWrite(led_1, LOW);

    digitalWrite(led_2, HIGH);
    delay(500);
    digitalWrite(led_2, LOW);

    digitalWrite(led_3, HIGH);
    delay(500);
    digitalWrite(led_3, LOW);
  }
}

//Add your names below this line
----------------------------------------------------------------
  Benjamin Wu
  Anthony Spadafore (Jit)
  Jacob Ferrer (JIT)

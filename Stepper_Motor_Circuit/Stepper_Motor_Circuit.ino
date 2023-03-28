#include <LiquidCrystal.h>
// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(PB8, PB6, PB5, PB4, PB3, PB15);

// define MSpin
const int MS1_PIN = PA7;
const int MS2_PIN = PA6;
const int MS3_PIN = PA5;

// full-step switch
const int switchFSPin = PB8; // Define the pin for the switch
volatile bool switchFSState = false; // Initialize switch state variable
// 1/2-step switch
const int switch2SPin = PB15; // Define the pin for the switch
volatile bool switch2SState = false; // Initialize switch state variable
// 1/4-step switch
const int switch4SPin = PB14; // Define the pin for the switch
volatile bool switch4SState = false; // Initialize switch state variable
// 1/8-step switch
const int switch8SPin = PB13; // Define the pin for the switch
volatile bool switch8SState = false; // Initialize switch state variable
// 1/16-step switch
const int switch16SPin = PB12; // Define the pin for the switch
volatile bool switch16SState = false; // Initialize switch state variable


void setup() {
  // set up the LCD's number of columns and rows
  lcd.begin(16, 2);

  pinMode(MS1_PIN, OUTPUT);
  pinMode(MS2_PIN, OUTPUT);
  pinMode(MS3_PIN, OUTPUT);
  pinMode(P4, OUTPUT);


  // Set switch pin as input with internal pull-up resistor
  pinMode(switchFSPin, INPUT_PULLUP); 
  // Set switch pin as input with internal pull-up resistor
  pinMode(switch2SPin, INPUT_PULLUP);
  // Set switch pin as input with internal pull-up resistor
  pinMode(switch4SPin, INPUT_PULLUP);
  // Set switch pin as input with internal pull-up resistor
  pinMode(switch8SPin, INPUT_PULLUP);
  // Set switch pin as input with internal pull-up resistor
  pinMode(switch16SPin, INPUT_PULLUP);

}

// Defining function for specific motor-control mode 
void fullStepMode() {
  digitalWrite(MS1_PIN, LOW);
  digitalWrite(MS2_PIN, LOW);
  digitalWrite(MS3_PIN, LOW);
}

void twoStepMode() {
  digitalWrite(MS1_PIN, HIGH);
  digitalWrite(MS2_PIN, LOW);
  digitalWrite(MS3_PIN, LOW);
}

void fourStepMode() {
  digitalWrite(MS1_PIN, LOW);
  digitalWrite(MS2_PIN, HIGH);
  digitalWrite(MS3_PIN, LOW);
}

void eightStepMode() {
  digitalWrite(MS1_PIN, LOW);
  digitalWrite(MS2_PIN, LOW);
  digitalWrite(MS3_PIN, HIGH);
}
void sixteenStepMode() {
  digitalWrite(MS1_PIN, HIGH);
  digitalWrite(MS2_PIN, HIGH);
  digitalWrite(MS3_PIN, HIGH);
}


void loop() {
  
  // Read the state of the switch
  switchFSState = digitalRead(switchFSPin); 
  switch2SState = digitalRead(switch2SPin); 
  switch4SState = digitalRead(switch4SPin); 
  switch8SState = digitalRead(switch8SPin); 
  switch16SState = digitalRead(switch16SPin); 
  fullStepMode();
  // check if the button is pressed
  if (switchFSState == LOW) { 
    fullStepMode(); // Call the fullStepMode() function
  }A
  else if (switch2SState == LOW) { 
    twoStepMode(); // Call the twoStepMode() function
  }
  else if (switch4SState == LOW) { 
    fourStepMode(); // Call the fourStepMode() function
  }
  else if (switch8SState == LOW) { 
    eightStepMode(); // Call the eightStepMode() function
  }
  else if (switch16SState == LOW) { 
    sixteenStepMode(); // Call the sixteenStepMode() function
  }
}

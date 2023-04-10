// Sweep
// by BARRAGAN <http://barraganstudio.com> 
// Modified for Energia/Stellaris Launchpad by Kevin Balke <fughilli@gmail.com>
// This example code is in the public domain.

#include <Servo.h> 

#define LEFT_BTN_PIN      74   // Left push button on the launchpad
#define RIGHT_BTN_PIN     73  // Right psh button on the launchpad
#define RED_LED_PIN       70  // Launchpad Pin -> P1.0
#define RGB_LED_RED_PIN   75  // Launchpad Pin -> P2.0
#define RGB_LED_GREEN_PIN 76  // Launchpad Pin -> P2.1
#define RGB_LED_BLUE_PIN  77  // Launchpad Pin -> P2.2

 
Servo myservo;  // create servo object to control a servo 
                // a maximum of eight servo objects can be created 
 
int pos = 0;    // variable to store the servo position 
 
void setup() 
{ 
  pinMode(RGB_LED_RED_PIN, OUTPUT);
  pinMode(LEFT_BTN_PIN, INPUT_PULLUP);

  digitalWrite(RGB_LED_RED_PIN, HIGH);
  myservo.attach(7);  // attaches the servo on Port F, pin 1 (Red LED pin) to the servo object
} 
 
 
void loop() 
{ 
  for(pos = 0; pos < 180; pos += 1)  // goes from 0 degrees to 180 degrees 
  {                                  // in steps of 1 degree 
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(15);                       // waits 15ms for the servo to reach the position 
  } 
  for(pos = 180; pos>=1; pos-=1)     // goes from 180 degrees to 0 degrees 
  {                                
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(15);                       // waits 15ms for the servo to reach the position 
  } 
} 

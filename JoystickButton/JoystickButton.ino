// Simple example application that shows how to read four Arduino
// digital pins and map them to the USB Joystick library.
//
// Ground digital pins 9, 10, 11, and 12 to press the joystick 
// buttons 0, 1, 2, and 3.
//
// NOTE: This sketch file is for use with Arduino Leonardo and
//       Arduino Micro only.
//
// by Matthew Heironimus
// 2015-11-20
//--------------------------------------------------------------------

#include <Joystick.h>

Joystick_ Joystick(0x04, JOYSTICK_TYPE_JOYSTICK,
  1, 0,                 // Button Count, Hat Switch Count 
  false, false, false,  // X, Y, Z Axis
  false, false, false,  // Rx, Ry, Rz Axis    
  false, false,         // Rudder, Throttle
  false, false, false); // Accelerator, Brake Steering

void setup() {

  int pins[1] = {2};

  // Initialize Button Pins
  pinMode(2, INPUT_PULLUP);

  // Initialize Joystick Library
  Joystick.begin();

  // Lets Release All The Buttons Just In Case They Init High.
  for (int index = 0; index < 1; index++){
    Joystick.releaseButton(pins[index]);
  }
}

// Constant that maps the physical pin to the joystick button.
const int pinToButtonMap = 2;

// Last state of the button
int lastButtonState[1] = {0};

void loop() {

  // Read pin values
  for (int index = 0; index < 1; index++)
  {
    int currentButtonState = !digitalRead(index + pinToButtonMap);
    if (currentButtonState != lastButtonState[index])
    {
      Joystick.setButton(index, currentButtonState);
      lastButtonState[index] = currentButtonState;
    }
  }
}

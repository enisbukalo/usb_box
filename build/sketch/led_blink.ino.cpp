#include <Arduino.h>
#line 1 "c:\\Users\\ebukalo\\Documents\\GitHub\\usb_box\\led_blink\\led_blink.ino"
#include <Joystick.h>  // Use MHeironimus's Joystick library

Joystick_ Joystick(JOYSTICK_DEFAULT_REPORT_ID, JOYSTICK_TYPE_GAMEPAD,
	10, 0,                  // Button Count, Hat Switch Count
	false, false, false,    // No X, Y, or Z axes
	false, false, false,    // No Rx, Ry, or Rz
	false, false,           // No rudder or throttle
	false, false, false);   // No accelerator, brake, or steering

const uint8_t ButtonOffset = 1; // Arduino Joystick buttons are indexed at 0
#else
const uint8_t ButtonOffset = 0;  // Teensy Joystick buttons are indexed at 1
#endif

#include <HID_Buttons.h>  // Must import AFTER Joystick.h

const uint8_t ButtonPin = 6;  // Pin for hardware button
const uint8_t ButtonNumber = 1 - ButtonOffset;  // Press this Joystick button # when the pin is grounded

JoystickButton myButton(ButtonNumber);

void setup() {
	pinMode(ButtonPin, INPUT_PULLUP);
	Joystick.begin();
}

void loop() {
	boolean pressed = !digitalRead(ButtonPin);
	myButton.set(pressed);
}

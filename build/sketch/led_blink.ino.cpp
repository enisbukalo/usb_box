#include <Arduino.h>
#line 1 "c:\\Users\\ebukalo\\Documents\\GitHub\\usb_box\\led_blink.ino"
#line 1 "c:\\Users\\ebukalo\\Documents\\GitHub\\usb_box\\led_blink.ino"
void setup();
#line 7 "c:\\Users\\ebukalo\\Documents\\GitHub\\usb_box\\led_blink.ino"
void loop();
#line 1 "c:\\Users\\ebukalo\\Documents\\GitHub\\usb_box\\led_blink.ino"
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on 
  delay(500);                       // wait for half a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off 
  delay(500);                       // wait for half a second
}

# 1 "c:\\Users\\ebukalo\\Documents\\GitHub\\usb_box\\led_blink.ino"
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(2, 0x01);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(2, 0x1); // turn the LED on 
  delay(500); // wait for half a second
  digitalWrite(2, 0x0); // turn the LED off 
  delay(500); // wait for half a second
}

# 1 "c:\\Users\\ebukalo\\Documents\\GitHub\\usb_box\\led_blink\\led_blink.ino"
# 2 "c:\\Users\\ebukalo\\Documents\\GitHub\\usb_box\\led_blink\\led_blink.ino" 2

void setup() {
    Serial.begin(9600);

  pinMode(30 , 0x1);
  pinMode(17 , 0x1);
}

void loop() {
  digitalWrite(30, 0x0);
  digitalWrite(17, 0x1);
  delay(500);
  digitalWrite(30, 0x1);
  digitalWrite(17, 0x0);
  delay(500);
}

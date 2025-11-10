// week10_2_arduino_pin2_switch_tone_8_523_784_delay100
void setup() {
  pinMode(2,INPUT_PULLUP); // 拉高，變成5v，真的按下去，變0v(GND接地)
  pinMode(8,OUTPUT);
} // pin2 變成按鈕，可以HIGH高(沒按)可以LOW低(按)

void loop() {
  if(digitalRead(2)==LOW){ // 如果pin2有按
    tone(8,523,100); // 發出 523 的 Do
    delay(100);
    tone(8,784,100); // 發出 784 的 So
    delay(100);
  }
}

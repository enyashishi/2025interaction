// week07_3_arduino_blink_blink_blink_blink
// 修改自 week07_2_arduino_blink_blink 只是多插2支 LED
// 小心，有一支要接地GND，另一支接10
// 小心，有一支要接地GND，另一支接11
// 小心，有一支要接地GND，另一支接12
// 小心，有一支要接地GND，另一支接13
void setup() {
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT); // 把第12支腳，能送出資料 OUTPUT
  pinMode(13,OUTPUT); // 把第13支腳，能送出資料 OUTPUT
}

void loop() {
  for(int i=10;i<=13;i++){
    digitalWrite(13,LOW); // 暗掉
    digitalWrite(i-1,LOW); // 發亮
    digitalWrite(i,HIGH);
    delay(500);
  }
}

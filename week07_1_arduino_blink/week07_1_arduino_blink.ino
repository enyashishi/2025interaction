// week07_1_arduino_blink
// 安裝好後，Select Board要選剛剛裝置管理員的那個 USB-Serial
// 的 COM3 or COM4 or COM5...，選好後，Boards 打字 Arduino Uno 選他
// 小心，有一支要接地GND，另一支接13
void setup() {
  pinMode(13,OUTPUT); // 把第13支腳，能送出資料 OUTPUT
}

void loop() {
  digitalWrite(13,HIGH); // 發亮
  delay(500);
  digitalWrite(13,LOW); // 暗掉
  delay(500);
}

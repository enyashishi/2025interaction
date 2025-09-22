// week03_8_arduino_beep_beep_Serial_read
void setup() {
  Serial.begin(9600);
  pinMode(8,OUTPUT);
}
int beep = 1; // 一開始會嗶嗶叫
void serialEvent(){ // 等待 USB 的事件
  while (Serial.available()){ // 若有資料
    char now = Serial.read();
    if(now==' ') beep=0; // 空白字母不叫
    if(now=='b') beep=1; // 字母'b'叫
  }
}
void loop() {
  if(beep == 1){ // 一開始會嗶嗶叫
    tone(8,800,200);
    delay(1000);
  }
}


// week02_3_mousePressed_serial
import processing.serial.*; // 第1行，使用USB 的 serial
Serial myPort; // 第2行，宣告 USB 的 Serial 變數 myPort
void mousePressed(){
  myPort.write(' '); // 第4行，mouse按下時，就送' '出去
}

void setup(){
  size(400,400);
  myPort = new Serial(this,"COM4",9600); // 第3行，準備好
} // 剛剛你在 Arduino 裡設定 COM多少
void draw(){
  if(mousePressed) background(#CA8EFF);
  else background(#FF8EFF);
}

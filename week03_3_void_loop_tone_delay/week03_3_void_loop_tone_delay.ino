// week03_3_void_loop_tone_delay
void setup() {
  // put your setup code here, to run once:
  pinMode(8,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  tone(8, 800, 200);
  // tone(8(pin),800(音高),200(多久響一次))
  delay(1000);
}

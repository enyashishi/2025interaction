// week06_1_sound_library_SoundFile_play
// Fike-Preference 自行改大一點
// Sketch-Library=ManageLibraries，找sound
// File-Examples-Libraries核心式函示庫-Sound-soundfile-SimplePlayBack
import processing.sound.*; // 使用聲音的外掛模組
SoundFile sound; // 宣告 SoundFile 物件變數
void setup(){
  size(500,400); // 視窗大小
  sound = new SoundFile(this,"music.mp3");
  // 老師傳給我們，拉到程式裏
  sound.play(); // 播放
}
void draw(){

}

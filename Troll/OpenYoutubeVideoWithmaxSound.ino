
#include "Keyboard.h"

void OpenCmdWindow(){
    Keyboard.releaseAll();
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press('r');
    Keyboard.releaseAll();
    delay(100);
    Keyboard.println("cmd");
    delay(100);
  }void ExitCmd(){
  Keyboard.println("exit");
  }


  void SetWindowToMaxVolume(){
    
    delay(100);
  Keyboard.println("sndvol -f 1111111"); 
  Keyboard.println("Exit"); 
  delay(300);
   for (int i=0; i<100; i++){
    Keyboard.press(KEY_UP_ARROW);
    
    Keyboard.release(KEY_UP_ARROW);
  }
  delay(600);
 
 }


void OpenUrlToFullScreen(String url, bool soundMax , bool fullScreen){
 
  if(soundMax)
  {
    OpenCmdWindow();
   SetWindowToMaxVolume();
  }
  String msg ="start ";
  msg.concat(url);
   OpenCmdWindow();
    Keyboard.println(msg); 
  //Keyboard.println("Exit"); 
  delay(1000);
  
  if(fullScreen){
    Keyboard.press(KEY_F11);
    Keyboard.release(KEY_F11);
    delay(1000);
    Keyboard.print("f");
  }
  if(soundMax){
  for (int i=0; i<20; i++){
      delay(50);
        Keyboard.press(KEY_UP_ARROW);
      delay(50);
        Keyboard.release(KEY_UP_ARROW);
      }
   }
  
  }


void OpenCmdWindoAtRoot(){
    OpenCmdWindow();
    Keyboard.println('c:');
}

void OpenCmd_Video(){

    OpenCmdWindowInDesktop(250);
    Keyboard.println("cd ../Videos");
    Keyboard.println("cd ../../Videos");

}
void OpenCmd_Music(){
    OpenCmdWindowInDesktop(250);
    Keyboard.println("cd ../Music");
    Keyboard.println("cd ../../Music");
}
void OpenCmd_Downloads(){
    OpenCmdWindowInDesktop(250);
    Keyboard.println("cd ../Downloads");
    Keyboard.println("cd ../../Downloads");
}
void OpenCmd_Documents(){
 
    OpenCmdWindowInDesktop(250);
    Keyboard.println("cd ../Documents");
    Keyboard.println("cd ../../Documents");
}

void OpenCurrentDirectory(){
    Keyboard.println("start .");
  }



void OpenCmdWindow(){
    Keyboard.releaseAll();
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press('r');
    Keyboard.releaseAll();
    delay(100);
    Keyboard.println("cmd");
    delay(100);
  }
  
  void ExitCmd(){
  Keyboard.println("exit");
  }
  
    void OpenCmdWindowInDesktop(int delayBetween=250){
     Keyboard.releaseAll();
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press('r');
    Keyboard.releaseAll();
    delay(delayBetween);
    Keyboard.println("cmd"); 
    delay(delayBetween);
    Keyboard.println("cd Desktop");
    Keyboard.println("cd OneDrive/Desktop");
    }
 void CreateUrlFileOnDesktop(String fileName, String link){

    OpenCmdWindowInDesktop(250);
    
    Keyboard.println("del "+fileName+".url"); 
    Keyboard.println("echo [InternetShortcut] > "+fileName+".url");
    Keyboard.println("echo URL="+link+" >> "+fileName+".url");
    Keyboard.println("Exit");
  
  }

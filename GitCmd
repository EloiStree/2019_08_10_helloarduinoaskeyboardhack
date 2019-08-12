// Example : https://youtu.be/3kzSuUkx_cE?t=120
void OpenCurrentFolder(){
 Keyboard.println("cmd");
 delay(500);
}


void AddAndCommitWithGit(){

 Keyboard.println("git status");
 delay(10);
 Keyboard.println("git add .");
 delay(2000);
 Keyboard.println("git commit -m \"Auto-commit\"");
}

void PullPushWithGit(){
  AddAndCommitWithGit();
 delay(10);
 Keyboard.println("git pull");
  AddAndCommitWithGit();
 delay(10);
 Keyboard.println("git push");
  
}

void CheckCurrentStateOfProjectInSelectedFolder(){
  OpenCurrentFolder();
 delay(10);
 Keyboard.println("git status");
}

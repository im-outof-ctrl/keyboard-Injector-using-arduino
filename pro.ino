#include "Keyboard.h"

void typeKey(int key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}
void setup()
{
  Keyboard.begin();
  delay(2000);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(1000);
  Keyboard.print("cmd");
  typeKey(KEY_RETURN);
  delay(1000);
  Keyboard.print("copy f:\\dev.exe d:\\");
  typeKey(KEY_RETURN);
  delay(2000); 
  Keyboard.print("exit");
  typeKey(KEY_RETURN);
  delay(2000);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('e');
  Keyboard.releaseAll();
  delay(1000);
  typeKey(KEY_RIGHT_ARROW);
  typeKey(KEY_RETURN);
  typeKey('D');
  typeKey(KEY_RETURN);
  delay(20000); 
  typeKey(KEY_RETURN);
  delay(2000); 
  typeKey(KEY_RETURN);
  delay(2000); 
  typeKey(KEY_RETURN);
  delay(2000); 
  typeKey(KEY_RETURN);
  delay(2000); 
  typeKey(KEY_RETURN);
  delay(30000); 
  typeKey(KEY_RETURN);
  delay(2000); 
  typeKey(KEY_RETURN);
  delay(2000); 
  typeKey(KEY_RETURN);
  delay(2000); 
  typeKey(KEY_RETURN);
  Keyboard.end();
}
void loop() {}





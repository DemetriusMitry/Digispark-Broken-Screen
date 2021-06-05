#include "DigiKeyboardPtBr.h"
void setup() {

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(1, HIGH); // LED on <--> Action start
  
  DigiKeyboardPtBr.sendKeyStroke(0);
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.print("https://www.youtube.com/watch?v=uKisdcdVRl8&t=181s&ab_channel=ManuChaoManuChaoCanaloficialdoartista");
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardPtBr.delay(2000);
  // o comando abaixo é para o script apertar tab até conseguir chegar na tela
  DigiKeyboardPtBr.sendKeyStroke(0x2b);
  DigiKeyboardPtBr.sendKeyStroke(0x2b);
  DigiKeyboardPtBr.sendKeyStroke(0x2b);
  DigiKeyboardPtBr.sendKeyStroke(0x2b);
  DigiKeyboardPtBr.sendKeyStroke(0x2b);
  // a letra F no youtube habilita full screen
  DigiKeyboardPtBr.sendKeyStroke(KEY_F);
  
  digitalWrite(1, LOW);
  for(;;){ /*empty*/ }
}

#include <Arduino.h>
#include <DigiKeyboard.h>

void setup() {}

void loop() {
    // Abrir o navegador do PatruLINO
    // DigiKeyboard.delay(1000);
    // DigiKeyboard.sendKeyStroke(0);
    // DigiKeyboard.delay(500);
    // DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    // DigiKeyboard.delay(500);
    // DigiKeyboard.println("chrome --disable-web-security --user-data-dir=c:/tmp --start-fullscreen https://patrulino.patrulhaeureka.org");
    // DigiKeyboard.delay(7000);

    // baixar o atalho do desktop para iniciar o PatruLINO
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(0);
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    DigiKeyboard.delay(500);
    DigiKeyboard.println("powershell");
    DigiKeyboard.delay(500);
    DigiKeyboard.println("$client = new-object System.Net.WebClient");
    
    DigiKeyboard.println("$client.DownloadFile(\"https://github.com/villecaribas/patrulino/raw/main/PatruLINO.lnk\" , \"$env:userprofile/Desktop/PatruLINO.lnk\")");
    delay(1000);
    DigiKeyboard.println("$client.DownloadFile(\"https://github.com/villecaribas/patrulino/raw/main/img/lino.ico\" , \"c:\\tmp\\lino.ico\")");
    delay(1000);
   
    DigiKeyboard.delay(7000);

    // DigiKeyboard.println("exit");

    for (;;)
        ;
}
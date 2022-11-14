#include <Arduino.h>
#include <DigiKeyboard.h>

void setup() {}

void loop() {
    // Abrir o navegador do PatruLINO
    DigiKeyboard.sendKeyStroke(0);
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    DigiKeyboard.delay(500);
    DigiKeyboard.println("C:\\Program Files\\Google\\Chrome\\Application\\chrome.exe --disable-web-security --user-data-dir=c:\\tmp --start-fullscreen https://patrulino.patrulhaeureka.org");
    delay(5000);

    // Abrir o Power Shell
    // Baixar o icone
    // DigiKeyboard.sendKeyStroke(0);
    // DigiKeyboard.delay(500);
    // DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    // DigiKeyboard.delay(500);
    // DigiKeyboard.println("powershell");
    // DigiKeyboard.delay(500);    
    // DigiKeyboard.println("$client = new-object System.Net.WebClient");
    // DigiKeyboard.sendKeyStroke(0);
    // DigiKeyboard.delay(500);
    // DigiKeyboard.println("$client.DownloadFile(\"https://github.com/villecaribas/patrulino/raw/main/img/lino.ico\" , \"c:\\tmp\\lino.ico\")");
    // DigiKeyboard.delay(2000);
    // DigiKeyboard.println("exit");


    // String caminho  = "$client.DownloadFile(\"https://github.com/villecaribas/patrulino/raw/main/PatruLINO.lnk\" , \"$env:userprofile/Desktop/teste1.lnk\")";

    // baixar o atalho do desktop para iniciar o PatruLINO
    DigiKeyboard.sendKeyStroke(0);
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    DigiKeyboard.delay(500);
    DigiKeyboard.println("powershell");
    DigiKeyboard.delay(500);
    DigiKeyboard.println("$client = new-object System.Net.WebClient");
    DigiKeyboard.delay(500);
    DigiKeyboard.println("$client.DownloadFile(\"https://github.com/villecaribas/patrulino/raw/main/PatruLINO.lnk\" , \"$env:userprofile/Desktop/teste1.lnk\")");
    DigiKeyboard.delay(2000);
    DigiKeyboard.println("echo \"INSTALACAO REALIZADA COM SUCESSO\"");
    DigiKeyboard.delay(2000);

    // DigiKeyboard.println("exit");

    for (;;)
        ;
}
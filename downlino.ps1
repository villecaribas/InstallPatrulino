mkdir c:\\tmp

$client = new-object System.Net.WebClient
$client.DownloadFile("https://github.com/villecaribas/patrulino/raw/main/img/lino.ico","c:\\tmp\lino.ico")
$client.DownloadFile("https://github.com/villecaribas/patrulino/raw/main/PatruLINO.lnk" , "$env:userprofile/Desktop/PatruLINO.lnk")

$WScriptShell = New-Object -ComObject WScript.Shell
$shortcut = $WScriptShell.CreateShortcut("$env:userprofile\Desktop\PatruLINO.lnk")
$shortcut.IconLocation = "C:\\tmp\lino.ico"
$shortcut.Save()

rm $env:userprofile\\Desktop\\installLino.ps1


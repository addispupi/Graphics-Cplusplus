$invocation = (Get-Variable MyInvocation).Value;
$directoryPath = Split-Path $invocation.MyCommand.Path;

Set-Location $directoryPath;

Remove-Item $directoryPath\* -include *.exe, *.o;

$DirName = (Split-Path $directoryPath -Leaf);
$CppFiles = (Get-ChildItem -Path $directoryPath -Recurse -Filter *.cpp);

for ($i = 0; $i -lt $CppFiles.Count; $i++) {
    g++ -c $CppFiles[$i].Name -o $CppFiles[$i].Name.Replace(".cpp", ".o") -m32;
}

$OFile = (Get-ChildItem -Path $directoryPath -Recurse -Filter *.o);

(g++ $OFile -o $DirName -static-libgcc -lbgi -lgdi32 -luser32 -m32);
Remove-Item $directoryPath\* -include *.o;
#Clear-Host;

Write-Output "$DirName.exe is running";
Write-Output "---";
& ($directoryPath + "\" + $DirName + ".exe");
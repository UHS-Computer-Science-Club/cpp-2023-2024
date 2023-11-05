function Wait-KeyPress {
  Write-Host -NoNewLine 'Press any key to continue...';
  $null = $Host.UI.RawUI.ReadKey('NoEcho,IncludeKeyDown');
  Write-Output ""
}

# Make sure the winget sources aren't broken
$wingetTest = winget source update
if ($wingetTest.Contains("Cancelled")) {
  echo "WinGet isn't working properly. Please update `"App Installer`" in the Microsoft Store first."
  exit
}

# Install VS
Write-Output "Starting the Visual Studio installer. You will need to configure a few options."
Write-Output "Select the `"Desktop development with C++`" workload and enable the latest Windows 11 or Windows 10 SDK."
Wait-KeyPress
winget install --id "Microsoft.VisualStudio.2022.Community" -i

# Install CMake
Write-Output "Starting the CMake installer."
winget install --id "Kitware.CMake" -i

Write-Output "All developer tools are installed."
#
# Purpose: 
# Mechanize the process of building a debug project using conan,cmake for Visual Studio
#
#

Function Log($message) {
Write-Host
Write-Host
Write-Host "================================================================================================"
Write-Host "=" $message 
Write-Host "================================================================================================"
}

$start_location = Get-Location
$build_folder = 'debug'

Log "Creating $build_folder folder"
if (Test-Path $build_folder) 
{
    Remove-Item –recurse -force $build_folder
}
New-Item -ItemType "directory" $build_folder
cd $build_folder

Log "Downloading and preparing requirements (using conan install) in $build_folder folder"
conan install .. -s build_type=Debug
Log "Setting up cmake in $build_folder folder"
cmake .. -G "Visual Studio 16" 
Log "Test build in $build_folder folder"
cmake --build . --config Debug

Log "Build results"
Set-Location $start_location
dir $build_folder/bin
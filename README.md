Test client for OpenVR Conan recipe

## Background
The OpenVR client recipe makes it easy to add OpenVR headers and libraries to a new project.

The recipe itself is 

## Tested configuration
* conan 1.22.0
* Visual Studio 2019 

## References 
* Getting started guide: https://docs.conan.io/en/latest/getting_started.html


## Generating the Visual Studio/CMAKE project
1. Start Visual Studio 2019. Select "continue without code"
2. Open Tools/CommandLine/Developer Powershell
3. cd into c:\projects\openvr_conan_client  
mkdir debug
cd debug
# setup conan
conan install .. -s build_type=Debug
# setup cmake
cmake .. -G "Visual Studio 16" 
# test building from command line
cmake --build . --config Debug


## Using Arsen-deps
conan install .. -s build_type=Debug --build openvr
cmake .. -G "Visual Studio 16" 

 


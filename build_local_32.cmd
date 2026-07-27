call "D:\Visual Studio\Build Tools\VC\Auxiliary\Build\vcvars32.bat"
set "PATH=C:\Program Files\JetBrains\CLion 2025.3.5\bin\cmake\win\x64\bin;C:\Program Files\JetBrains\CLion 2025.3.5\bin\ninja\win\x64;%PATH%"
cmake -B build_msvc_32 -G Ninja -DCMAKE_BUILD_TYPE=Release -DMODULE=SmokeAPI
cmake --build build_msvc_32 --target SmokeAPI

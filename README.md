# K2FemMklLoader

it is a native windows c++ console application which calls WIN API function [LoadLibraryA](https://learn.microsoft.com/en-us/windows/win32/api/libloaderapi/nf-libloaderapi-loadlibrarya?devlangs=cpp&f1url=%3FappId%3DDev16IDEF1%26l%3DEN-US%26k%3Dk(LIBLOADERAPI%252FLoadLibraryA)%3Bk(LoadLibraryA)%3Bk(DevLang-C%252B%252B)%3Bk(TargetOS-Windows)%26rd%3Dtrue) to load DLL k2femmkl64.dll.

It is a windows x64 DLL built by [Intel Fortran compiler](https://www.intel.com/content/www/us/en/developer/tools/oneapi/fortran-compiler.html) which depends on Intel's libiomp5md.dll

It is possible to run it in Docker :

open the directory _\K2FemMklLoader_ and run docker CLI commads

```
docker build -f Dockerfile -t k2femmkl-nanoserver .
docker run -i -t k2femmkl-nanoserver
```

it is possible to switch between Nano Server Container and Windows Core Container by commentng / uncommenting lines in the Dockerfile

```
FROM mpospisil/dotnet-runtime-windowsdesktop:6.0.18-nanoserver-ltsc2022 AS base
#FROM mpospisil/dotnet-runtime-windowsdesktop:6.0.18-windowsservercore-ltsc2022 AS base
```

see [Dockerfile](K2FemMklLoader/Dockerfile)

It is not possible to run K2FemMklLoader in Windows Nanoserver Container - see this discussion
https://github.com/microsoft/Windows-Containers/issues/448


// K2FemMklLoader.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <windows.h>
#include <iostream>
#include <psapi.h>

int main()
{
	std::cout << "Loading k2femmkl64.dll\n";

	DWORD dwFormatFlags = FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_IGNORE_INSERTS | FORMAT_MESSAGE_FROM_SYSTEM;
	DWORD dwBufferLength;
	LPTSTR MessageBuffer;

	// Load the DLL into memory
	HMODULE dllHandle = LoadLibraryA("k2femmkl64.dll");

	// Check if the DLL was loaded successfully
	if (dllHandle == NULL)
	{
		DWORD lastError = GetLastError();
		dwBufferLength = FormatMessageA(dwFormatFlags, dllHandle, lastError, MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT), (LPSTR)&MessageBuffer, 0, NULL);
		DWORD dwBytesWritten;
		std::cout << std::endl;
		WriteFile(GetStdHandle(STD_ERROR_HANDLE), MessageBuffer, dwBufferLength, &dwBytesWritten, NULL);
		std::cout << std::endl;
		std::cout << "Failed to load DLL: " << lastError << std::endl;
		return 1;
	}
	else
	{
		std::cout << "DLL is loaded" << std::endl;
	}

}

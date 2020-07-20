#include <windows.h>
#include <tchar.h>
#include <stdio.h>
#include <stdlib.h>  


VOID ErrorExit(LPTSTR lpMsg)
{
	_tprintf(TEXT("Error! %s with error code of %ld.\n"),
		lpMsg, GetLastError());
	exit(0);
}

int main()
{
	LPVOID lpvBase;	// Base address of the test memory
	LPTSTR lpPtr;
	SYSTEM_INFO sSysInfo;	// Useful information about the system

	GetSystemInfo(&sSysInfo);
	DWORD dwPageSize = sSysInfo.dwPageSize;

	lpvBase = VirtualAlloc(
		(LPVOID)0x50000000,	// The starting address of the region to allocate
		dwPageSize,
		MEM_COMMIT | MEM_RESERVE,
		PAGE_READWRITE);
	if (lpvBase == NULL)
		ErrorExit(TEXT("VirtualAlloc reserve failed."));

	lpPtr = (LPTSTR)lpvBase;
	for (DWORD i = 0; i < dwPageSize; i++)
	{
		lpPtr[i] = '3'; 
		printf("%c", lpPtr[i]);
	}

	return 0;
}
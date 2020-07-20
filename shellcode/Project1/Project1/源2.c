#include <stdio.h>
#include <Urlmon.h>
#include <Wininet.h>
#include <windows.h>

#pragma comment(lib,"Urlmon.lib")

#pragma comment(lib, "Wininet.lib")

int main()
{
	CoInitialize(NULL);
	char *pURL = "http://mirror2.internetdownloadmanager.com/idman637build14.exe?b=1&filename=idman637build14.exe";
	char *pFileName = "test.exe";
	URLDownloadToFile(NULL, pURL, pFileName, 0, NULL);
	CoUninitialize();
	WinExec("test.exe", SW_SHOW);
	return 0;
}
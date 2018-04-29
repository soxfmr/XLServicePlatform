#include <Windows.h>

__declspec(dllexport) BOOL IsInstalled()
{
	OutputDebugString(L"IsInstalled");
	return TRUE;
}

__declspec(dllexport) BOOL InstallPlatform()
{
	OutputDebugString(L"InstallPlatform");
	return TRUE;
}

__declspec(dllexport) BOOL UnInstallerPlatform()
{
	OutputDebugString(L"UnInstallerPlatform");
	return TRUE;
}

__declspec(dllexport) BOOL StartPlatform()
{
	OutputDebugString(L"StartPlatform");
	return TRUE;
}

__declspec(dllexport) BOOL StopServicePlatform()
{
	OutputDebugString(L"StopServicePlatform");
	return TRUE;
}

__declspec(dllexport) BOOL SetPlatformAutoRun()
{
	OutputDebugString(L"SetPlatformAutoRun");
	return TRUE;
}

__declspec(dllexport) VOID WINAPI ServiceMain(DWORD dwArgc, LPTSTR *lpszArgv)
{
	return;
}

BOOL WINAPI DllMain(
	_In_ HINSTANCE hinstDLL,
	_In_ DWORD     fdwReason,
	_In_ LPVOID    lpvReserved
)
{
	return 0;
}
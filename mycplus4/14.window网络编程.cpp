#include <iostream>
#include <Windows.h>

using namespace std;

DWORD WINAPI ThreadFunc(PVOID pParam) {
	Sleep(1000);
	cout << "ÄãºÃ" << endl;
	return 0;
}

int main()
{
	HANDLE handle = CreateThread(nullptr, 0, ThreadFunc, 0, CREATE_SUSPENDED, 0);
	//int a = 0;
	//cin >> a;
	//if (a == 10) {
		//ResumeThread(handle);
	//}
	WaitForSingleObject(handle,INFINITE);
	CloseHandle(handle);
	return 0;
}
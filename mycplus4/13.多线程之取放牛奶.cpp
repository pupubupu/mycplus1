//#include <iostream>
//#include <Windows.h>
//using namespace std;
//
//HANDLE hMutex = NULL;//�źŻ�����
//
///*
//* ����һ��ȡţ�̵��߳�
//*/
//DWORD WINAPI Pickup(LPVOID pParam) {
//	int* sum = (int *)pParam;
//	while (true) {
//		WaitForSingleObject(hMutex, INFINITE);
//		if (*sum > 0) {
//			cout << GetCurrentThreadId() << "��" << *sum << "ƿţ�̱�������" << endl;
//			(*sum)--;
//		}
//		ReleaseMutex(hMutex);
//	}
//	return 0;
//}
//
///*
//*����һ����ţ�̵��߳�
//*/
//DWORD WINAPI PutDown(LPVOID pParam) {
//	int* sum = (int *)pParam;
//	while (true) {
//		WaitForSingleObject(hMutex, INFINITE);
//		if (*sum < 100) {
//			(*sum)++;
//			cout << GetCurrentThreadId() << "�����" << *sum << "ƿţ��" << endl;
//		}
//		ReleaseMutex(hMutex);
//	}
//	return 0;
//}
//
//int main()
//{
//	int sum = 100;
//	HANDLE handle[10];
//	//����һ���źŻ�����
//	hMutex = CreateMutex(NULL, FALSE, "screen");
//	//�����߳�
//	handle[0] = CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)Pickup, &sum, 0, nullptr);
//	handle[1] = CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)PutDown, &sum, 0, nullptr);
//	handle[2] = CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)Pickup, &sum, 0, nullptr);
//	handle[3] = CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)PutDown, &sum, 0, nullptr);
//	handle[4] = CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)Pickup, &sum, 0, nullptr);
//	handle[5] = CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)PutDown, &sum, 0, nullptr);
//	handle[6] = CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)Pickup, &sum, 0, nullptr);
//	handle[7] = CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)Pickup, &sum, 0, nullptr);
//	handle[8] = CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)Pickup, &sum, 0, nullptr);
//	handle[9] = CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)Pickup, &sum, 0, nullptr);
//	WaitForMultipleObjects(10, handle, TRUE, INFINITE);
//
//	CloseHandle(handle[0]);
//	CloseHandle(handle[1]);
//	CloseHandle(handle[2]);
//	CloseHandle(handle[3]);
//	CloseHandle(handle[4]);
//	CloseHandle(handle[5]);
//	CloseHandle(handle[6]);
//	CloseHandle(handle[7]);
//	CloseHandle(handle[8]);
//	CloseHandle(handle[9]);
//
//	return 0;
//}
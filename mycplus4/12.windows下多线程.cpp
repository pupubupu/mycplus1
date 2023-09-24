//#include <iostream>
//#include <stdio.h>
//#include <windows.h>
//#include <string.h>
//#include <time.h>
//using namespace std;
//
//int sum = 100;
//HANDLE hThread[2];
//
//struct ThreadParameter {
//	int a;
//	int b;
//	char user[10];
//	char name[10];
//};
//
//DWORD WINAPI ThreadFunction(LPVOID pParam) {
//	ThreadParameter *tp = (ThreadParameter *)pParam; //强制转换参数
//	char user[10];
//	char pass[10];
//	strcpy_s(user, tp->user);
//	strcpy_s(pass, tp->name);
//	printf("User = %s pass = %s \r\n", user, pass);
//	Sleep(1000);
//
//	tp->b = tp->a + 100;
//	return 0;
//}
//
//DWORD WINAPI ThreadFunction1(LPVOID pParam) {
//	while (true) {
//		if (sum < 100) {
//			WaitForSingleObject(hThread[1], INFINITE);
//			sum++;
//			cout << "放入第" << sum << "瓶牛奶" << endl;
//		}
//	}
//}
//
//DWORD WINAPI ThreadFunction2(LPVOID pParam) {
//	while (true) {
//		if (sum > 0) {
//			WaitForSingleObject(hThread[0], INFINITE);
//			sum--;
//			cout << "拿走第" << sum << "瓶牛奶" << endl;
//		}
//	}
//}
//
//int main(int argc, char* argv[])
//{
//	double start, end, cost;
//	start = clock();
//
//	ThreadParameter tp1;
//	strcpy_s(tp1.user, "qwe");
//	strcpy_s(tp1.name, "12345");
//	tp1.a = 1;
//	ThreadParameter tp2;
//	strcpy_s(tp2.user, "qwe2");
//	strcpy_s(tp2.name, "a12345");
//	tp2.a = 2;
//	ThreadParameter tp3;
//	strcpy_s(tp3.user, "qwe3");
//	strcpy_s(tp3.name, "b12345");
//	tp3.a = 3;
//
//	/*HANDLE hThread[2];*/
//	hThread[0] = CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)ThreadFunction1, &tp1, 0, NULL);
//	hThread[1] = CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)ThreadFunction2, &tp2, 0, NULL);
//	//hThread[2] = CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)ThreadFunction, &tp3, 0, NULL);
//
//	end = clock();
//	cost = (end - start) / 1000;
//	printf("cost: %.2fs \n", cost);
//
//	WaitForMultipleObjects(3, hThread, TRUE, INFINITE);
//	for (int i = 0; i < 3; i++) {
//		CloseHandle(hThread[i]); //关闭句柄
//	}
//	end = clock();
//	cost = (end - start) / 1000;
//	printf("cost: %.2fs \n", cost);
//
//	printf("%d  %d  %d\n", tp1.b, tp2.b, tp3.b);
//
//	system("pause");
//	return 0;
//}
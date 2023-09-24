//#include <iostream>
//#include <iomanip>
//
//using namespace std;
//
//int main()
//{
//	int arr[] = { 45, 21, 64, 88, 43, 66, 17, 37 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	cout << "ÅÅÐòÇ°£º" << endl;
//	for (int i = 0; i < len; i++) {
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//	// ¿ªÊ¼ÅÅÐò
//	for (int i = 0; i < len - 1; i++) {
//		for (int j = 0; j < len - i - 1; j++) {
//			if (arr[j] > arr[j + 1]) {
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	for (int i = 0; i < len; i++) {
//		cout << arr[i] << " ";
//	}
//
//}
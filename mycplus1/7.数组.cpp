//#include <iostream>
//#include <string>
//#include <string.h>
//
//using namespace std;
//
//int main() {
//
//	// ����Ķ���
//	//1���ȶ����ֵ
//	int a[5];
//	a[0] = 000;
//	a[1] = 111;
//	a[2] = 222;
//	a[3] = 333;
//	int length = 0;
//	cout << "����ĳ��ȣ�" << (length = sizeof(a) / sizeof(a[0])) << endl; // ��ȡ���鳤��
//	for (int i = 0; i < length; i++){
//		cout << "a[" << i << "]��" << a[i] << endl;
//	}
//	cout << endl;
//
//	//2������ʱ��ֵ
//	// ʹ�ø÷�ʽ����ʱδ����ʼ������ᱻ��ʼ��Ϊ0
//	int b[5] = {1,2};
//	for (int i = 0; i < 5; i++){
//		cout << "b[" << i << "]��" << b[i] << endl;;
//	}
//	cout << endl;
//
//	//3������ʱ��ָ�����鳤�ȣ�ֱ�Ӹ�ֵ
//	int c[] = { 1, 2, 3, 4, 5 };
//	for (int i = 0; i < 5; i++){
//		cout << "c[" << i << "]��" << c[i] << endl;
//	}
//
//	cout << (long long)c << endl;
//	cout << &c[1] << endl;
//	int *p = c;
//	cout << p << endl;
//	cout << *(p + 4) << endl;
//	cout << *(c + 4) << endl;
//
//
//
//	//system("pause");
//	return 0;
//
//}
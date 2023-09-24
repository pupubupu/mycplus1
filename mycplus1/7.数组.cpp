//#include <iostream>
//#include <string>
//#include <string.h>
//
//using namespace std;
//
//int main() {
//
//	// 数组的定义
//	//1、先定义后赋值
//	int a[5];
//	a[0] = 000;
//	a[1] = 111;
//	a[2] = 222;
//	a[3] = 333;
//	int length = 0;
//	cout << "数组的长度：" << (length = sizeof(a) / sizeof(a[0])) << endl; // 获取数组长度
//	for (int i = 0; i < length; i++){
//		cout << "a[" << i << "]：" << a[i] << endl;
//	}
//	cout << endl;
//
//	//2、定义时赋值
//	// 使用该方式定义时未被初始化的项会被初始化为0
//	int b[5] = {1,2};
//	for (int i = 0; i < 5; i++){
//		cout << "b[" << i << "]：" << b[i] << endl;;
//	}
//	cout << endl;
//
//	//3、定义时不指明数组长度，直接赋值
//	int c[] = { 1, 2, 3, 4, 5 };
//	for (int i = 0; i < 5; i++){
//		cout << "c[" << i << "]：" << c[i] << endl;
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
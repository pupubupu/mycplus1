//#include <iostream>
// 
//using namespace std;
//
////函数模板
//template<typename T> //声明一个模板，告诉编译器后面代码中紧跟着的T不要出错，T是一个通用数据类型
//void swap(T &a, T &b, int) {
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//template<class T>
//T sum(T a, T b) {
//	return *a + *b;
//}
//
//int main(void)
//{
//	int a = 10;
//	int b = 20;
//	//两种方式使用函数模板
//	//1、利用自动类型推导
//	swap(a, b, 1);
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//
//	double c = 1.1;
//	double d = 2.2;
//
//	swap(c, d, 1);
//	cout << "c = " << c << endl;
//	cout << "d = " << d << endl;
//
//	//2、显式指定类型
//	swap<double>(c, d, 1);
//	cout << "c = " << c << endl;
//	cout << "d = " << d << endl;
//
//	cout << sum<double>(c, d) << endl;
//
//
//
//	return 0;
//}
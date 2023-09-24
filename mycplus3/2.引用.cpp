//#include <iostream>
//
//using namespace std;
//
//void swap(int &x, int &y); //使用引用实现交换两数
//
//int &fun1(); // 将引用作为返回值进行返回
//
//int &fun2();
//
//int main()
//{
//	/*1、使用引用实现交换两数*/
//	int a = 10;
//	int b = 20;
//	swap(a, b);
//	cout << "a = " << a << "，" << "b = " << b << endl;
//
//	/*2、将引用作为返回值进行返回*/
//	/*错误示范：返回局部变量引用*/
//	int &n = fun2();
//	cout << "n = " << n << endl;
//
//	/*正确示范：返回静态变量引用*/
//	int &m = fun1();
//	cout << "m = " << m << endl;
//	cout << "m = " << m << endl;
//	cout << "m = " << m << endl;
//	fun1() = 200;
//	/*
//		fun1() = 200;
//	等价于
//		int &x = fun1();
//		x = 200;
//	这里fun1()返回的就是静态变量m的别名，对别名的修改，就是对原变量的修改
//	*/
//	cout << "m = " << m << endl;
//
//	return 0;
//}
//
//
//void swap(int &x, int &y) {
//	int temp = x;
//	x = y;
//	y = temp;
//}
//
//int &fun1() {
//	static int m = 100;
//	int &x = m;
//	return x;
//}
//
//int &fun2() {
//	int n = 100;
//	int &y = n;
//	return y;
//}
//

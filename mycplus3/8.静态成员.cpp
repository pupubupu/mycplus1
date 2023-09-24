//#include<iostream>
//#include <string>
//
//using namespace std;
//
//class Person {
//public:
//	// 静态成员变量类内声名，类外定义
//	// 所有对象共用一份静态数据
//	// 静态成员编译阶段就分配内存
//	static int m_A;
//
//	// 普通成员变量
//	string s = "123";
//
//	static void fun1();
//
//private:
//	static int m_B; // 静态成员变量也是有访问权限的
//
//	static void fun2();
//};
//
//int Person::m_A = 0; // 静态成员变量类外定义
//int Person::m_B = 1;
//
//void Person::fun1() {
//	cout << "静态成员函数" << endl;
//	//cout << s << endl;  //无法调用非静态成员变量
//}
//
//void Person::fun2() {
//	cout << "私有静态成员函数" << endl;
//}
//
//int main()
//{
//	Person p;
//	cout << p.m_A << endl; // 通过对象访问静态变量
//	cout << Person::m_A << endl; // 通过类名访问静态变量
//	
//	//cout << Person::m_B << endl; // 私有权限访问不到
//
//	cout << p.s << endl;
//
//	p.fun1();
//	//p.fun2();   //私有权限不可访问
//
//	return 0;
//}
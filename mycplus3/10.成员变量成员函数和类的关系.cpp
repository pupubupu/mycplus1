//#include <iostream>
//
//using namespace std;
//
//// 空对象
//class Person {
//
//};
//
////含有一个成员变量的类
//class Vehical {
//public:
//	char m_c[13];
//
//};
//
////含有非静态成员函数和静态成员函数的类
//class Teacher {
//public:
//	void fun1() {
//
//	}
//	static void fun2() {
//
//	}
//};
//
//int main()
//{
//	Person p;
//	Vehical v;
//	Teacher t;
//	// 空对象占用内存空间为：1
//	// C++编译器会给每个空对象也分配一个字节内存，是为了区分不同空对象占用内存的位置
//	// 每个空对象也应该有一个独一无二的内存地址
//	cout << sizeof(p) << endl; // 占1个字节
//	
//	// 非空对象的占用字节是类中非静态成员变量的大小
//	cout << sizeof(v) << endl; // 占13个字节
//
//	// 非静态成员函数和静态成员函数不属于对象,不占用字节
//	cout << sizeof(t) << endl; // 占1个字节
//	return 0;
//}
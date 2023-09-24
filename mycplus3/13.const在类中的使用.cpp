//#include<iostream>
//#include <string>
//
//using namespace std;
//
//class Person {
//public:
//	int m_age;
//	char m_gender;
//	static double m_balance;
//	mutable string m_name; // 特殊变量，表明在常函数中，其值也可以修改
//
//	//定义常函数
//	//在成员函数后面加const，修饰的是this指向，让指针指向的值也不可以修改
//	//const Person * const this;
//	// 可以理解为，这个const修饰的是this指针，this指针本质上是一个指针常量
//	// 指针指向不能发生修改
//	void showPerson() const {
//		//this->m_age = 24;  //异常操作，在常函数中不能修改成员变量
//		m_balance = 200; //在常函数中可以修改静态成员变量
//
//		this->m_name = "Jerry";
//		//fixedPerson(); //无法调用非静态成员函数
//		changePerson();  //可以调用静态成员函数
//	}
//
//	void fixedPerson() {
//
//	}
//	static void changePerson() {
//
//	}
//};
//
//double Person::m_balance = 100;
//
//int main()
//{
//	Person p1;
//	p1.m_age = 18;
//	p1.m_gender = 's';
//	cout << p1.m_age << endl;
//	cout << p1.m_gender << endl;
//	cout << p1.m_balance << endl;
//	p1.showPerson();
//	cout << p1.m_balance << endl;
//
//	const Person p2;
//	//p2.m_age = 33;  //不能修改非静态成员变量
//	p2.m_balance = 300; //可以修改静态成员变量
//	p2.m_name = "梨花"; //可以修改mutable
//	//p2.m_age = 28;   //常对象不能修改成员变量
//	//p2.fixedPerson(); // 常对象不能使用非静态成员函数
//	p2.changePerson(); //可以使用静态成员函数
//	return 0;
//}
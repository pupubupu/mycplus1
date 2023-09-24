//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Person {
//private:
//	string name;
//	int age;
//
//public:
//	Person() {
//
//	}
//	void operator()(string s) {
//		cout << s << endl;
//	}
//	//()运算符重载
//	int operator()(int num1, int num2) {
//		return num1 + num2;
//	}
//
//};
//
//int main()
//{
//	Person p;
//	p.operator()("嗨嗨嗨");  //调用()运算符重载函数
//	cout << "2 + 3 = " << p(2, 3) << endl; //简写形式
//
//	Person()("这是匿名函数调用运算符重载函数"); //这是用匿名函数调用重载函数
//	return 0;
//}
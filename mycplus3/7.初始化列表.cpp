//#include <iostream>
//#include <string>
//using namespace std;
//
//// 枚举（性别）
//enum gender {
//	FEMALE,
//	MALE
//};
//
//class Person {
//public:
//	int a;
//	int b;
//	int c;
//	
//	// 初始化列表
//	Person(int a, int b,int c): a(a), b(b), c(c) {
//
//	}
//};
//
//class Student {
//private:
//	string name;
//	gender gender;
//	int age;
//
//public:
//	Student(string name, enum gender gender, int age): name(name), gender(gender),age(age) {
//
//	};
//
//	string fun1();
//};
//
//string Student::fun1() {
//	return Student::name;
//}
//
//int main()
//{
//	Person p1(1, 2, 3);
//	cout << p1.a << " " << p1.b << " " << p1.c << endl;
//
//
//	Student s1("小红", FEMALE, 13);
//	cout << s1.fun1() << endl;
//	return 0;
//}
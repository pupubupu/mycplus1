//#include<iostream>
//#include<string>
//
//using namespace std;
//
//enum sex {
//	male = 0,
//	female = 1
//};
//
////定义一个Person类
//class Person {
//public:
//	string name;
//	int age;
//	sex gender;
//
//	Person(){}
//
//	Person(string name, int age, sex gender):name(name), age(age), gender(gender) {
//
//	}
//
//	Person(const Person &p) {
//		//cout << "拷贝构造函数被调用了" << endl;
//		this->name = p.name;
//		this->age = p.age;
//		this->gender = p.gender;
//	}
//
//	//类内+函数重载
//	Person operator+(const Person &p) {
//		Person temp;
//		temp = *this;
//		temp.age = this->age + p.age;
//		return temp;
//	}
//
//	//类内<<函数重载
//	ostream & operator<<(ostream &cout) {
//		cout << "姓名：" << this->name << "  ";
//		cout << "年龄：" << this->age << "  ";
//		cout << "性别：" << (this->gender ? "女" : "男");
//		return cout;
//	}
//
//	//~Person() {
//	//	cout << "析构函数被调用了" << endl;
//	//}
//};
//
//ostream & operator<<(ostream &cout, Person p) {
//	return p << cout;
//}
//
//////全局+函数重载
////Person operator+(const Person &p1,const Person &p2) {
////	Person temp;
////	temp = p1;
////	temp.age = p1.age + p2.age;
////	return temp;
////}
////
//////全局<<符号重载
////ostream & operator<<(ostream &cout,const Person &p) {
////	cout << "姓名：" << p.name << "  ";
////	cout << "年龄：" << p.age << "  ";
////	cout << "性别：" << (p.gender?"女":"男");
////	return cout;
////}
//
//
//
//int main()
//{
//	Person p1("小红", 15, female);
//	cout << p1.gender << endl;
//
//	Person p2;
//	p2 = p1;  //这里测试是否有默认赋值函数，测试结果：有——但是应该是浅拷贝
//	cout << p2.name << endl;
//
//	cout << (p1 + p2).age << endl;  //这里测试重载运算符+函数，测试成功
//	cout << "析构函数被调用后" << endl;
//
//	//(p1 + p2) + (p1 + p2);
//	cout << (p1 + p2 + p1).age << endl; //这里测试是否可以多值相加，测试成功
//
//	//Person p3 = p1 + p2;
//	cout << p1 << endl << (p1 + p2) << endl; //这里测试重载运算符<<函数，测试成功
//	return 0;
//}
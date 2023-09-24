//#include<iostream>
//
//using namespace std;
//
////空指针调用成员函数
//class Person {
//private:
//	int m_Age;
//public:
//	Person() {
//		m_Age = 199;
//	}
//	void showClassName() {
//		cout << "this is Person class" << endl;
//	}
//	void showPersonAge() {
//		//保证程序健壮性
//		if (this == NULL) {
//			return;
//		}
//		cout << "age = " << m_Age << endl;
//	}
//
//	//void fun1(Person p);
//};
//
////void Person::fun1(Person p) {
////	cout << p.m_Age << endl;
////}
//
//int main()
//{
//	Person *p = NULL;
//	p->showClassName();
//	p->showPersonAge();
//
//	//Person q;
//	//q.fun1(q);
//	return 0;
//}
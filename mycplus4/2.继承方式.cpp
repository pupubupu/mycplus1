//#include <iostream>
//using namespace std;
//
//class Person {
//public:
//	int m_a;
//
//	void print();
//	void fun1();
//
//	Person() {
//
//	}
//	~Person() {
//
//	}
//protected:
//	int m_b;
//private:
//	int m_c;
//};
//class Police : public Person {
//private:
//	int m_d;
//
//public:
//	void print();
//	void fun1();
//
//	Police() {
//
//	}
//	~Police() {
//
//	}
//};
//
//void Person::print() {
//	fun1();
//}
//
//void Police::print() {
//	fun1();
//}
//
//void Person::fun1() {
//	cout << "这是Person" << endl;
//}
//
//void Police::fun1() {
//	cout << "这是Police" << endl;
//}
//int main()
//{
//
//	Police p;
//
//	cout << sizeof(p) << endl;
//
//	/*Person *q = new Police;
//	q->print();*/
//
//	return 0;
//}
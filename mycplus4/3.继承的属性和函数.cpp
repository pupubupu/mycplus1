//#include<iostream>
//
//using namespace std;
//
//class Father{
//public:
//	int m_a;
//	static int m_b;
//	Father() {
//
//	}
//
//	void print() {
//		cout << "father" << endl;
//	}
//};
//int Father::m_b = 66;
//
//class Son: public Father {
//public:
//	int m_a;
//	Son() {
//
//	}
//
//	void print() {
//		cout << "Son" << endl;
//	}
//
//	void fun() {
//		Father::m_a = 1;
//	}
//};
//
//class GrandSon : public Son {
//public:
//	int m_a;
//
//	GrandSon() {
//
//	}
//	void print() {
//		cout << "GrandSon" << endl;
//	}
//	void fun() {
//		m_a = 1;
//		Son::m_a = 1;
//		Father::m_a = 1;
//	}
//};
//
//int main()
//{
//	/*Son s1;
//	Son s2 = {};
//	s1.fun();
//	cout << s1.Father::m_a << endl;
//	cout << s2.m_a << endl;
//
//	GrandSon grandSon;
//	grandSon.Son::Father::m_a;*/
//
//	GrandSon gs = {};
//	cout << gs.m_b << endl;
//	cout << sizeof(GrandSon) << endl;
//
//	return 0;
//}
//#include <iostream>
//
//using namespace std;
//
//class Person {
//	friend bool operator==(Person &p1, Person &p2);
//	friend bool operator!=(Person &p1, Person &p2);
//private: 
//	string m_name;
//	int m_age;
//
//public:
//	Person(string name, int age) {
//		m_name = name;
//		m_age = age;
//	}
//	////����==���������
//	//bool operator==(Person &p) {
//	//	if (this->m_name == p.m_name && this->m_age == p.m_age) {
//	//		return true;
//	//	}
//	//	return false;
//	//}
//	////����!=���������
//	//bool operator!=(Person &p) {
//	//	if (this->m_name == p.m_name && this->m_age == p.m_age) {
//	//		return false;
//	//	}
//	//	return true;
//	//}
//};
////����==���������
//bool operator==(Person &p1,Person &p2) {
//	if (p1.m_name == p2.m_name && p1.m_age == p2.m_age) {
//		return true;
//	}
//	return false;
//}
////����!=���������
//bool operator!=(Person &p1, Person &p2) {
//	if (p1.m_name == p2.m_name && p1.m_age == p2.m_age) {
//		return false;
//	}
//	return true;
//}
//
//int main()
//{
//	Person p1("С��", 17);
//	Person p2("С��", 17);
//	Person p3("С��", 18);
//
//	cout << (p1 != p2) << endl;
//	cout << (p1 != p3) << endl;
//	return 0;
//}
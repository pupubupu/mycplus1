//#include<iostream>
//#include<fstream>
//#include <string>
//using namespace std;
//
//class Person {
//public:
//	string m_name;
//	int m_age;
//public:
//	Person() {
//
//	}
//	Person(string name, int age):m_name(name),m_age(age) {
//
//	}
//};
//
//int main()
//{
//	ifstream ifs;
//
//	ifs.open("person.txt", ios::in | ios::binary);
//
//	if (!ifs.is_open()) {
//		return 0;
//	}
//	//char buf[1024] = {0};
//	//ifs.read(buf, sizeof(Person));
//
//	Person *p = new Person;
//	Person *q = new Person;
//	//memcpy(p, buf, sizeof(Person));
//	ifs.read((char *)p, sizeof(Person)).read((char *)q, sizeof(Person));
//
//	cout << p->m_name << " " << p->m_age << endl;
//	cout << q->m_name << " " << q->m_age << endl;
//
//	ifs.close();
//	return 0;
//}
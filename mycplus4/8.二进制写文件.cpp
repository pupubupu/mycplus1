//#include <iostream>
//#include<fstream>
//#include<string>
//using namespace std;
//
//class Person {
//private:
//	string m_name;
//	int m_age;
//public:
//	Person(string name, int age):m_name(name),m_age(age) {
//
//	}
//};
//
//int main()
//{
//	//����ͷ�ļ�
//
//	//����������
//	ofstream ofs;
//
//	//���ļ�
//	ofs.open("person.txt", ios::out | ios::binary);
//	if (!ofs.is_open()) {
//		return 0;
//	}
//
//	//д�ļ�
//	Person p = { "����",18 };
//	Person q = { "����",81 };
//	ofs.write((const char *)&p, sizeof(Person));
//	ofs.write((const char *)&q, sizeof(Person));
//
//	ofs.close();
//
//	return 0;
//}
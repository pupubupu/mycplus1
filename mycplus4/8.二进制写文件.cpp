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
//	//包含头文件
//
//	//创建流对象
//	ofstream ofs;
//
//	//打开文件
//	ofs.open("person.txt", ios::out | ios::binary);
//	if (!ofs.is_open()) {
//		return 0;
//	}
//
//	//写文件
//	Person p = { "张三",18 };
//	Person q = { "李四",81 };
//	ofs.write((const char *)&p, sizeof(Person));
//	ofs.write((const char *)&q, sizeof(Person));
//
//	ofs.close();
//
//	return 0;
//}
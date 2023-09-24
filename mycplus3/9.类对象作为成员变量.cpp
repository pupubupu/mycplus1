//#include <iostream>
//#include <string>
//using namespace std;
//
//class Phone {
//private:
//	// 姓名
//	string m_name;
//
//public:
//	Phone(string name):m_name(name) {
//		cout << "Phone的构造函数被调用了" << endl;
//	}
//
//	~Phone() {
//		cout << "phone的析构函数被调用了" << endl;
//	}
//
//	string getName() {
//		return m_name;
//	}
//};
//
//class Person {
//private:
//	// 姓名
//	string m_name;
//	// 手机
//	Phone m_pName;
//
//public:
//	//这里使用初始化变量m_pName(pName)等价于Phone m_Phone = Pname，
//	//转换为隐式构造函数的调用
//	Person(string name, string pName):m_name(name), m_pName(pName) {
//		cout << "Person的构造函数被调用了" << endl;
//	}
//
//	~Person() {
//		cout << "Person的析构函数被调用了" << endl;
//	}
//
//	string getName() {
//		return m_name;
//	}
//
//	Phone getPhone() {
//		return m_pName;
//	}
//
//};
//
////结论：当其他类对象作为本类成员，构造时候先构造类对象，再构造自身，析构的顺序与构造相反
//int main()
//{
//	Person p1("张三", "华为Mate14冷风蓝");
//	cout << p1.getName() << endl;
//	
//	return 0;
//}
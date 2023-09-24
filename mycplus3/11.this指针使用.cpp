//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Person {
//public:
//	string m_name;
//	int m_age;
//	static int m_i;
//public:
//
//	Person(string name, int age) {
//		this->m_name = name; //通过this来调用对象身上的成员变量
//		this->m_age = age;
//
//		cout << "有参构造调用" << endl;
//	}
//
//	Person(const Person &p) {
//		cout << "拷贝调用" << endl;
//		this->m_name = p.m_name; //通过this来调用对象身上的成员变量
//		this->m_age = p.m_age;
//	}
//
//	/*Person(Person p) {     //不能这样重写构造函数，类中本身含有拷贝构造，会产生歧义
//		cout << "拷贝调用" << endl;
//	}*/
//
//	~Person() {
//		cout << "析构调用" << endl;
//	}
//
//	Person* fun1() { // 返回该对象的指针
//		return this;
//	}
//
//	Person fun2() { // 返回该对象的复制体
//		return *this;
//	}
//
//	Person& fun3() { // 返回该对象的引用
//		return *this;
//	}
//
//	// 设计一个类内方法，它可以相加另一个（Person）对象的年龄
//	Person& addAge(const Person &p) { //因为要实现链式调用，所以返回引用
//		this->m_age += p.m_age;
//		return *this; 
//	}
//};
//int main()
//{
//	Person p1("张三", 12);
//	Person *zhansan_point = p1.fun1(); //返回了p1的指针
//	cout << zhansan_point->m_age << endl;
//	
//	Person p2 = p1.fun2(); //相当于使用了拷贝调用，p1和p2是两个对象
//	cout << p2.m_name << endl;
//
//	Person p3 = Person("李四", 20);
//	//这里是链式调用
//	p3.addAge(p1).addAge(p1).addAge(p1);
//	cout << "在加过三次张三的年龄后，李四的年龄为：" << p3.m_age << endl;  // 56
//
//	//总结：this指针两个作用：
//	// 1、在类内使用this指针，可以访问成员变量和成员函数
//	// 2、可以返回该对象的指针，引用，复制体等
//	return 0;
//}
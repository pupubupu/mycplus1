//#include <iostream>
//#include <string>
//using namespace std;
//
//
//class Police {
//private:
//	string name;
//
//public:
//	Police() {
//		cout << "Police无参构造方法" << endl;
//	}
//
//	Police(const Police &p) {
//		cout << "Police拷贝构造方法" << endl;
//	}
//
//	string getName() const {
//		return this->name;
//	}
//
//};
//
//class Person {
//private:
//	string name;
//	int age;
//
//public:
//	Person() {
//		cout << "这是默认构造函数" << endl;
//	}
//
//	Person(string name) {
//		this->name = name;
//		cout << "这是带参数的构造函数" << endl;
//	}
//
//	Person(string name, int age) :name(name), age(age) {
//		cout << "这是带两个参数的构造函数" << endl;
//	}
//
//	Person(const Person &p) {
//		this->name = p.name;
//		cout << "这是拷贝构造函数" << endl;
//	}
//
//	Person(const Police &p) {
//		this->name = p.getName();
//	}
//
//	Person(const Person *p) {
//		this->name = p->name;
//	}
//
//	string getName() {
//		return this->name;
//	}
//
//	void setName(string name) {
//		this->name = name;
//	}
//
//	~Person() {
//		cout << "这是析构函数" << endl;
//	}
//};
//
//
//
//int main()
//{
//	//Person p1("小明");
//	//Person p2("小李");
//	//p1 = p2;
//	//cout << p1.getName() << endl;
//	//cout << p2.getName() << endl;
//
//
//	//Person(p3); //  匿名构造函数  Person(p3) === Person p3;
//	//p3.setName("小红");
//	//cout << p3.getName() << endl;
//
//	//Person p4(p3);
//	//cout << p4.getName() << endl;
//
//	//p4.setName("小兰");
//	//cout << p3.getName() << endl;
//	//cout << p4.getName() << endl;
//
//
//	//调用
//	//1、括号法
//	Person p1;         // 调用默认构造函数
//	Person p2("小明"); // 调用带参构造函数
//	Person p3(p2);     // 调用拷贝构造函数
//
//	//注意：调用默认构造函数的时候，不要加()
//	//Person p1(); 该种写法是错误的，编译器会认为这是一个函数的定义
//
//	//2、显示法
//	Person p4 = Person();
//	Person p5 = Person("小红");
//	Person p6 = Person(p5);
//
//	// Person(10); 
//	// 匿名对象  特点：当前行执行结束后，系统会立即回收掉匿名对象，
//	// 也就是说，它会创建一个对象，但由于没有变量管理，系统会立刻回收，刚创建就释放
//
//	//注意：Person(p5);  
//	//不要单独写这一行代码，因为Person(p5) === Person p5，即又定义了一次p5，
//	//会触发重定义的错误，编译器会报错
//	//当然，Person(p7)是正确的，前提是p7这个变量没有被声名使用过。
//
//	//3、隐式转换法
//	string s = "小天";
//	Person p7 = s; // 相当于  Person p7 = 	Person(10);   调用带参构造函数
//	Person p8 = p7; // 拷贝构造                           调用拷贝构造函数
//
//	Person p9 = {s,10};   // 调用多参数构造函数
//
//	return 0;
//
//}
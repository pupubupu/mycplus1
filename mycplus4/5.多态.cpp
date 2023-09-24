//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Animal {
//public:
//	virtual void speak() {
//		cout << "动物在叫" << endl;
//	}
//
//	virtual void speak(string say) {
//		cout << "雪豹闭嘴" << endl;
//	}
//};
//
//class Cat : public Animal {
//public:
//	void speak()  {
//		cout << "小猫在叫" << endl;
//	}
//
//	void say(string say) {
//		cout << say << endl;
//	}
//
//	virtual ~Cat() {
//		cout << "普信猫析构函数" << endl;
//	}
//
//};
//
//class BosiCat : public Cat {
//public:
//	void speak() {
//		cout << "波斯猫在叫" << endl;
//	}
//
//	~BosiCat() {
//		cout << "波斯猫析构函数" << endl;
//	}
//};
//
//int main()
//{
//	/**
//	*
//	* （动态）多态要满足三个条件
//	* 1、有继承关系
//	* 2、子类重写父类的虚函数
//	* 3、使用父类指针或引用指向子类对象
//	* 
//	* 虚函数：就像java里的接口。它的本质是函数在编译阶段不会确定地址（函数体），
//	* 在运行时传入的子类对象重写函数，父类中的函数指针指向子类的函数实现，就实现多态
//	*/
//
//	Animal *animal = new Cat;
//	animal->speak(); // "小猫在叫"
//	animal->speak("喵喵喵");
//
//	Cat *cat = new BosiCat;
//	cat->speak();
//
//	delete cat;
//
//	try
//	{
//
//	}
//	catch (const std::exception&)
//	{
//
//	}
//	
//	return 0;
//}
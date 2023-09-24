//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Animal {
//public:
//	int m_age;
//	int m_gender;
//	//string m_name;
//	
//	Animal() {
//
//	}
//};
//
////利用虚继承  解决菱形继承的问题
////继承之前 加上关键字virtual 变为虚继承
////Animal类称为 虚基类
////羊类
//class Sheep :virtual public Animal{
//public:
//	Sheep() {
//
//	}
//};
//
////驼类
//class Tuo :virtual public Animal{
//public:
//	Tuo() {
//
//	}
//};
//
////草泥马类
////使用关键字virtual进行虚继承后，发生了如下变化：
////羊类和驼类从动物类继承下来的m_age只有一份了
////具体如何实现的呢？其实是利用了指针
////从羊类和驼类继承了一个名为vbptr（virtual basic pointer）的指针
////这个指针又会指向一个名为vbtable的虚基类表
////在这个表中记录了一个偏移量，根据该偏移量可以找到Animal类中的唯一数据
//class SheepTuo : public Sheep, public Tuo {
//public:
//	SheepTuo() {
//
//	}
//};
//
//int main()
//{
//	SheepTuo sheeptuo;
//	cout << sizeof(sheeptuo) << endl;
//	
//
//	cout << &(sheeptuo.Sheep::m_age) << endl;
//	cout << &(sheeptuo.Tuo::m_age) << endl;
//
//
//
//	return 0;
//}
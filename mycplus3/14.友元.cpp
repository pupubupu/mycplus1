//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Person {
//public:
//	string name;
//	int age;
//	bool gender;
//
//	void operator=(Person &p){
//		this->name = "小红";
//		this->age = p.age;
//		this->gender = p.gender;
//	}
//public:
//	Person() {
//
//	}
//	Person(string name, int age, bool gender):name(name), age(age), gender(gender) {
//
//	}
//
//	Person(const Person& p) {
//		cout << "拷贝被调用了" << endl;
//	}
//};
//
//class Building;
//class GoodGay {
//private:
//	Building *building;
//
//public:
//	GoodGay();
//
//	//void visit() { 
//	//	//如果想让这个函数访问Building中的私有变量，那么，就需要在类外定义该函数
//	//	//并且，让该函数做Building的友元成员函数
//	//	//直接在类中定义该函数是错误的
//	//	cout << "好基友正在访问" << building->bedRoom << endl; 
//	//}
//	void visit();
//};
//
//class Building {
//
//	friend void GoodGay::visit();
//	friend void visit(Building &building);
//
//private:
//	string settingRoom;
//	string bedRoom;
//
//public:
//	Building() {
//		settingRoom = "客厅";
//		bedRoom = "卧室";
//	}
//};
//
//GoodGay::GoodGay() {
//	building = new Building;
//}
//
////成员函数做友元
//void GoodGay::visit() {
//	cout << "好基友正在访问" << building->bedRoom << endl;
//}
//
////全局函数做友元
//void visit(Building& building) {
//	cout << "好基友正在访问" << building.bedRoom << endl;
//}
//
//int main()
//{
//	Person p1 = { "小李", 19, false };
//	Person p2;
//	cout << p1.gender << endl;
//	p2 = p1;
//	cout << p2.name << endl;
//
//	GoodGay goodGay;
//	goodGay.visit();
//	
//	Building building;
//	visit(building);
//	return 0;
//}
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
//		this->name = "С��";
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
//		cout << "������������" << endl;
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
//	//	//������������������Building�е�˽�б�������ô������Ҫ�����ⶨ��ú���
//	//	//���ң��øú�����Building����Ԫ��Ա����
//	//	//ֱ�������ж���ú����Ǵ����
//	//	cout << "�û������ڷ���" << building->bedRoom << endl; 
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
//		settingRoom = "����";
//		bedRoom = "����";
//	}
//};
//
//GoodGay::GoodGay() {
//	building = new Building;
//}
//
////��Ա��������Ԫ
//void GoodGay::visit() {
//	cout << "�û������ڷ���" << building->bedRoom << endl;
//}
//
////ȫ�ֺ�������Ԫ
//void visit(Building& building) {
//	cout << "�û������ڷ���" << building.bedRoom << endl;
//}
//
//int main()
//{
//	Person p1 = { "С��", 19, false };
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
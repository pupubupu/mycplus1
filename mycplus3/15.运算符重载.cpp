//#include<iostream>
//#include<string>
//
//using namespace std;
//
//enum sex {
//	male = 0,
//	female = 1
//};
//
////����һ��Person��
//class Person {
//public:
//	string name;
//	int age;
//	sex gender;
//
//	Person(){}
//
//	Person(string name, int age, sex gender):name(name), age(age), gender(gender) {
//
//	}
//
//	Person(const Person &p) {
//		//cout << "�������캯����������" << endl;
//		this->name = p.name;
//		this->age = p.age;
//		this->gender = p.gender;
//	}
//
//	//����+��������
//	Person operator+(const Person &p) {
//		Person temp;
//		temp = *this;
//		temp.age = this->age + p.age;
//		return temp;
//	}
//
//	//����<<��������
//	ostream & operator<<(ostream &cout) {
//		cout << "������" << this->name << "  ";
//		cout << "���䣺" << this->age << "  ";
//		cout << "�Ա�" << (this->gender ? "Ů" : "��");
//		return cout;
//	}
//
//	//~Person() {
//	//	cout << "����������������" << endl;
//	//}
//};
//
//ostream & operator<<(ostream &cout, Person p) {
//	return p << cout;
//}
//
//////ȫ��+��������
////Person operator+(const Person &p1,const Person &p2) {
////	Person temp;
////	temp = p1;
////	temp.age = p1.age + p2.age;
////	return temp;
////}
////
//////ȫ��<<��������
////ostream & operator<<(ostream &cout,const Person &p) {
////	cout << "������" << p.name << "  ";
////	cout << "���䣺" << p.age << "  ";
////	cout << "�Ա�" << (p.gender?"Ů":"��");
////	return cout;
////}
//
//
//
//int main()
//{
//	Person p1("С��", 15, female);
//	cout << p1.gender << endl;
//
//	Person p2;
//	p2 = p1;  //��������Ƿ���Ĭ�ϸ�ֵ���������Խ�����С�������Ӧ����ǳ����
//	cout << p2.name << endl;
//
//	cout << (p1 + p2).age << endl;  //����������������+���������Գɹ�
//	cout << "�������������ú�" << endl;
//
//	//(p1 + p2) + (p1 + p2);
//	cout << (p1 + p2 + p1).age << endl; //��������Ƿ���Զ�ֵ��ӣ����Գɹ�
//
//	//Person p3 = p1 + p2;
//	cout << p1 << endl << (p1 + p2) << endl; //����������������<<���������Գɹ�
//	return 0;
//}
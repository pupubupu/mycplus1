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
//		cout << "Police�޲ι��췽��" << endl;
//	}
//
//	Police(const Police &p) {
//		cout << "Police�������췽��" << endl;
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
//		cout << "����Ĭ�Ϲ��캯��" << endl;
//	}
//
//	Person(string name) {
//		this->name = name;
//		cout << "���Ǵ������Ĺ��캯��" << endl;
//	}
//
//	Person(string name, int age) :name(name), age(age) {
//		cout << "���Ǵ����������Ĺ��캯��" << endl;
//	}
//
//	Person(const Person &p) {
//		this->name = p.name;
//		cout << "���ǿ������캯��" << endl;
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
//		cout << "������������" << endl;
//	}
//};
//
//
//
//int main()
//{
//	//Person p1("С��");
//	//Person p2("С��");
//	//p1 = p2;
//	//cout << p1.getName() << endl;
//	//cout << p2.getName() << endl;
//
//
//	//Person(p3); //  �������캯��  Person(p3) === Person p3;
//	//p3.setName("С��");
//	//cout << p3.getName() << endl;
//
//	//Person p4(p3);
//	//cout << p4.getName() << endl;
//
//	//p4.setName("С��");
//	//cout << p3.getName() << endl;
//	//cout << p4.getName() << endl;
//
//
//	//����
//	//1�����ŷ�
//	Person p1;         // ����Ĭ�Ϲ��캯��
//	Person p2("С��"); // ���ô��ι��캯��
//	Person p3(p2);     // ���ÿ������캯��
//
//	//ע�⣺����Ĭ�Ϲ��캯����ʱ�򣬲�Ҫ��()
//	//Person p1(); ����д���Ǵ���ģ�����������Ϊ����һ�������Ķ���
//
//	//2����ʾ��
//	Person p4 = Person();
//	Person p5 = Person("С��");
//	Person p6 = Person(p5);
//
//	// Person(10); 
//	// ��������  �ص㣺��ǰ��ִ�н�����ϵͳ���������յ���������
//	// Ҳ����˵�����ᴴ��һ�����󣬵�����û�б�������ϵͳ�����̻��գ��մ������ͷ�
//
//	//ע�⣺Person(p5);  
//	//��Ҫ����д��һ�д��룬��ΪPerson(p5) === Person p5�����ֶ�����һ��p5��
//	//�ᴥ���ض���Ĵ��󣬱������ᱨ��
//	//��Ȼ��Person(p7)����ȷ�ģ�ǰ����p7�������û�б�����ʹ�ù���
//
//	//3����ʽת����
//	string s = "С��";
//	Person p7 = s; // �൱��  Person p7 = 	Person(10);   ���ô��ι��캯��
//	Person p8 = p7; // ��������                           ���ÿ������캯��
//
//	Person p9 = {s,10};   // ���ö�������캯��
//
//	return 0;
//
//}
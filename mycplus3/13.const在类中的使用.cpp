//#include<iostream>
//#include <string>
//
//using namespace std;
//
//class Person {
//public:
//	int m_age;
//	char m_gender;
//	static double m_balance;
//	mutable string m_name; // ��������������ڳ������У���ֵҲ�����޸�
//
//	//���峣����
//	//�ڳ�Ա���������const�����ε���thisָ����ָ��ָ���ֵҲ�������޸�
//	//const Person * const this;
//	// �������Ϊ�����const���ε���thisָ�룬thisָ�뱾������һ��ָ�볣��
//	// ָ��ָ���ܷ����޸�
//	void showPerson() const {
//		//this->m_age = 24;  //�쳣�������ڳ������в����޸ĳ�Ա����
//		m_balance = 200; //�ڳ������п����޸ľ�̬��Ա����
//
//		this->m_name = "Jerry";
//		//fixedPerson(); //�޷����÷Ǿ�̬��Ա����
//		changePerson();  //���Ե��þ�̬��Ա����
//	}
//
//	void fixedPerson() {
//
//	}
//	static void changePerson() {
//
//	}
//};
//
//double Person::m_balance = 100;
//
//int main()
//{
//	Person p1;
//	p1.m_age = 18;
//	p1.m_gender = 's';
//	cout << p1.m_age << endl;
//	cout << p1.m_gender << endl;
//	cout << p1.m_balance << endl;
//	p1.showPerson();
//	cout << p1.m_balance << endl;
//
//	const Person p2;
//	//p2.m_age = 33;  //�����޸ķǾ�̬��Ա����
//	p2.m_balance = 300; //�����޸ľ�̬��Ա����
//	p2.m_name = "�滨"; //�����޸�mutable
//	//p2.m_age = 28;   //���������޸ĳ�Ա����
//	//p2.fixedPerson(); // ��������ʹ�÷Ǿ�̬��Ա����
//	p2.changePerson(); //����ʹ�þ�̬��Ա����
//	return 0;
//}
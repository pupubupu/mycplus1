//#include<iostream>
//#include <string>
//
//using namespace std;
//
//class Person {
//public:
//	// ��̬��Ա�����������������ⶨ��
//	// ���ж�����һ�ݾ�̬����
//	// ��̬��Ա����׶ξͷ����ڴ�
//	static int m_A;
//
//	// ��ͨ��Ա����
//	string s = "123";
//
//	static void fun1();
//
//private:
//	static int m_B; // ��̬��Ա����Ҳ���з���Ȩ�޵�
//
//	static void fun2();
//};
//
//int Person::m_A = 0; // ��̬��Ա�������ⶨ��
//int Person::m_B = 1;
//
//void Person::fun1() {
//	cout << "��̬��Ա����" << endl;
//	//cout << s << endl;  //�޷����÷Ǿ�̬��Ա����
//}
//
//void Person::fun2() {
//	cout << "˽�о�̬��Ա����" << endl;
//}
//
//int main()
//{
//	Person p;
//	cout << p.m_A << endl; // ͨ��������ʾ�̬����
//	cout << Person::m_A << endl; // ͨ���������ʾ�̬����
//	
//	//cout << Person::m_B << endl; // ˽��Ȩ�޷��ʲ���
//
//	cout << p.s << endl;
//
//	p.fun1();
//	//p.fun2();   //˽��Ȩ�޲��ɷ���
//
//	return 0;
//}
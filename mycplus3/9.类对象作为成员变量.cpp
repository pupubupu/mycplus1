//#include <iostream>
//#include <string>
//using namespace std;
//
//class Phone {
//private:
//	// ����
//	string m_name;
//
//public:
//	Phone(string name):m_name(name) {
//		cout << "Phone�Ĺ��캯����������" << endl;
//	}
//
//	~Phone() {
//		cout << "phone������������������" << endl;
//	}
//
//	string getName() {
//		return m_name;
//	}
//};
//
//class Person {
//private:
//	// ����
//	string m_name;
//	// �ֻ�
//	Phone m_pName;
//
//public:
//	//����ʹ�ó�ʼ������m_pName(pName)�ȼ���Phone m_Phone = Pname��
//	//ת��Ϊ��ʽ���캯���ĵ���
//	Person(string name, string pName):m_name(name), m_pName(pName) {
//		cout << "Person�Ĺ��캯����������" << endl;
//	}
//
//	~Person() {
//		cout << "Person������������������" << endl;
//	}
//
//	string getName() {
//		return m_name;
//	}
//
//	Phone getPhone() {
//		return m_pName;
//	}
//
//};
//
////���ۣ��������������Ϊ�����Ա������ʱ���ȹ���������ٹ�������������˳���빹���෴
//int main()
//{
//	Person p1("����", "��ΪMate14�����");
//	cout << p1.getName() << endl;
//	
//	return 0;
//}
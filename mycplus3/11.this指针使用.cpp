//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Person {
//public:
//	string m_name;
//	int m_age;
//	static int m_i;
//public:
//
//	Person(string name, int age) {
//		this->m_name = name; //ͨ��this�����ö������ϵĳ�Ա����
//		this->m_age = age;
//
//		cout << "�вι������" << endl;
//	}
//
//	Person(const Person &p) {
//		cout << "��������" << endl;
//		this->m_name = p.m_name; //ͨ��this�����ö������ϵĳ�Ա����
//		this->m_age = p.m_age;
//	}
//
//	/*Person(Person p) {     //����������д���캯�������б����п������죬���������
//		cout << "��������" << endl;
//	}*/
//
//	~Person() {
//		cout << "��������" << endl;
//	}
//
//	Person* fun1() { // ���ظö����ָ��
//		return this;
//	}
//
//	Person fun2() { // ���ظö���ĸ�����
//		return *this;
//	}
//
//	Person& fun3() { // ���ظö��������
//		return *this;
//	}
//
//	// ���һ�����ڷ����������������һ����Person�����������
//	Person& addAge(const Person &p) { //��ΪҪʵ����ʽ���ã����Է�������
//		this->m_age += p.m_age;
//		return *this; 
//	}
//};
//int main()
//{
//	Person p1("����", 12);
//	Person *zhansan_point = p1.fun1(); //������p1��ָ��
//	cout << zhansan_point->m_age << endl;
//	
//	Person p2 = p1.fun2(); //�൱��ʹ���˿������ã�p1��p2����������
//	cout << p2.m_name << endl;
//
//	Person p3 = Person("����", 20);
//	//��������ʽ����
//	p3.addAge(p1).addAge(p1).addAge(p1);
//	cout << "�ڼӹ�������������������ĵ�����Ϊ��" << p3.m_age << endl;  // 56
//
//	//�ܽ᣺thisָ���������ã�
//	// 1��������ʹ��thisָ�룬���Է��ʳ�Ա�����ͳ�Ա����
//	// 2�����Է��ظö����ָ�룬���ã��������
//	return 0;
//}
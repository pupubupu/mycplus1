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
////������̳�  ������μ̳е�����
////�̳�֮ǰ ���Ϲؼ���virtual ��Ϊ��̳�
////Animal���Ϊ �����
////����
//class Sheep :virtual public Animal{
//public:
//	Sheep() {
//
//	}
//};
//
////����
//class Tuo :virtual public Animal{
//public:
//	Tuo() {
//
//	}
//};
//
////��������
////ʹ�ùؼ���virtual������̳к󣬷��������±仯��
////���������Ӷ�����̳�������m_ageֻ��һ����
////�������ʵ�ֵ��أ���ʵ��������ָ��
////�����������̳���һ����Ϊvbptr��virtual basic pointer����ָ��
////���ָ���ֻ�ָ��һ����Ϊvbtable��������
////��������м�¼��һ��ƫ���������ݸ�ƫ���������ҵ�Animal���е�Ψһ����
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
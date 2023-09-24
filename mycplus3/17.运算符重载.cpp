//#include<iostream>
//#include<string>
//
//using namespace std;
//
//class Person {
//public:
//	string m_name;
//	int m_age;
//	string *m_hobbies;
//	int m_length = 0;
//public:
//	Person() {
//
//	}
//	Person(string name, int age, string hobbies[], int length) :
//		m_name(name), m_age(age),m_length(length) {
//		m_hobbies = new string[length];
//		for (int i = 0; i < length; i++)
//		{
//			*(m_hobbies + i) = *(hobbies + i);
//		}
//	}
//
//	~Person() {
//		if (m_hobbies != nullptr) { //�ֶ��ͷŶ����ڴ�
//			delete[] m_hobbies;
//			m_hobbies = nullptr;
//			m_length = 0;
//		}
//	}
//
//	ostream & operator<<(ostream &cout) {
//		cout << this->m_name << " " << this->m_age << " ";
//		for (int i = 0; i < m_length; i++)
//		{
//			cout << *(m_hobbies + i) << " ";
//		}
//		return cout;
//	}
//
//	//���ڸ�ֵ=�������д��=ֻ��д�ɳ�Ա������
//	Person & operator=(Person &p) {
//		this->m_name = p.m_name;
//		this->m_age = p.m_age;
//		this->m_hobbies = new string[p.m_length]; //���
//		for (int i = 0; i < p.m_length; i++)
//		{
//			*(m_hobbies + i) = *(p.m_hobbies + i);
//		}
//		this->m_length = p.m_length;
//		return *this;
//	}
//};
//
//ostream & operator<<(ostream &cout, Person &p) {
//	return p << cout;
//}
//
//int main()
//{
//	string hobbies[] = { "����","�Ⱦ�","��ͷ" };
//	Person p("�", 19, hobbies, sizeof(hobbies) / sizeof(hobbies[0]));
//	cout << p << endl;
//
//	Person p2, p3, p4;
//	p4 = p3 = p2 = p;
//	cout << p2 << endl; // � 19 ���� �Ⱦ� ��ͷ
//	cout << p3 << endl; // � 19 ���� �Ⱦ� ��ͷ
//	cout << p4 << endl; // � 19 ���� �Ⱦ� ��ͷ
//
//	//int n;
//	//cin >> n;
//	//int *m = new int[n] {};  //��̬�����ڴ�
//	////m[0] = 0;
//	////m[1] = 1;
//	////m[2] = 2;
//	////m[3] = 3;
//	////m[4] = 4;
//	//
//	//for (int i = 0; i < n; i++)
//	//{
//	//	cout << m[i] << endl;
//	//}
//	//int *q = m;
//	//cout << m << endl;
//	//delete[] m;
//	//cout << m << endl;
//	//cout << q << endl;
//
//	return 0;
//}
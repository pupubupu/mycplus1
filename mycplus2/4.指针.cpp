//#include <iostream>
//
//using namespace std;
//int* retAddr();
//
//int main()
//{
//	//1.����ָ��
//	int *p;
//	// �������
//	int a = 100;
//	// ָ�븳ֵ
//	p = &a;
//	// ��ӡָ��
//	cout << p << endl;
//	cout << &a << endl;
//	// ʹ��ָ�루�����ã�
//	// ͨ�������õķ�ʽ�ҵ�ָ��ָ����ڴ�
//	// ָ��ǰ��� *
//	cout << *p << endl;
//	cout << *&a << endl;
//
//	*p = 1000;
//	cout << *p << endl;
//	cout << a << endl;
//
//	// �鿴ָ����ռ�ڴ�ռ��С
//	cout << sizeof(char *) << endl;
//	cout << sizeof(int *) << endl;
//	cout << sizeof(float *) << endl;
//	cout << sizeof(double *) << endl;
//	cout << sizeof(*p) << endl;
//
//	// Ұָ�밸��
//	int * q = NULL;
//	q = retAddr();
//	cout << *q << endl;
//	cout << q << endl;
//
//}
//
//int* retAddr() {
//	int num = 10;
//	return &num;
//}
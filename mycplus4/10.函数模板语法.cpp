//#include <iostream>
// 
//using namespace std;
//
////����ģ��
//template<typename T> //����һ��ģ�壬���߱�������������н����ŵ�T��Ҫ����T��һ��ͨ����������
//void swap(T &a, T &b, int) {
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//template<class T>
//T sum(T a, T b) {
//	return *a + *b;
//}
//
//int main(void)
//{
//	int a = 10;
//	int b = 20;
//	//���ַ�ʽʹ�ú���ģ��
//	//1�������Զ������Ƶ�
//	swap(a, b, 1);
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//
//	double c = 1.1;
//	double d = 2.2;
//
//	swap(c, d, 1);
//	cout << "c = " << c << endl;
//	cout << "d = " << d << endl;
//
//	//2����ʽָ������
//	swap<double>(c, d, 1);
//	cout << "c = " << c << endl;
//	cout << "d = " << d << endl;
//
//	cout << sum<double>(c, d) << endl;
//
//
//
//	return 0;
//}
//#include <iostream>
//
//using namespace std;
//
//void swap(int &x, int &y); //ʹ������ʵ�ֽ�������
//
//int &fun1(); // ��������Ϊ����ֵ���з���
//
//int &fun2();
//
//int main()
//{
//	/*1��ʹ������ʵ�ֽ�������*/
//	int a = 10;
//	int b = 20;
//	swap(a, b);
//	cout << "a = " << a << "��" << "b = " << b << endl;
//
//	/*2����������Ϊ����ֵ���з���*/
//	/*����ʾ�������ؾֲ���������*/
//	int &n = fun2();
//	cout << "n = " << n << endl;
//
//	/*��ȷʾ�������ؾ�̬��������*/
//	int &m = fun1();
//	cout << "m = " << m << endl;
//	cout << "m = " << m << endl;
//	cout << "m = " << m << endl;
//	fun1() = 200;
//	/*
//		fun1() = 200;
//	�ȼ���
//		int &x = fun1();
//		x = 200;
//	����fun1()���صľ��Ǿ�̬����m�ı������Ա������޸ģ����Ƕ�ԭ�������޸�
//	*/
//	cout << "m = " << m << endl;
//
//	return 0;
//}
//
//
//void swap(int &x, int &y) {
//	int temp = x;
//	x = y;
//	y = temp;
//}
//
//int &fun1() {
//	static int m = 100;
//	int &x = m;
//	return x;
//}
//
//int &fun2() {
//	int n = 100;
//	int &y = n;
//	return y;
//}
//

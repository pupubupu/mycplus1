//#include<iostream>
//
//using namespace std;
//
//typedef struct {
//	int a;
//	double b;
//	char c;
//}str_test;
//
//int main()
//{
//	/*int a = 0;
//	memset(&a, 127, 4);
//	memset(&a, 255, 3);
//	printf("%#x", a);*/
//
//	str_test t = { 12,23.44,'t' };
//
//	char *p = new char[1024];
//	memset(p, 0, 1024);
//
//	memcpy(p, &t, 16);
//	double *d = (double *)(p + 8);
//	cout << *d << endl;
//
//
//	memset(p, 0, 1024);
//
//	memcpy(p, &t, 24);
//	char c = *(p + 16);
//	cout << c << endl;
//
//
//	int a[3];
//	memset(a, 255, sizeof(a));
//	cout << "0£º" << a[0] << endl;
//	cout << "1£º" << a[1] << endl;
//	cout << "2£º" << a[2] << endl;
//
//	return 0;
//}
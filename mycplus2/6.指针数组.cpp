//#include <iostream>
//
//using namespace std;
//
//void fun(char * argv[]);
//void fun2(int argc[]);
//
//int main()
//{
//	//// 一维数组指针
//	//int a[10] = { 1,2,3,4,5,6 };
//	////int temp = 11;
//	//int *p = a;
//	//cout << p[1] << endl;
//
//	//// 二维指针数组
//	//int b[][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	//int *q = b[0];
//	//cout << "q:\t" << q << endl << "b:\t" << b << endl << "b[0]:\t" << b[0] << endl;
//	//cout << *q << " " << *(q + 1) << " " << *(q + 2) << endl;
//	//cout << q[0] << endl;
//
//	//int **r = &q;
//	//cout << endl;
//	//cout << *r << endl << &b;
//
//	//cout << "r === &q" << endl << "*r === *&q === b" << endl << "**r === **&q === *b" << endl;
//	//cout << *r << endl;
//
//	//// 指针数组
//	//int * c[10];
//	//int m = 1;
//	//c[0] = &m;
//	//cout << endl;
//	//cout << *c[0] << endl;
//
//
//	//// 数组指针
//	int(*d)[10]; // 定义了含有9个int类型数组的指针d
//	int e[][10] = { 
//		{1,2,3,4,5,6,7,8,9,10},
//	{11,12,13,14,15,16,17,18,19,20},
//	{21,22,23,24,25,26,27,28,29,30},
//	{31,32,33,34,35,36,37,38,39,40},
//	{41,42,43,44,45,46,47,48,49,50}
//	};
//	d = e;
//	for (int i = 0; i < 5; i++) {
//		cout << **(d++) << "\t";
//		cout << endl;
//	}
//
//	//int(*f)[5];
//	//int g[5][5][5] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1 };
//	//f = g[0];
//
//	//int v[3][4];
//	//cout << v + 1 << endl << *(v + 1) << endl;
//
//	//int w[3] = { 0 };
//	//cout << w + 1 << endl << *(w + 1) << endl;
//
//
//	//char *argv[5];
//	//char arr[5][10];
//	//for (int i = 0; i < 5; i++)
//	//{
//	//	cin >> arr[i];
//	//	argv[i] = arr[i];
//	//}
//	//cout << endl;
//	//fun(argv);
//
//	//char *sp = "array";
//
//	//int arr2[] = { 1,2,3,4 };
//	//int *p = arr2;
//	//fun2(arr2);
//
//
//	cout << isdigit('r') << endl;
//	cout << isalpha('j') << endl;
//
//
//	return 0;
//	
//
//}
//
////void fun(char * argv[]) {
////	for (int i = 0; i < 5; i++)
////	{
////		cout << *(argv++) << endl;
////	}
////}
////
////void fun2(int argv[]) {
////	for (int i = 0; i < 4; i++)
////	{
////		cout << *argv++ << endl;
////	}
////}
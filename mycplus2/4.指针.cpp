//#include <iostream>
//
//using namespace std;
//int* retAddr();
//
//int main()
//{
//	//1.定义指针
//	int *p;
//	// 定义变量
//	int a = 100;
//	// 指针赋值
//	p = &a;
//	// 打印指针
//	cout << p << endl;
//	cout << &a << endl;
//	// 使用指针（解引用）
//	// 通过解引用的方式找到指针指向的内存
//	// 指针前面加 *
//	cout << *p << endl;
//	cout << *&a << endl;
//
//	*p = 1000;
//	cout << *p << endl;
//	cout << a << endl;
//
//	// 查看指针所占内存空间大小
//	cout << sizeof(char *) << endl;
//	cout << sizeof(int *) << endl;
//	cout << sizeof(float *) << endl;
//	cout << sizeof(double *) << endl;
//	cout << sizeof(*p) << endl;
//
//	// 野指针案例
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
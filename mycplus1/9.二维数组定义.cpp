//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	////1、定义二维数组
//	//int arr[4][2] = {
//	//	{1, 2},
//	//	{3, 4},
//	//	{5, 6}
//	//};
//	//// 计算行的长度
//	//int row_len = sizeof(arr) / sizeof(arr[0]);
//	//// 计算列的长度
//	//int col_len = sizeof(arr[0]) / sizeof(arr[0][0]);
//	//// 使用嵌套循环打印数组
//	//for (int i = 0; i < row_len; i++) {
//	//	for (int j = 0; j < col_len; j++) {
//	//		cout << arr[i][j] << " ";
//	//	}
//	//	cout << endl;
//	//}
//
//	//cout << endl;
//
//	////2、定义二维数组
//	//int arr2[][2] = {
//	//	{1, 2},
//	//	{3, 4},
//	//	{5, 6}
//	//};
//	//// 计算行的长度
//	//int row_len2 = sizeof(arr2) / sizeof(arr2[0]);
//	//// 计算列的长度
//	//int col_len2 = sizeof(arr2[0]) / sizeof(arr2[0][0]);
//	//// 使用嵌套循环打印数组
//	//for (int i = 0; i < row_len2; i++) {
//	//	for (int j = 0; j < col_len2; j++) {
//	//		cout << arr2[i][j] << " ";
//	//	}
//	//	cout << endl;
//	//}
//
//	//cout << endl;
//
//	////3、定义二维数组
//	//int arr3[4][2] = {1, 2, 3, 4, 5};
//	//// 计算行的长度
//	//int row_len3 = sizeof(arr3) / sizeof(arr3[0]);
//	//// 计算列的长度
//	//int col_len3 = sizeof(arr3[0]) / sizeof(arr3[0][0]);
//	//// 使用嵌套循环打印数组
//	//for (int i = 0; i < row_len3; i++) {
//	//	for (int j = 0; j < col_len3; j++) {
//	//		cout << arr3[i][j] << " ";
//	//	}
//	//	cout << endl;
//	//}
//
//	//cout << endl;
//
//	////4、定义二位字符数组
//	//char arr4[4][10] = {
//	//	{"qweqww"},
//	//	{"312423"},
//	//	{"15fgw_32="}
//	//};
//	//for (int i = 0; i < 4; i++) {
//	//	for (int j = 0; j < 10; j++) {
//	//		if(arr4[i][j] != '\0')cout << arr4[i][j] << " ";
//	//		else cout << "*" << " ";
//	//	}
//	//	cout << endl;
//	//}
//	//cout << endl;
//
//	///*int arr4[3][3][3] = { 1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7,8,9 };
//	//for (int i = 0; i < 3; i++) {
//	//	for (int j = 0; j < 3; j++) {
//	//		for (int k = 0; k < 3; k++) {
//	//			cout << arr4[i][j][k] << " ";
//	//		}
//	//		cout << endl;
//	//	}
//	//	cout << endl;
//	//}*/
//
//	int a[2][3] = {
//		{1,2,3},
//		{4,5,6},
//	};
//	cout << "二维数组大小：" << sizeof(a) << endl;
//	cout << "二维数组一行大小：" << sizeof(a[0]) << endl;
//	cout << "二维数组元素大小：" << sizeof(a[0][0]) << endl;
//
//	cout << "二维数组行数：" << sizeof(a) << endl;
//	cout << "二维数组列数：" << sizeof(a[0]) << endl;
//
//	//地址
//	cout << "二维数组首地址：" << a << endl;
//	cout << "二维数组第一行地址：" << a[0] << endl;
//	cout << "二维数组第二行地址：" << a[1] << endl;
//
//	cout << "二维数组第一个元素地址：" << &a[0][0] << endl;
//	cout << "二维数组第二个元素地址：" << &a[0][1] << endl;
//
//	return 0;
//
//
//}
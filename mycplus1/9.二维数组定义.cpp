//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	////1�������ά����
//	//int arr[4][2] = {
//	//	{1, 2},
//	//	{3, 4},
//	//	{5, 6}
//	//};
//	//// �����еĳ���
//	//int row_len = sizeof(arr) / sizeof(arr[0]);
//	//// �����еĳ���
//	//int col_len = sizeof(arr[0]) / sizeof(arr[0][0]);
//	//// ʹ��Ƕ��ѭ����ӡ����
//	//for (int i = 0; i < row_len; i++) {
//	//	for (int j = 0; j < col_len; j++) {
//	//		cout << arr[i][j] << " ";
//	//	}
//	//	cout << endl;
//	//}
//
//	//cout << endl;
//
//	////2�������ά����
//	//int arr2[][2] = {
//	//	{1, 2},
//	//	{3, 4},
//	//	{5, 6}
//	//};
//	//// �����еĳ���
//	//int row_len2 = sizeof(arr2) / sizeof(arr2[0]);
//	//// �����еĳ���
//	//int col_len2 = sizeof(arr2[0]) / sizeof(arr2[0][0]);
//	//// ʹ��Ƕ��ѭ����ӡ����
//	//for (int i = 0; i < row_len2; i++) {
//	//	for (int j = 0; j < col_len2; j++) {
//	//		cout << arr2[i][j] << " ";
//	//	}
//	//	cout << endl;
//	//}
//
//	//cout << endl;
//
//	////3�������ά����
//	//int arr3[4][2] = {1, 2, 3, 4, 5};
//	//// �����еĳ���
//	//int row_len3 = sizeof(arr3) / sizeof(arr3[0]);
//	//// �����еĳ���
//	//int col_len3 = sizeof(arr3[0]) / sizeof(arr3[0][0]);
//	//// ʹ��Ƕ��ѭ����ӡ����
//	//for (int i = 0; i < row_len3; i++) {
//	//	for (int j = 0; j < col_len3; j++) {
//	//		cout << arr3[i][j] << " ";
//	//	}
//	//	cout << endl;
//	//}
//
//	//cout << endl;
//
//	////4�������λ�ַ�����
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
//	cout << "��ά�����С��" << sizeof(a) << endl;
//	cout << "��ά����һ�д�С��" << sizeof(a[0]) << endl;
//	cout << "��ά����Ԫ�ش�С��" << sizeof(a[0][0]) << endl;
//
//	cout << "��ά����������" << sizeof(a) << endl;
//	cout << "��ά����������" << sizeof(a[0]) << endl;
//
//	//��ַ
//	cout << "��ά�����׵�ַ��" << a << endl;
//	cout << "��ά�����һ�е�ַ��" << a[0] << endl;
//	cout << "��ά����ڶ��е�ַ��" << a[1] << endl;
//
//	cout << "��ά�����һ��Ԫ�ص�ַ��" << &a[0][0] << endl;
//	cout << "��ά����ڶ���Ԫ�ص�ַ��" << &a[0][1] << endl;
//
//	return 0;
//
//
//}
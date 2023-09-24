//#include <iostream>
//
//using namespace std;
//
//void hannuota(int n, char A, char B, char C);
//
//int main()
//{
//	int n; // 定义n层汉诺塔
//	cin >> n;
//	hannuota(n, 'A', 'B', 'C');
//}
//
//void hannuota(int n, char A, char B, char C)
//{
//	if (n == 1) {
//		cout << "将" << n << "号盘子从" << A << "->" << B << endl;
//	}
//	else {
//		hannuota(n - 1, A, C, B);
//		cout << "将" << n << "号盘子从" << A << "->" << B << endl;
//		hannuota(n - 1, C, B, A);
//	}
//}
//#include <iostream>
//
//using namespace std;
//
//void hannuota(int n, char A, char B, char C);
//
//int main()
//{
//	int n; // ����n�㺺ŵ��
//	cin >> n;
//	hannuota(n, 'A', 'B', 'C');
//}
//
//void hannuota(int n, char A, char B, char C)
//{
//	if (n == 1) {
//		cout << "��" << n << "�����Ӵ�" << A << "->" << B << endl;
//	}
//	else {
//		hannuota(n - 1, A, C, B);
//		cout << "��" << n << "�����Ӵ�" << A << "->" << B << endl;
//		hannuota(n - 1, C, B, A);
//	}
//}
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	// ��ʼ������
//	int score[][3] = {100,100,100,90,50,100,60,70,80};
//	// �еĳ���
//	int row_len = sizeof(score) / sizeof(score[0]);
//	//  �еĳ���
//	int col_len = sizeof(score[0]) / sizeof(score[0][0]);
//
//	char student[][5] = {
//		{"����"},
//		{"����"},
//		{"����"}
//	};
//	char subject[][5] = {
//		{"����"},
//		{"��ѧ"},
//		{"Ӣ��"},
//	};
//
//	// ����ѧ���ɼ��ܷ�
//	for (int i = 0; i < row_len; i++) {
//		int sum1 = 0;
//		for (int j = 0; j < col_len; j++) {
//			sum1 += score[i][j];
//		}
//		cout << student[i] << "�ɼ��ܷ֣�" << sum1 << " " << endl;
//	}
//
//	// ���㵥�Ƴɼ��ܷ�
//	for (int i = 0; i < col_len; i++) {
//		int sum2 = 0;
//		for (int j = 0; j < row_len; j++) {
//			sum2 += score[j][i];
//		}
//		cout << subject[i] << "ѧ���ܷ֣�" << sum2 << endl;
//	}
//}
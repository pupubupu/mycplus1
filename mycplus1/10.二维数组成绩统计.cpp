//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	// 初始化数组
//	int score[][3] = {100,100,100,90,50,100,60,70,80};
//	// 行的长度
//	int row_len = sizeof(score) / sizeof(score[0]);
//	//  列的长度
//	int col_len = sizeof(score[0]) / sizeof(score[0][0]);
//
//	char student[][5] = {
//		{"张三"},
//		{"李四"},
//		{"王五"}
//	};
//	char subject[][5] = {
//		{"语文"},
//		{"数学"},
//		{"英语"},
//	};
//
//	// 计算学生成绩总分
//	for (int i = 0; i < row_len; i++) {
//		int sum1 = 0;
//		for (int j = 0; j < col_len; j++) {
//			sum1 += score[i][j];
//		}
//		cout << student[i] << "成绩总分：" << sum1 << " " << endl;
//	}
//
//	// 计算单科成绩总分
//	for (int i = 0; i < col_len; i++) {
//		int sum2 = 0;
//		for (int j = 0; j < row_len; j++) {
//			sum2 += score[j][i];
//		}
//		cout << subject[i] << "学科总分：" << sum2 << endl;
//	}
//}
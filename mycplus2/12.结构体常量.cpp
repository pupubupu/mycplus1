//#include <iostream>
//#include <string>
//
//using namespace std;
//
//struct student {
//	string name;
//	int score;
//};
//struct teacher {
//	string name;
//	struct student student[2];
//};
//
//void in(teacher * tch, int length);
//void out(teacher tch[], int length);
//
//
//int main()
//{
//	//student s1 = {
//	//	"����",
//	//	12,
//	//	88
//	//};
//	//student s2 = s1;
//	//s2.score = 99;
//	//cout << s1.score << endl;
//
//	//const student * s3 = &s1;
//	//cout << s3->age << endl;
//	
//	//teacher tch[3];
//	//in(tch, sizeof(tch) / sizeof(tch[0]));
//	//out(tch, sizeof(tch) / sizeof(tch[0]));
//
//	string a = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
//	string b = "abc";
//	string c = a + b[1];
//	cout << &c << endl << &a << endl << &b << endl;
//	cout << a.length() << endl;
//	cout << a.size() << endl;
//	const char *p = a.c_str();
//	cout << strlen(p) << endl;
//	cout << sizeof(a[0]) << endl;
//	printf("%#d", sizeof(a));
//
//}
//
//void in(teacher * tch, int length) {
//	for (int i = 0; i < length; i++) {
//		cout << "�������ʦ������";
//		cin >> tch[i].name;
//		for (int j = 0; j < 2; j++){
//			cout << "�������" << j << "��ѧ��������";
//			cin >> tch[i].student[j].name;
//			cout << "�������" << j << "��ѧ��������";
//			cin >> tch[i].student[j].score;
//		}
//	}
//}
//
//void out(teacher tch[], int length) {
//	for (int i = 0; i < length; i++) {
//		cout << tch[i].name << endl;
//		for (int j = 0; j < 2; j++) {
//			cout << "������" << tch[i].student[j].name << " ";
//			cout << "������" << tch[i].student[j].score << endl;
//		}
//	}
//}
//

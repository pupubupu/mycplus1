//#include <iostream>
//#include <string>
//
//using namespace std;
//
//struct hero {
//	string name;
//	int age;
//	string gender;
//};
//
//void sort(hero *sanguo, int length);
//
//int main()
//{
//	hero sanguo[5] = { 
//		{"����", 23, "��"}, 
//		{"�ŷ�", 22, "��"},
//		{"����", 20, "��"},
//		{"����", 21, "��"},
//		{"����", 19, "Ů"}
//	};
//	sort(sanguo, sizeof(sanguo) / sizeof(sanguo[0]));
//	for (int i = 0; i < 5; i++)
//	{
//		cout << sanguo[i].name << "  " << sanguo[i].age << "  " << sanguo[i].gender << endl;
//	}
//
//	return 0;
//}
//
//void sort(hero *sanguo, int length) {
//	for (int i = 0; i < length; i++){
//		for (int j = 0; j < length - i - 1; j++){
//			if (sanguo[j].age > sanguo[j + 1].age) {
//				hero t = sanguo[j];
//				sanguo[j] = sanguo[j + 1];
//				sanguo[j + 1] = t;
//			}
//		}
//	}
//}
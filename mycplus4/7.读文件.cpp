//#include <iostream>
//#include <fstream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	//1.����ͷ�ļ�
//
//	//2.����������
//	ifstream ifs;
//
//	//3.���ļ��������ж��ļ��Ƿ�򿪳ɹ�
//	ifs.open("test.txt", ios::in);
//	if (!ifs.is_open()) {
//		cout << "���ļ�ʧ��!" << endl;
//		return 0;
//	}
//
//	//4.������
//	//��һ��
//	//char buf1[1024] = { 0 };
//	//while (ifs >> buf1) {
//	//	cout << buf1 << endl;
//	//}
//
//	//�ڶ���
//	//char buf2[1024] = { 0 };
//	//while (ifs.getline(buf2, sizeof(buf2))) {
//	//	cout << buf2 << endl;
//	//}
//
//	//������
//	//string s;
//	//while (getline(ifs, s)) {
//	//	cout << s << endl;
//	//}
//
//	//������
//	//char c;
//	//while (ifs.get(c)) {
//	//	cout << c;
//	//}
//
//	//������
//	char c;
//	while ((c = ifs.get()) != EOF) {
//		cout << c;
//	}
//
//	//5.�ر��ļ�
//	ifs.close();
//	return 0;
//}
//#include <iostream>
//#include <fstream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	//1.������ͷ�ļ�fstream
//
//	//2.����������
//	ofstream ofs;
//
//	//3.ָ���򿪷�ʽ
//	ofs.open("myfile/test.txt", ios::out);
//	if (!ofs.is_open()) {
//		cout << "�ļ���ʧ�ܣ�" << endl;
//		return 0;
//	}
//
//	//4.д����
//	ofs << "����������" << endl;
//	ofs << "���䣺18" << endl;
//	ofs << "�Ա���" << endl;
//	
//	//const char *p = "1232145";
//	//ofs << p << endl;
//	//delete p;
//
//	/*string s;
//	cin >> s;
//	ofs << s << endl;*/
//
//	//5.�ر��ļ�
//	ofs.close();
//
//	return 0;
//}
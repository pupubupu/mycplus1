//#include <iostream>
//#include <fstream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	//1.博阿寒头文件fstream
//
//	//2.创建流对象
//	ofstream ofs;
//
//	//3.指定打开方式
//	ofs.open("myfile/test.txt", ios::out);
//	if (!ofs.is_open()) {
//		cout << "文件打开失败！" << endl;
//		return 0;
//	}
//
//	//4.写内容
//	ofs << "姓名：张四" << endl;
//	ofs << "年龄：18" << endl;
//	ofs << "性别：男" << endl;
//	
//	//const char *p = "1232145";
//	//ofs << p << endl;
//	//delete p;
//
//	/*string s;
//	cin >> s;
//	ofs << s << endl;*/
//
//	//5.关闭文件
//	ofs.close();
//
//	return 0;
//}
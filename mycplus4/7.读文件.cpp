//#include <iostream>
//#include <fstream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	//1.包含头文件
//
//	//2.创建流对象
//	ifstream ifs;
//
//	//3.打开文件，并且判断文件是否打开成功
//	ifs.open("test.txt", ios::in);
//	if (!ifs.is_open()) {
//		cout << "打开文件失败!" << endl;
//		return 0;
//	}
//
//	//4.读数据
//	//第一种
//	//char buf1[1024] = { 0 };
//	//while (ifs >> buf1) {
//	//	cout << buf1 << endl;
//	//}
//
//	//第二种
//	//char buf2[1024] = { 0 };
//	//while (ifs.getline(buf2, sizeof(buf2))) {
//	//	cout << buf2 << endl;
//	//}
//
//	//第三种
//	//string s;
//	//while (getline(ifs, s)) {
//	//	cout << s << endl;
//	//}
//
//	//第四种
//	//char c;
//	//while (ifs.get(c)) {
//	//	cout << c;
//	//}
//
//	//第五种
//	char c;
//	while ((c = ifs.get()) != EOF) {
//		cout << c;
//	}
//
//	//5.关闭文件
//	ifs.close();
//	return 0;
//}
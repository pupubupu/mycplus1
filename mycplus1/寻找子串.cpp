//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int main() {
//
//	char str[100] = { 0 };
//	char substr[100] = { 0 };
//
//	cin.getline(str, sizeof(str));
//	cin.getline(substr, sizeof(substr));
//
//	int count = 0;
//
//	// write your code here......
//	char *p = str;
//	while (p != NULL && strlen(p)) {
//		p = strstr(p, substr);
//		if (p != NULL) {
//			count++;
//			p = p + 1;
//		}
//	}
//	cout << count << endl;
//
//	return 0;
//}
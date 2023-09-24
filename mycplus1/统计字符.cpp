//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main() {
//
//	string str;
//	getline(cin, str);
//
//	int whitespace = 0;
//	int digits = 0;
//	int chars = 0;
//	int others = 0;
//
//	// write your code here......
//	for (int i = 0; str[i] != '\0'; i++) {
//		if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')chars++;
//		else if (str[i] == ' ') whitespace++;
//		else if (str[i] > '0' && str[i] < '9')digits++;
//		else others++;
//	}
//
//	cout << "chars : " << chars
//		<< " whitespace : " << whitespace
//		<< " digits : " << digits
//		<< " others : " << others << endl;
//
//	return 0;
//}
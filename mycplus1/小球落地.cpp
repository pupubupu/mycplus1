//#include <iostream>
//#include <iomanip>
//#include <cmath>
//using namespace std;
//
//int main() {
//
//	// 下落的高度和落地的次数
//	double h;
//	int n;
//
//	cin >> h;
//	cin >> n;
//
//	// write your code here......
//	double sum = 0;
//	for (int i = 0; i < n; i++) {
//		if (i != 0)sum = sum + h * pow(1.0 / 2, i) * 2.0;
//		else sum = sum + h * pow(1.0 / 2, i);
//	}
//	cout << fixed << setprecision(2) <<  sum << " " << 1.0 * h * pow(1.0 / 2, n) << endl;
//
//	return 0;
//}
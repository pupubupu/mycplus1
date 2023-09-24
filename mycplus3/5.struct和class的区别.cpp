//#include <iostream>
//
//using namespace std;
//
//class C1 {
//	int m_A; // 默认是私有权限
//};
//
//struct C2 {
//	int m_A; // 默认是共有权限
//};
//
//int main()
//{
//	C1 c1;
//	c1.m_A = 1; // 错误，访问权限是私有
//
//	C2 c2;
//	c2.m_A = 2; // 正确，访问权限是公有
//	return 0;
// }
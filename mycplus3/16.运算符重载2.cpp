//#include <iostream>
//#include <string>
//
//using namespace std;
//
//enum sex {
//	male = 0,
//	female = 1
//};
//
//class Person {
//public:
//	string name;
//	int age;
//	sex gender;
//
//	Person(string name, int age, sex gender) :name(name), age(age), gender(gender) {
//
//	}
//
//	ostream & operator<<(ostream & cout) const{
//		cout << this->name << " " << this->age << " " << this->gender;
//		return cout;
//	}
//	//类内++前置运算符重载
//	Person & operator++() {  //返回引用是为了对同一个数据进行操作：++（++p）,最终p对象会被+2
//		this->age++;
//		return *this;
//	}
//	//类内++后置运算符重载
//	Person operator++(int) {  //int占位参数，用来区分前置++和后置++
//		Person p_old = *this;
//		this->age++;
//		return p_old;
//	}/*返回对象（浅拷贝）是因为要将+1之前的值作为返回值，
//	所以此时返回的是一个新的变量，并开辟了新的内存，
//	注意：该内存是没有*/
//};
//
//////类外++前置运算符重载
////Person & operator++(Person& p) {
////	p.age++;
////	return p;
////}
////
//////类外++后置运算符重载
////Person operator++(Person & p, int ) {
////	Person p_old = p;
////	p.age++;
////	return p_old;
////}
//
//ostream & operator<<(ostream & cout,const Person &p) {
//	return p << cout;
//}
//
//int main()
//{
//	Person p("小明", 14, male);
//	cout << ++p << endl;    // 15  这里的值都是类内运算符重载情况下的
//	cout << (++p)++ << endl; // 16
//	cout << p++ << endl;  // 17
//	cout << p << endl;    // 18
//	cout << (p++) << endl; // 18
//	cout << p << endl;  //19
//
//	cout << ++(++p)++ << endl;/*错误：该语句的执行顺序是  1、++p  2、(++p)++  3、++(++p)++
//							  在使用全局++运算符重载时
//							  该语句在执行到第三步时会出现错误，因为  Person++返回的是一个匿名对象，该对象是拷贝构造
//							  而来，它没有变量名，所以，无法作为参数（引用）再去进行 ++Person操作；
//							  
//							  但是，如果使用类内构造函数，就不会发生上述错误；因为，第二步的结果不会再作为参数传递，
//							  而是调用该结果的内部函数（前置++），该操作是没问题的。
//							  可是，由于第二步返回的是一个拷贝函数，也就是说，已经不是原来的对象，所以，第三步将对
//							  一个新的变量做++操作，所以，p对象最终的age属性是21
//							  结论，在使用前置++和后置++时，前置++的值可以作为左值重新运算；而后置++的值不可作为左值
//							  运算
//							  */
//	cout << p << endl; //21
//
//
//	int i = 1;
//	++(++i)++;  /*错误：该语句的执行顺序是  1、++i  2、(++i)++  3、++(++i)++
//				该语句在执行到第三步时会出现错误，应为  int++ 返回的是一个不可修改的左值（可以理解为常量），
//				它和67行的数据是类似的，可以判断，他的++函数应该和47行的函数差不多*/
//	
//	return 0;
//}
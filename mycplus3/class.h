#include <iostream>
#include <string>

using namespace std;

class Student {
private:
	string sno;
	string sname;
protected:
	int age;
public:
	void setSno(string sno) {
		this->sno = sno;
	}
	void setSname(string sname) {
		this->sname = sname;
	}
	void print() {
		cout << "ѧ�ţ�" << this->sno << " " << "������" << this->sname << endl;
	}
};
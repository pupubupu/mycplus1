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
		cout << "Ñ§ºÅ£º" << this->sno << " " << "ÐÕÃû£º" << this->sname << endl;
	}
};
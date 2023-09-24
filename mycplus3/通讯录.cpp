//#include <iostream>
//#include <string>
//#define N 1000
//
//using namespace std;
//
//struct Associate {
//	string name;
//	string gender;
//	int age;
//	string tel;
//	string add;
//};
//
//struct AddressBook {
//	struct Associate list[N];
//	int m_size = 0;
//};
//
//void add(AddressBook *addressBook);
//void print(AddressBook *addressBook);
//void del(AddressBook *addressBook);
//void search(AddressBook *addressBook);
//
//
//int main()
//{
//	/*Associate *list = nullptr;
//	list = new Associate[N];*/
//	AddressBook *addressBook = new AddressBook;
//	//int length = 0;
//	int choice = 1;
//	while (choice) {
//		cout << "***************************" << endl;
//		cout << "*****  " << "1、添加联系人"  << "  *****" << endl;
//		cout << "*****  " << "2、显示联系人"  << "  *****" << endl;
//		cout << "*****  " << "3、删除联系人"  << "  *****" << endl;
//		cout << "*****  " << "4、查找联系人"  << "  *****" << endl; 
//		cout << "*****  " << "5、修改联系人"  << "  *****" << endl;
//		cout << "*****  " << "6、清空联系人"  << "  *****" << endl;
//		cout << "*****  " << "0、退出通讯录"  << "  *****" << endl;
//
//		cout << "请输入你的选择：";
//		cin >> choice;
//		switch (choice) {
//			case 1:
//				add(addressBook);
//				break;
//			case 2:
//				print(addressBook);
//				break;
//			case 3:
//				del(addressBook);
//				break;
//			case 4:
//				search(addressBook);
//				break;
//			case 5:
//				break;
//			case 6:
//				break;
//			default:
//				break;
//		}
//		system("pause");
//		system("cls");
//
//	}
//
//
//	return 0;
//}
//
////添加联系人
//void add(AddressBook *addressBook) {
//	if (addressBook->m_size >= N) {
//		cout << "通讯录已满" << endl;
//		return;
//	}
//	cout << "请输入联系人姓名：";
//	cin >> addressBook->list[addressBook->m_size].name;
//	cout << "请输入联系人性别：";
//	cin >> addressBook->list[addressBook->m_size].gender;
//	cout << "请输入联系人年龄：";
//	while (!(cin >> addressBook->list[addressBook->m_size].age) || cin.peek() != '\n')
//	{
//		cin.clear();
//		cin.ignore(numeric_limits<streamsize>::max(), '\n');
//		cout << "输入数据错误,请重新输入:" << endl;
//	}
//	//cin >> addressBook->list[addressBook->m_size].age;
//	cout << "请输入联系人电话：";
//	cin >> addressBook->list[addressBook->m_size].tel;
//	cout << "请输入联系人地址：";
//	cin >> addressBook->list[addressBook->m_size].add;
//	cout << "添加成功" << endl;
//
//	addressBook->m_size++;
//}
//
////显示联系人
//void print(AddressBook *addressBook) {
//	if (addressBook->m_size == 0) {
//		cout << "通讯录为空" << endl;
//		return;
//	}
//	for (int i = 0; i < addressBook->m_size; i++)
//	{
//		cout << "姓名：" << addressBook->list[i].name << "\t";
//		cout << "性别：" << addressBook->list[i].gender << "\t";
//		cout << "年龄：" << addressBook->list[i].age << "\t";
//		cout << "电话：" << addressBook->list[i].tel << "\t";
//		cout << "地址：" << addressBook->list[i].add << "\t";
//		cout << endl;
//	}
//	cout << endl;
//}
//
//// 删除联系人
//void del(AddressBook *addressBook) {
//	if (addressBook->m_size == 0) {
//		cout << "通讯录为空" << endl;
//		return;
//	}
//	string name;
//	cout << "请输入待删除联系人姓名：";
//	cin >> name;
//	bool flag = false;
//	int location = 0;
//	for (int i = 0; i < addressBook->m_size; i++){
//		if (!(addressBook->list[i].name.compare(name))) {
//			flag = true;
//			location = i;
//			break;
//		}
//	}
//	if (!flag) {
//		cout << "未查找到联系人" << endl;
//		return;
//	}
//	while (location + 1 < addressBook->m_size) {
//		addressBook->list[location] = addressBook->list[location + 1];
//		location++;
//	}
//	addressBook->m_size--;
//	cout << "已删除名为" << name << "的联系人" << endl;
//	
//}
//
//void search(AddressBook *addressBook) {
//	if (addressBook->m_size == 0) {
//		cout << "通讯录为空" << endl;
//		return;
//	}
//	string name;
//	cout << "请输入待删除联系人姓名：";
//	cin >> name;
//	bool flag = false;
//	int sum = 0;
//	for (int i = 0; i < addressBook->m_size; i++){
//		if (!(addressBook->list[i].name.compare(name))){
//			cout << "姓名：" << addressBook->list[i].name << "   ";
//			cout << "性别：" << addressBook->list[i].gender << "   ";
//			cout << "年龄：" << addressBook->list[i].age << "   ";
//			cout << "电话：" << addressBook->list[i].tel << "   ";
//			cout << "地址：" << addressBook->list[i].add << "   ";
//			cout << endl;
//			sum++;
//		}
//	}
//	if (sum == 0) {
//		cout << "查无此人" << endl;
//	}else {
//		cout << "已为您查找到" << sum << "个\"" << name << "\"" << "的联系人" << endl;
//	}
//	cout << endl;
//
//}
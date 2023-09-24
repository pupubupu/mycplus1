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
//		cout << "*****  " << "1�������ϵ��"  << "  *****" << endl;
//		cout << "*****  " << "2����ʾ��ϵ��"  << "  *****" << endl;
//		cout << "*****  " << "3��ɾ����ϵ��"  << "  *****" << endl;
//		cout << "*****  " << "4��������ϵ��"  << "  *****" << endl; 
//		cout << "*****  " << "5���޸���ϵ��"  << "  *****" << endl;
//		cout << "*****  " << "6�������ϵ��"  << "  *****" << endl;
//		cout << "*****  " << "0���˳�ͨѶ¼"  << "  *****" << endl;
//
//		cout << "���������ѡ��";
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
////�����ϵ��
//void add(AddressBook *addressBook) {
//	if (addressBook->m_size >= N) {
//		cout << "ͨѶ¼����" << endl;
//		return;
//	}
//	cout << "��������ϵ��������";
//	cin >> addressBook->list[addressBook->m_size].name;
//	cout << "��������ϵ���Ա�";
//	cin >> addressBook->list[addressBook->m_size].gender;
//	cout << "��������ϵ�����䣺";
//	while (!(cin >> addressBook->list[addressBook->m_size].age) || cin.peek() != '\n')
//	{
//		cin.clear();
//		cin.ignore(numeric_limits<streamsize>::max(), '\n');
//		cout << "�������ݴ���,����������:" << endl;
//	}
//	//cin >> addressBook->list[addressBook->m_size].age;
//	cout << "��������ϵ�˵绰��";
//	cin >> addressBook->list[addressBook->m_size].tel;
//	cout << "��������ϵ�˵�ַ��";
//	cin >> addressBook->list[addressBook->m_size].add;
//	cout << "��ӳɹ�" << endl;
//
//	addressBook->m_size++;
//}
//
////��ʾ��ϵ��
//void print(AddressBook *addressBook) {
//	if (addressBook->m_size == 0) {
//		cout << "ͨѶ¼Ϊ��" << endl;
//		return;
//	}
//	for (int i = 0; i < addressBook->m_size; i++)
//	{
//		cout << "������" << addressBook->list[i].name << "\t";
//		cout << "�Ա�" << addressBook->list[i].gender << "\t";
//		cout << "���䣺" << addressBook->list[i].age << "\t";
//		cout << "�绰��" << addressBook->list[i].tel << "\t";
//		cout << "��ַ��" << addressBook->list[i].add << "\t";
//		cout << endl;
//	}
//	cout << endl;
//}
//
//// ɾ����ϵ��
//void del(AddressBook *addressBook) {
//	if (addressBook->m_size == 0) {
//		cout << "ͨѶ¼Ϊ��" << endl;
//		return;
//	}
//	string name;
//	cout << "�������ɾ����ϵ��������";
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
//		cout << "δ���ҵ���ϵ��" << endl;
//		return;
//	}
//	while (location + 1 < addressBook->m_size) {
//		addressBook->list[location] = addressBook->list[location + 1];
//		location++;
//	}
//	addressBook->m_size--;
//	cout << "��ɾ����Ϊ" << name << "����ϵ��" << endl;
//	
//}
//
//void search(AddressBook *addressBook) {
//	if (addressBook->m_size == 0) {
//		cout << "ͨѶ¼Ϊ��" << endl;
//		return;
//	}
//	string name;
//	cout << "�������ɾ����ϵ��������";
//	cin >> name;
//	bool flag = false;
//	int sum = 0;
//	for (int i = 0; i < addressBook->m_size; i++){
//		if (!(addressBook->list[i].name.compare(name))){
//			cout << "������" << addressBook->list[i].name << "   ";
//			cout << "�Ա�" << addressBook->list[i].gender << "   ";
//			cout << "���䣺" << addressBook->list[i].age << "   ";
//			cout << "�绰��" << addressBook->list[i].tel << "   ";
//			cout << "��ַ��" << addressBook->list[i].add << "   ";
//			cout << endl;
//			sum++;
//		}
//	}
//	if (sum == 0) {
//		cout << "���޴���" << endl;
//	}else {
//		cout << "��Ϊ�����ҵ�" << sum << "��\"" << name << "\"" << "����ϵ��" << endl;
//	}
//	cout << endl;
//
//}
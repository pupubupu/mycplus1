//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Animal {
//public:
//	virtual void speak() {
//		cout << "�����ڽ�" << endl;
//	}
//
//	virtual void speak(string say) {
//		cout << "ѩ������" << endl;
//	}
//};
//
//class Cat : public Animal {
//public:
//	void speak()  {
//		cout << "Сè�ڽ�" << endl;
//	}
//
//	void say(string say) {
//		cout << say << endl;
//	}
//
//	virtual ~Cat() {
//		cout << "����è��������" << endl;
//	}
//
//};
//
//class BosiCat : public Cat {
//public:
//	void speak() {
//		cout << "��˹è�ڽ�" << endl;
//	}
//
//	~BosiCat() {
//		cout << "��˹è��������" << endl;
//	}
//};
//
//int main()
//{
//	/**
//	*
//	* ����̬����̬Ҫ������������
//	* 1���м̳й�ϵ
//	* 2��������д������麯��
//	* 3��ʹ�ø���ָ�������ָ���������
//	* 
//	* �麯��������java��Ľӿڡ����ı����Ǻ����ڱ���׶β���ȷ����ַ�������壩��
//	* ������ʱ��������������д�����������еĺ���ָ��ָ������ĺ���ʵ�֣���ʵ�ֶ�̬
//	*/
//
//	Animal *animal = new Cat;
//	animal->speak(); // "Сè�ڽ�"
//	animal->speak("������");
//
//	Cat *cat = new BosiCat;
//	cat->speak();
//
//	delete cat;
//
//	try
//	{
//
//	}
//	catch (const std::exception&)
//	{
//
//	}
//	
//	return 0;
//}
#include<iostream>
using namespace std;
#include<string>

//string�����ɾ��
void test01()
{
	string str = "Hello";

	//����
	str.insert(1, "111");  //str = H111ello
	cout << "str = " << str << endl;

	//ɾ��
	str.erase(1, 3);  //str = Hello
	cout << "str = " << str << endl;
}

int main()
{
	test01();

	system("pause");

	return 0;
}
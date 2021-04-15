#include<iostream>
using namespace std;
#include<string>

//string字符存取
void test01()
{
	string str = "Hello";
	cout << "str = " << str << endl;

	//1. 通过 [] 访问单个字符
	for (int i = 0; i < str.size(); i++)
	{
		cout << str[i] << " ";
	}
	cout << endl;

	//2. 通过at方式访问单个字符
	for (int i = 0; i < str.size(); i++)
	{
		cout << str.at(i) << " ";
	}
	cout << endl;

	//修改单个字符
	str[0] = 'X';
	cout << "str = " << str << endl;  //str = Xello

	str.at(1) = 'x';
	cout << "str = " << str << endl;  //str = Xxllo
}

int main()
{
	test01();

	system("pause");

	return 0;
}
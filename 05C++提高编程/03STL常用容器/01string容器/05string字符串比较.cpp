#include<iostream>
using namespace std;
#include<string>

//string�ַ����Ƚ�
void test01()
{
	string str1 = "Hello";
	string str2 = "Hello";
	if (str1.compare(str2) == 0)
	{
		cout << "str1����str2��" << endl;
	}
	else if (str1.compare(str2) == 1)
	{
		cout << "str1����str2��" << endl;
	}
	else
	{
		cout << "str1С��str2��" << endl;
	}
}

int main()
{
	test01();

	system("pause");

	return 0;
}
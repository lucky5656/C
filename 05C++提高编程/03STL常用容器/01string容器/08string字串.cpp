#include<iostream>
using namespace std;
#include<string>

//string�ִ�
void test01()
{
	string str = "abcdefg";

	string subStr = str.substr(1, 3);
	cout << "subStr = " << subStr << endl;
}

//ʵ�ò���
void test02()
{
	string email = "zhangsan@sina.com";

	//�������ַ�л�ȡ�û���Ϣ
	int pos = email.find("@");  //pos = 8
	string usrName = email.substr(0, pos);
	cout << "usrName��" << usrName << endl;
}

int main()
{
	test01();
	test02();

	system("pause");

	return 0;
}
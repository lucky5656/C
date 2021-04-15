#include<iostream>
using namespace std;
#include<string>

//string字串
void test01()
{
	string str = "abcdefg";

	string subStr = str.substr(1, 3);
	cout << "subStr = " << subStr << endl;
}

//实用操作
void test02()
{
	string email = "zhangsan@sina.com";

	//从邮箱地址中获取用户信息
	int pos = email.find("@");  //pos = 8
	string usrName = email.substr(0, pos);
	cout << "usrName：" << usrName << endl;
}

int main()
{
	test01();
	test02();

	system("pause");

	return 0;
}
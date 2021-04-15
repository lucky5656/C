#include<iostream>
using namespace std;
#include<string>

//pair对组的创建

void test01()
{
	//第一种方式
	pair<string, int>p1("Tom", 20);
	 
	cout << "姓名：" << p1.first << "      年龄：" << p1.second << endl;

	//第二种方式
	pair<string, int>p2 = make_pair("Jerry", 30);
	cout << "姓名：" << p2.first << "    年龄：" << p2.second << endl;
}

int main()
{
	test01();

	system("pause");

	return 0;
}
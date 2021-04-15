#include<iostream>
using namespace std;
#include<string>

//string查找和替换
//1. 查找
void test01()
{
	string str1 = "abcdefgde";
	//find和rfind的区别：rfind从右往左查找，find从左往右查找
	//find
	int pos = str1.find("de");
	if (pos == -1)
	{
		cout << "未找到字符串！" << endl;
	}
	else
	{
		cout << "利用find找到字符串，pos = " << pos << endl;
	}

	//rfind
	pos = str1.rfind("de");
	if (pos == -1)
	{
		cout << "未找到字符串！" << endl;
	}
	else
	{
		cout << "利用rfind找到字符串，pos = " << pos << endl;
	}
}

//2. 替换
void test02()
{
	string str1 = "abcdefg";
	str1.replace(1, 3, "1111");  //从1号位置起的3个字符替换为"1111"
	cout << "str1 = " << str1 << endl;
	
}

int main()
{
	test01();
	test02();

	system("pause");

	return 0;
}
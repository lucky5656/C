#include<iostream>
using namespace std;
#include<functional>  //内建函数对象头文件

//算数仿函数：
//1. negate 一元仿函数 取反仿函数
void test01()
{
	negate<int>n;
	cout << n(50) << endl;
}

//2. plus 二元仿函数 加法
void test02()
{
	plus<int>p;
	cout << p(10,20) << endl;
}

int main()
{
	test01();
	test02();

	system("pause");

	return 0;
}
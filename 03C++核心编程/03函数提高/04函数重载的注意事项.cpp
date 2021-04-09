#include<iostream>
using namespace std;

//函数重载的注意事项
//1. 引用作为重载的条件
void func(int &a)  //int &a = 10;不合法
{
	cout << "func(int &a)的调用！" << endl;
}

void func(const int &a)  //const int &a = 10;合法
{
	cout << "func(const int &a)的调用！" << endl;
}

//2. 默认重载碰到默认参数
void func2(int a, int b = 10)
{
	cout<<"func2(int a)的调用！" << endl;
}

void func2(int a)
{
	cout << "func2(int a)的调用！" << endl;
}

int main()
{
	int a = 10;  //变量a是一个可读可写的对象
	func(a);  //调用第一个func()函数
	func(10);  //调用第二个func()函数

	//func2(10);  //当函数重载碰到默认参数，会出现二义性，运行报错，尽量避免这种情况
	func2(10, 20);

	system("pause");

	return 0;
}
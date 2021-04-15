#include<iostream>
using namespace std;

//函数模板

//两个整型交换函数
void swapInt(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

//两个浮点型交换函数
void swapInt(double &a, double &b)
{
	double temp = a;
	a = b;
	b = temp;
}

void test01()
{
	int a = 10;
	int b = 20;
	swap(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	double c = 1.1;
	double d = 2.2;
	swap(c, d);
	cout << "c = " << c << endl;
	cout << "d = " << d << endl;
}

//函数模板
template<typename T>  //声明一个模板，告诉编译器后面的代码中紧跟着的T不要报错，T是一个通用数据类型
void mySwap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

void test02()
{
	//利用函数模板交换，有两种方式使用函数模板：
	//1. 自动类型推导
	int a = 10;
	int b = 20;
	mySwap(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	//2. 显示指定类型
	double c = 1.1;
	double d = 2.2;
	mySwap<double>(c, d);
	cout << "c = " << c << endl;
	cout << "d = " << d << endl;

}

int main()
{
	test01();

	test02();

	system("pause");

	return 0;
}
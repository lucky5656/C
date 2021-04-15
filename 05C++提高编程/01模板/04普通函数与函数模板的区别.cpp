#include<iostream>
using namespace std;

//普通函数与函数模板的区别
//1. 普通函数调用时可以发生自动类型转换（隐式类型转换）；
//2. 函数模板调用时，如果利用自动类型推导，不会发生隐式类型转换；
//3. 函数模板调用时，如果利用显示指定类型的方式，可以发生隐式类型转换。

//普通函数
int myAdd01(int a, int b)
{
	return a + b;
}

//函数模板
template<class T>
T myAdd02(T a, T b)
{
	return a + b;
}

void test01()
{
	int a = 10;
	int b = 20;
	char c = 'c';
	cout << myAdd01(a, b) << endl;
	cout << myAdd01(a, c) << endl;  //结果为109，将字符c转换为对应的ASCII码99（隐式地转化为整型），进行相加

	//自动类型推导：不会发生隐式类型转换
	cout << myAdd02(a, b) << endl;
	//cout << myAdd02(a, c) << endl;  //错误

	//显示指定类型：会发生隐式类型转换
	cout << myAdd02<int>(a, b) << endl;
	cout << myAdd02<int>(a, c) << endl;
}

int main()
{
	test01();

	system("pause");

	return 0;
}
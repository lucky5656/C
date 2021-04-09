#include<iostream>
using namespace std;

//交换函数
//1. 值传递
void mySwap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;

	cout << "值传递：" << endl;
	cout << "swap01  a = " << a << endl;
	cout << "swap01  b = " << b << endl;
}

//2. 地址传递
void mySwap02(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;

	cout << "地址传递：" << endl;
	cout << "swap02  *a = " << *a << endl;
	cout << "swap02  *b = " << *b << endl;
}

//3. 引用传递
void mySwap03(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;

	cout << "引用传递：" << endl;
	cout << "swap03  a = " << a << endl;
	cout << "swap03  b = " << b << endl;
}

int main()
{
	int a1 = 10;
	int b1 = 20;
	mySwap01(a1, b1);  //值传递，形参不会修饰实参
	cout << "a1 = " << a1 << endl;
	cout << "b1 = " << b1 << endl;

	int a2 = 10;
	int b2 = 20;
	mySwap02(&a2, &b2);  //地址传递，形参会修饰实参
	cout << "a2 = " << a2 << endl;
	cout << "b2 = " << b2 << endl;

	int a3 = 10;
	int b3 = 20;
	mySwap03(a3, b3);  //引用传递，形参会修饰实参
	cout << "a3 = " << a3 << endl;
	cout << "b3 = " << b3 << endl;

	system("pause");

	return 0;
}
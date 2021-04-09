#include<iostream>
using namespace std;

//函数的声明
//比较函数，实现两个整型数字进行比较，返回较大的值

//函数的声明：提前告诉编译器函数的存在
int max(int a, int b);

int main()
{

	int a = 10;
	int b = 20;
	cout << max(a, b) << endl;

	system("pause");

	return 0;
}

//函数的定义
int max(int a, int b)  //函数的定义在main()函数之后，一定要在之前进行声明，否则会报错
{
	return a > b ? a : b;
}
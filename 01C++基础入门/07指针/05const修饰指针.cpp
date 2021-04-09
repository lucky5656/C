#include<iostream>
using namespace std;

int main()
{

	//const修饰指针
	//1.const修饰指针——常量指针
	int a = 10;
	int b = 10;

	const int * p1 = &a;
	//指针指向的值不可以修改，指针的指向可以修改
	//* p1 = 100;  //错误
	p1 = &b;

	//2.const修饰常量
	//指针的指向不可以修改，指针指向的值可以修改
	int * const p2 = &a;
	*p2 = 100;
	//p2 = &b;  //错误

	//3.const既修饰指针，又修饰常量
	const int * const p3 = &a;
	//指针的指向不可以修改，指针指向的值也不可以修改
	//*p3 = 100;  //错误
	//p3 = &b;  //错误

	system("pause");

	return 0;
}
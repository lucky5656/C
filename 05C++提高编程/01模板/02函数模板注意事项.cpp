#include<iostream>
using namespace std;

//函数模板注意事项

//1. 自动类型推导，必须推导出一致的数据类型T，才可以使用
//template<typename T>  //typename可以替换为class
template<class T>
void mySwap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

void test01()
{
	int a = 10;
	int b = 20;
	char c = 'c';
	mySwap(a, b);  //正确
	//mySwap(a, c);  //错误，推导不出一致的T类型
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}

//2. 模板必须要确定出T的数据类型，才可以使用
template<class T>
void func()
{
	cout << "func的调用！" << endl;
}
void test02()
{
	//func();  //错误，没有确定T的数据类型
	func<int>();  //正确
}

int main()
{
	test01();

	test02();

	system("pause");

	return 0;
}
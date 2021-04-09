#include<iostream>
using namespace std;

//引用做函数的返回值
//1. 不要返回局部变量的引用
int& test01()
{
	int a = 10;  //局部变量存放在四区的栈区
	return a;
}

//2. 函数的调用可以作为左值
int& test02()
{
	static int a = 10;  //静态变量存放在全局区，全局区的数据在程序结束后系统释放
	return a;
}

int main()
{
	int &ref1 = test01();
	cout << "ref1 = " << ref1 << endl;  //第一次结果正确，因为编译器做了保留
	cout << "ref1 = " << ref1 << endl;  //第二次结果错误，因为a的内存已释放
	 
	int &ref2 = test02();  //ref2本质上就是函数test02()的返回值a的别名
	cout << "ref2 = " << ref2 << endl; 
	cout << "ref2 = " << ref2 << endl;  
	cout << "ref2 = " << ref2 << endl;

	test02() = 1000;  //如果函数的返回值是引用，这个函数的调用可以作为左值
	cout << "ref2 = " << ref2 << endl;
	cout << "ref2 = " << ref2 << endl;

	system("pause");

	return 0;
}
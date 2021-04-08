#include<iostream>
using namespace std;

//打印数据函数
void showValue(const int &val)
{
	//val = 1000;  //加了const之后，在函数内部就不能修改val变量的值
	cout << "val = " << val << endl;
}

int main()
{
	//常量引用
	//使用场景：用来修饰形参，防止误操作

	//int& ref = 10;  //错误，引用本身需要一个合法的内存空间
	//加上const之后，编译器优化代码为 int temp = 10; const int & ref = temp;
	const int& ref = 10;  //引用必须引一块合法的内存空间
	//ref = 20;  //加入const之后变为只读，不可以修改

	int a = 100;  
	showValue(a);

	system("pause");

	return 0;
}
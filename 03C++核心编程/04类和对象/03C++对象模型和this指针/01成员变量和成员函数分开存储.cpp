#include<iostream>
using namespace std;

//成员变量和成员函数分开存储

class Person
{
	int m_A;  //非静态成员变量属于类的对象上，占4个内存

	static int m_B;  //静态成员变量不属于类的对象上，不占内存

	void func(){}  //非静态成员函数不属于类的对象上，不占内存

	static void func2() {}  //静态成员函数不属于类的对象上，不占内存
};

void test01()
{
	Person p;
	//空对象占用的内存空间为：1
	//C++编译器会给每个空对象也分配一个字节空间，是为了区分空对象占内存的位置，每个空对象也应该有一个独一无二的内存地址
	cout << "size of p = " << sizeof(p) << endl;
}

void test02()
{
	Person p;
	cout << "size of p = " << sizeof(p) << endl;
}

int main()
{
	//test01();
	test02();

	system("pause");

	return 0;
}
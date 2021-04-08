#include<iostream>
using namespace std;

//静态成员函数
//所有对象共享同一个函数
//静态成员函数只能访问静态成员变量

class Person
{
public:
	//静态成员函数
	static void func1()
	{
		m_A = 100;  //静态成员函数可以访问静态成员变量，因为m_A是共享的，不需要区分
		//m_B = 200;  //静态成员函数可以访问非静态成员变量，无法区分到底是哪一个对象的m_B属性
		cout << "static void func1的调用！" << endl;
	}

	static int m_A;  //静态成员变量
	int m_B;  //非静态成员变量

	//静态成员函数也是有访问权限的
private:
	static void func2()
	{
		cout << "static void func2的调用！" << endl;
	}
};

int Person::m_A = 0;

//静态成员函数有两种访问方式：
void test01()
{
	//1.通过对象访问
	Person p;
	p.func1();

	//2.通过类名访问（原因是所有对象共享同一个函数，它不属于某一个对象，所以不需要创建对象也可以进行访问）
	Person::func1();
	//Person::func2();  //类外访问不到私有的静态成员函数
}

int main()
{
	test01();

	system("pause");

	return 0;
}
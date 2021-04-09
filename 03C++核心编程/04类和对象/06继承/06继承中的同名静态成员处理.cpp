#include<iostream>
using namespace std;

//继承中的同名静态成员处理
class Base
{
public:
	static int m_A;

	static void func()
	{
		cout << "Base - static void func()调用！" << endl;
	}
	static void func(int a)
	{
		cout << "Base - static void func(int a)调用！" << endl;
	}
};
int Base::m_A = 100;

class  Son :public Base
{
public:
	static int m_A;

	static void func()
	{
		cout << "Son - static void func()调用！" << endl;
	}
};
int Son::m_A = 200;

//同名静态成员属性处理
void test01()
{
	//1. 通过对象访问
	cout << "通过对象访问：" << endl;
	Son s;
	cout << "Son中的m_A = " << s.m_A << endl;  //直接访问的是子类的同名静态成员属性
	cout << "Base中的m_A = " << s.Base::m_A << endl;   //加父类作用域访问的是父类的同名静态成员属性

	//2. 通过类名访问
	cout << "通过类名访问：" << endl;
	cout << "Son中的m_A = " << Son::m_A << endl;
	cout << "Base中的m_A = " << Son::Base::m_A << endl;  //第一个::是指通过类名访问数据；第二个::是指访问父类作用域下的数据
}

//同名静态成员函数处理
void test02()
{
	//1. 通过对象访问
	cout << "通过对象访问：" << endl;
	Son s;
	s.func();  //直接调用的是子类的同名静态成员函数
	s.Base::func();  //加父类作用域调用的是父类的同名静态成员函数
	s.Base::func(100);

	//2. 通过类名访问
	cout << "通过类名访问：" << endl;
	Son::func();
	Son::Base::func();
	Son::Base::func(100);
}

int main()
{
	test01();
	test02();

	system("pause");

	return 0;
}
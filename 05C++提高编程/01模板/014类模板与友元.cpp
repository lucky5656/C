#include<iostream>
using namespace std;
#include<string>

//类模板与友元

//通过全局函数去打印Person的信息

//提前让编译器指定Person类的存在
template<class T1, class T2>
class Person;

//如果全局函数是类外实现，需要让编译器提前知道这个函数的存在将类外实现放到最前面
template<class T1, class T2>
void printPerson2(Person<T1, T2> p)  //因为是全局函数，不需要加作用域
{
	cout << "类外实现： 姓名：" << p.m_Name << "    年龄：" << p.m_Age << endl;
}

template<class T1, class T2>
class Person
{
	//全局函数类内实现
	friend void printPerson1(Person<T1, T2> p)  //利用参数模板化的方式传入参数
	{
		cout << "类内实现： 姓名：" << p.m_Name << "      年龄：" << p.m_Age << endl;
	}
	//全局函数类外实现
	//如果全局函数是类外实现，需要让编译器提前知道这个函数的存在
	friend void printPerson2<>(Person<T1, T2> p);  //需要加一个空模板的参数列表，将其声明为函数模板

public:
	Person(T1 name, T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

private:
	T1 m_Name;
	T2 m_Age;
};

//1. 全局函数在类内实现
void test01()
{
	Person<string, int> p("Tom", 20);
	printPerson1(p);
}

//2. 全局函数在类外实现
void test02()
{
	Person<string, int> p("Jerry", 22);
	printPerson2(p);
}

int main()
{
	test01();
	test02();

	system("pause");

	return 0;
}
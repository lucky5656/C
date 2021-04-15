#include<iostream>
using namespace std;

//类模板中成员函数创建时机
//类模板中成员函数在调用时才去创建

class Person1
{
public:
	void showPerson1()
	{
		cout << "Person1 show" << endl;
	}
};

class Person2
{
public:
	void showPerson2()
	{
		cout << "Person2 show" << endl;
	}
};

template<class T>
class MyClass
{
public:
	T obj;

	//类模板中的成员函数（不调用时，不会被创建，因为obj无法确定数据类型，只有当我么们调用的时候，才能确定T的数据类型）
	void func1()
	{
		obj.showPerson1();
	}

	void func2()
	{
		obj.showPerson2();
	}
};

void test01()
{
	MyClass<Person1> m1; 
	m1.func1();  //Person1中只有showPerson1的成员函数，当类模板的数据类型确定为Person1时，只能调用func1

	MyClass<Person2> m2;
	m2.func2();  //Person2中只有showPerson2的成员函数，当类模板的数据类型确定为Person2时，只能调用func1
}

int main()
{
	test01();

	system("pause");

	return 0;
}
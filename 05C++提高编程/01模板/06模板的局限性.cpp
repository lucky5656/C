#include<iostream>
using namespace std;

//模板的局限性
//模板的通用性并不是万能的

class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	//姓名
	string m_Name;
	//年龄
	int m_Age;
};

//对比两个数据是否是相等函数
template<class T>
bool myCompare(T &a, T &b)
{
	if (a == b)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//利用具体化Person的版本实现代码，具体化优先调用
template<> bool myCompare(Person &p1, Person &p2)
{
	if (p1.m_Name == p2.m_Name && p1.m_Age == p2.m_Age)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void test01()
{
	int a = 10;
	int b = 20;

	bool ret = myCompare(a, b);
	if (ret)
	{
		cout << "a和b相等！" << endl;
	}
	else
	{
		cout << "a和b不相等！" << endl;
	}
}

void test02()
{
	Person p1("Tom", 10);
	Person p2("Tom", 10);

	bool ret = myCompare(p1, p2);
	if (ret)
	{
		cout << "p1和p2相等！" << endl;
	}
	else
	{
		cout << "p1和p2不相等！" << endl;
	}
}

int main()
{
	test01();

	test02();

	system("pause");

	return 0;
}
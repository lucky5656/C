#include<iostream>
using namespace std;

//空指针调用成员函数
class Person
{
public:
	void showClassName()
	{
		cout << "This is Person class!" << endl;
	}

	void showPersonAge()
	{
		if (this == NULL)  //用到this指针，需要加以判断保证代码的健壮性
		{
			return;
		}
		cout << "age = " << this->m_Age << endl;   //直接输出是错误的，因为传入的指针为NULL，要加判断
	}
	int m_Age;
};

void test01()
{
	Person *p = NULL;

	p->showClassName();  //空指针也可以调用成员函数

	p->showPersonAge();
}

int main()
{
	test01();

	system("pause");

	return 0;
}
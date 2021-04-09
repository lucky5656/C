#include<iostream>
using namespace std;

//继承中的构造与析构顺序
class Base
{
public:
	Base()
	{
		cout << "Base的构造函数！" << endl;
	}
	~Base()
	{
		cout << "Base的析构函数！" << endl;
	}
};

class  Son :public Base
{
public:
	Son()
	{
		cout << "Son的构造函数！" << endl;
	}
	~Son()
	{
		cout << "Son的析构函数！" << endl;
	}
};

void test01()
{
	//Base b;
	Son s;  //继承中的构造和析构顺序：先构造父类，再构造子类，析构的顺序和构造相反
}

int main()
{
	test01();

	system("pause");

	return 0;
}
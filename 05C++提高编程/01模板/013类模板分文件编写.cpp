#include<iostream>
using namespace std;

//类模板分文件编写的问题：类模板中成员函数创建时机是在调用阶段，导致分文件编写时链接不到。

//#include"013person.cpp"  // 第一种解决方式，直接包含.cpp源文件

//第二种解决方式，将.h和.cpp中的内容写到一起，将后缀名改为.hpp文件
#include"013person.hpp" 

void test01()
{
	Person<string, int> p("Tom", 20);
	p.showPerson();
}

int main()
{
	test01();

	system("pause");

	return 0;
}
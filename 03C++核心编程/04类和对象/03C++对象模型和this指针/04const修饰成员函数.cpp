#include<iostream>
using namespace std;

//const修改成员函数

//常函数
class Person
{
public:
	//this指针的本质是指针常量，指针的方向是不可以修改的
	//const Person *const this; 值和指向都不可修改
	void showPerson() const  //在成员函数后面加const，修饰的是this指针，说明this指针指针指向的值也不可以修改
	{
		//this->m_A = 100;  //错误，this指针不可以修改指针指向的值
		//this = NULL;  //错误，this指针不可以修改指针的指向，只能指向p
		this->m_B = 100;  //this指针可以修改加关键字mutable的变量
	}

	void func()  //普通函数
	{
		m_A = 100;
	}

	int m_A;
	mutable int m_B;   //特殊变量，即使在常函数中，也可以修改这个值，加关键字mutable                       
};

void test01()
{
	Person p;
	p.showPerson();  
}

//常对象
void test02()
{
	const Person p;  //在对象前加const，变为常对象
	//p.m_A = 100;  //错误，常对象不允许修改普通的成员变量
	p.m_B = 100;  //m_B是特殊向量，在常对象下也可以修改

	//常对象只能调用常函数
	p.showPerson();
	//p.func();   //错误，常对象不能调用普通成员函数，因为普通成员函数可以修改成员变量的属性，而常对象不允许修改成员变量的属性
}

int main()
{
	test01();

	system("pause");

	return 0;
}
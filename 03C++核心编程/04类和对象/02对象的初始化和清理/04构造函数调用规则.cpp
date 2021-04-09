#include<iostream>
using namespace std;

//构造函数的调用规则
//1.创建一个类，C++编译器会给每个类都添加至少3个函数
// 默认构造（空实现）
// 析构函数（空实现）
// 拷贝构造函数（值拷贝）

class Person
{
public:
	//构造函数
	Person()
	{
		cout << "Person的默认构造函数的调用！" << endl;
	}
	Person(int age)
	{
		m_Age = age;
		cout << "Person的有参构造函数的调用！" << endl;
	}
	//Person(const Person &p)
	//{
	//	m_Age = p.m_Age;
	//	cout << "person的拷贝构造函数的调用！" << endl;
	//}

	//析构函数  
	~Person()
	{
		cout << "Person的析构函数的调用！" << endl;
	}

	int m_Age;
};

void test01()
{
	Person p;  //1.打印 Person的默认构造函数的调用！  //3.打印 Person的析构函数的调用！
	p.m_Age = 18; 

	Person p2(p);  //4.打印 Person的析构函数的调用！（注：因为把拷贝构造函数注释掉了，编译器会自己提供一个拷贝函数进行值传递，但不会打印“Person的拷贝构造函数的调用！”了）

	cout << "p2的年龄：" << p2.m_Age << endl;  //2.打印 p2的年龄：18
}

//void test02()
//{
//	//如果我们写了有参构造函数，编译器就不再提供默认构造函数，依然会提供拷贝构造函数
//	Person p3;  //如果只留下自己写的有参构造函数，把默认构造函数注释掉，则会报错，因为编译器也不会提供
//	Person p4(28);  ////用户提供的有参构造函数
//	Person p5(p4);  //如果只留下自己写的有参构造函数，把拷贝构造函数注释掉，可以正常运行，因为编译器会提供
//
//	cout << "p5的年龄：" << p5.m_Age << endl;
//
//	//如果我们写了拷贝构造函数，编译器就不再提供其他普通构造函数了
//	Person p6;  //如果只留下自己写的拷贝构造函数，把默认构造函数注释掉，则会报错，因为编译器也不会提供
//	Person p7(20); //如果只留下自己写的拷贝构造函数，把有参构造函数注释掉，则会报错，因为编译器也不会提供
//	Person p8(p7); //用户自己提供的拷贝构造函数
//}

int main()
{
	test01();
	//test02();

	system("pause");

	return 0;
}
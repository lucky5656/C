#include<iostream>
using namespace std;
#include<string>

//类模板与继承，需要注意两点
template<class T>
class Base
{
	T m;
};

//1. 当子类继承的父类是一个类模板时，子类在声明的时候，要指定出父类中T的类型，如果不指定，编译器无法给子类分配内存；
//class Son:public Base  //错误，必须要知道父类中的T类型，才能继承给子类
class Son:public Base<int>
{

};

void test01()
{
	Son s1;
}

//2. 如果想灵活指定出父类中T的类型，子类也需变为类模板。
template<class T1, class T2>
class Son2 :public Base<T2>
{
public:
	Son2()
	{
		cout << "T1的类型为：" << typeid(T1).name() << endl;
		cout << "T2的类型为：" << typeid(T2).name() << endl;
	}
	T1 obj;
};

void test02()
{
	Son2<int, char> s2;  //T1为int类型，给子类；T2为char类型，给父类
}

int main()
{
	test01();
	test02();

	system("pause");

	return 0;
}
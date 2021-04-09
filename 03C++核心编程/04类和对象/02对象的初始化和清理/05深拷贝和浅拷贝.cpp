#include<iostream>
using namespace std;

//深拷贝和浅拷贝

class Person
{
public:
	//构造函数
	Person()
	{
		cout << "Person的默认构造函数的调用！" << endl;
	}
	Person(int age, int height)
	{
		m_Age = age;
		m_Height = new int(height);  //利用new操作符在堆区开辟数据
		cout << "Person的有参构造函数的调用！" << endl;
	}

	//浅拷贝带来的问题是堆区的内存重复释放，要利用深拷贝来解决此问题
	//自己实现拷贝构造函数解决浅拷贝带来的问题
	Person(const Person &p)
	{
		cout << "Person的拷贝构造函数的调用！" << endl;
		m_Age = p.m_Age;
		//m_Height = p.m_Height;  //编译器默认实现就是这行代码
		//深拷贝操作
		m_Height = new int(*p.m_Height);
	}

	//析构函数  
	~Person()
	{
		//析构函数代码将堆区开辟数据做释放操作
		if (m_Height != NULL) 
		{
			delete m_Height;
			m_Height = NULL;
		}
		cout << "Person的析构函数的调用！" << endl;
	}

	int m_Age;  //年龄
	int *m_Height;  //身高
};

void test01()
{
	Person p1(18, 160);  //1.打印 Person的有参构造函数的调用！  //5.打印 Person的析构函数的调用！
	cout << "p1的年龄：" << p1.m_Age << "    p1的身高：" << *p1.m_Height << endl;  //2.打印 p1的年龄：18    p1的身高：160

	Person p2(p1);  //3.打印 Person的拷贝构造函数的调用！//6.打印 Person的析构函数的调用！
	cout << "p2的年龄：" << p2.m_Age << "    p2的身高：" << *p2.m_Height << endl;  //4.打印 p2的年龄：18    p1的身高：160
}

int main()
{
	test01();

	system("pause");

	return 0;
}
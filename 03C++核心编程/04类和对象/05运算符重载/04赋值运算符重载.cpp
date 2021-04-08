//#include<iostream>
//using namespace std;
//
////赋值运算符重载
//
//class Person
//{
//public:
//	Person(int age)
//	{
//		m_Age = new int(age);  //new int返回的是int *，将年龄的真实数据开辟到堆区
//	}
//	~Person()
//	{
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//	}
//	//重载赋值运算符：因为编译器提供的赋值运算符是一个浅拷贝的操作，如果我们有属性创建在堆区，在运行析构代码时会出现堆区内存重复释放的问题
//	Person &operator=(Person &p)
//	{
//		//编译器是提供浅拷贝：m_Age = p.m_Age;
//
//		//应该先判断是否有属性在堆区，如果有先释放干净，然后再深拷贝
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//
//		//深拷贝
//		m_Age = new int(*p.m_Age);
//
//		return *this;  //返回对象本身（为了实现连等的操作）
//	}
//
//	int *m_Age;
//};
//
//void test01()
//{
//	Person p1(18);
//	Person p2(20);
//	Person p3(30);
//
//	p3 = p2 = p1;  //赋值操作
//
//	cout << "p1的年龄为：" << *p1.m_Age << endl;
//	cout << "p2的年龄为：" << *p2.m_Age << endl;
//	cout << "p3的年龄为：" << *p3.m_Age << endl;
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//
//	return 0;
//}
//#include<iostream>
//using namespace std;
//
////继承中的同名成员处理
//class Base
//{
//public:
//	Base()
//	{
//		m_A = 100;
//	}
//	void func()
//	{
//		cout << "Base - func()调用！" << endl;
//	}
//	void func(int a)
//	{
//		cout << "Base - func(int a)调用！" << endl;
//	}
//
//	int m_A = 100;
//};
//
//class  Son :public Base
//{
//public:
//	Son()
//	{
//		m_A = 200;
//	}
//	void func()
//	{
//		cout << "Son - func()调用！" << endl;
//	}
//	int m_A;
//};
//
////同名成员属性处理
//void test01()
//{
//	//Base b;
//	Son s;  
//	cout << "Son中的m_A = " << s.m_A << endl;  //直接访问的是子类的同名成员属性
//	cout << "Base中的m_A = " << s.Base::m_A << endl;   //加父类作用域访问的是父类的同名成员属性
//}
//
////同名成员函数处理
//void test02()
//{
//	Son s;
//	s.func();  //直接调用的是子类的同名成员函数
//	s.Base::func();  //加父类作用域调用的是父类的同名成员函数
//	s.Base::func(100);  //如果子类中出现和父类同名的成员函数，子类的同名成员会隐藏掉父类中的所有同名成员函数，如果想访问到父类中被隐藏的同名成员函数，需要加作用域
//}
//
//int main()
//{
//	test01();
//	test02();
//
//	system("pause");
//
//	return 0;
//}
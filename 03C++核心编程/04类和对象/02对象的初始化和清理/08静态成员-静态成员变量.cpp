//#include<iostream>
//using namespace std;
//
////静态成员变量
//
//class Person
//{
//public:
//	// 1. 所有对象共享同一份数据
//    // 2. 在编译阶段分配内存
//    // 3. 类内声明，类外初始化
//	static int m_A;  //类内声明
//
//	//静态成员变量也是有访问权限的
//private:
//	static int m_B;
//};
//
//int Person::m_A = 100;  //类外初始化
//int Person::m_B = 1000;
//
//void test01()
//{
//	Person p;
//	cout << p.m_A << endl;
//
//	Person p2;
//	p2.m_A = 200;
//	cout << p.m_A << endl;  //所有对象共享同一份数据，由于p2的修改，p也变为200
//}
//
//void test02()
//{
//	//静态成员变量不属于某个对象上，所有对象都共享同一份数据
//	//静态变量有两种访问方式：
//	// 1. 通过对象进行访问
//	Person p;
//	cout << p.m_A << endl;
//
//	// 2. 通过类名进行访问
//	cout << Person::m_A << endl;
//	//cout << Person::m_B << endl;  //私有权限，类外无法访问
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
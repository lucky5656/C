//#include<iostream>
//using namespace std;
//
////拷贝构造函数的调用时机：
////1.使用一个已经创建完毕的对象来初始化一个新对象
////2.值传递的方式给函数参数传值
////3.值方式返回局部对象
//
//class Person
//{
//public:
//	//构造函数
//	Person()
//	{
//		cout << "Person的默认构造函数的调用！" << endl;
//	}
//	Person(int age)
//	{
//		m_Age = age;
//		cout << "Person的有参构造函数的调用！" << endl;
//	}
//	//拷贝构造函数
//	Person(const Person &p)
//	{
//		m_Age = p.m_Age;
//		cout << "Person的拷贝构造函数的调用！" << endl;
//	}
//
//	//析构函数  
//	~Person()
//	{
//		cout << "Person的析构函数的调用！" << endl;
//	}
//
//	int m_Age;
//};
//
////1.使用一个已经创建完毕的对象来初始化一个新对象
//void test01()
//{
//	Person p1(20);  //1.打印 Person的有参构造函数的调用！  //4.打印 Person的析构函数的调用！
//	Person p2(p1);  //2.打印 Person的拷贝构造函数的调用！  //5.打印 Person的析构函数的调用！
//	cout << "p2的年龄：" << p2.m_Age << endl;   //3.打印 p2的年龄：20
//}
//
////2.值传递的方式给函数参数传值
//void doWork1(Person p)
//{
//
//}
//void test02()
//{
//	Person p;  //默认构造函数  //6.打印 Person的默认构造函数的调用！  //8.打印 Person的析构函数的调用！
//	doWork1(p);  //拷贝构造函数  //7.打印 Person的拷贝构造函数的调用！  //9.打印 Person的析构函数的调用！
//}
//
////3.值方式返回局部对象
//Person doWork2()
//{
//	Person p1;  //10.打印 Person的默认构造函数的调用！  //13.打印 Person的析构函数的调用！（注：析构的是p1，p1是一个局部变量，当doWork2()执行完时就会释放）
//	cout << (int*)&p1 << endl;  //11.打印 00F5F610
//	return p1;   
//	            //12.打印 Person的拷贝构造函数的调用！（注：Person调用一个拷贝构造函数p'，给test03()中的p）
//}
//void test03()
//{
//	Person p = doWork2();  //15.打印 Person的析构函数的调用！
//	cout << (int*)&p << endl;  //14.打印 00F5F708（注：两个p的地址不同，不是同一个对象）
//}                              
//
//int main()
//{
//	test01();
//	test02();
//	test03();
//
//	system("pause");
//
//	return 0;
//}
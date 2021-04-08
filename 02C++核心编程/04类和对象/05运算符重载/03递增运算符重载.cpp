//#include<iostream>
//using namespace std;
//
////递增运算符重载
//
////自定义整型
//class MyInteger
//{
//	friend ostream &operator<<(ostream &cout, MyInteger myint);
//
//public:
//	MyInteger()
//	{
//		m_Num = 0;
//	}
//
//	//重载前置++运算符
//	MyInteger &operator++()  //前置递增返回引用是为了一直对一个数据进行递增操作
//	{
//		m_Num++;  //先进行++运算
//		return *this;  //再将自身做一个返回
//	}
//
//	//重载后置++运算符
//	MyInteger operator++(int)  //int代表占位参数，可以用于区分前置和后置递增  //后置递增返回的是值
//	{
//		MyInteger temp = *this;//先记录当时结果
//		m_Num++;  //再进行递增
//		return temp;//最后将记录结果做一个返回
//	}
//
//private:
//	int m_Num;
//};
//
////全局函数重载左移运算符
//ostream &operator<<(ostream &cout, MyInteger myint)  //因为m_Num是私有的，所以需要友元技术
//{
//	cout << myint.m_Num;
//	return cout;
//}
//
//void test01()
//{
//	MyInteger myint;
//
//	//cout << ++myint << endl;  //必须重载左移运算符，因为输出的是自定义的对象，不知如何输出
//	cout << ++(++myint) << endl;
//	cout << myint << endl;
//}
//
//void test02()
//{
//	MyInteger myint;
//
//	cout << myint++ << endl;
//	cout << myint << endl;
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
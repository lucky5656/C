//#include<iostream>
//using namespace std;
//
////左移运算符重载
//class Person
//{
//	friend ostream &operator<<(ostream &cout, Person p);
//
//public:
//	Person(int a, int b)
//	{
//		m_A = a;
//		m_B = b;
//	}
//
//private:
//	//1. 成员函数重载左移运算符：p.operator<<(cout); 简化为 p<<cout;，和我们预期的效果不一样，所有通常不会利用成员函数重载左移运算符，因为无法实现cout在左侧。
//	//void operator<<(Person &p)
//	//{
//
//	//}
//	int m_A;  //一般写代码建议将成员属性私有化，但是后面会访问不到，所以可以利用友元来解决
//	int m_B;
//};
//
////2. 全局函数重载左移运算符
//ostream &operator<<(ostream &cout, Person p)  //本质：operator<<(cout, p); 简化为 cout<<p  //cout属于输出流ostream类型，要通过引用的方式传入cout，因为全局只能有一个
//{
//	cout << "    m_A = " << p.m_A << "    m_B = " << p.m_B;
//	return cout;  //返回cout（为了实现链式编程）
//}
//
//void test01()
//{
//	//Person p;  //因为将m_A和m_B私有化，类外访问不到
//	//p.m_A = 10;
//	//p.m_B = 10;
//
//	Person p(10, 10);
//
//	cout << p;
//	cout << p << "    Hello World!" << endl;  //在重载左移运算符函数中返回cout，就可以在后面追加<< "    Hello World!"和<<endl等操作
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
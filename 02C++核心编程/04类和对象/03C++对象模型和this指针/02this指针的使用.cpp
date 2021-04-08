//#include<iostream>
//using namespace std;
//
////this指针的使用
//class Person
//{
//public:
//	Person(int age)
//	{
//		this->age = age;  //this指针指向的是被调用的成员函数所属的对象
//	}
//
//	Person &PersonAddAge(Person &p)  //需要使用引用传递，p2.PersonAddAge(p1)才会一直返回p2；如果使用值传递，会创建新的对象，那么后面的叠加就变成了新的东西，不再是p2
//	{
//		this->age += p.age;
//		return *this;  //this是指向p2的指针，而*this指向的就是p2这个对象的本体
//	}
//
//	int age;
//};
//
////1. 解决名称冲突
//void test01()
//{
//	Person p1(18);
//	cout << "p1的年龄： " << p1.age << endl;
//}
//
////2.返回对象本身用 *this
//void test02()
//{
//	Person p1(10);
//
//	Person p2(10);
//
//	//链式编程思想
//	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);  //10再加三次10 = 40
//
//	cout << "p2的年龄： " << p2.age << endl;
//}
//
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
//#include<iostream>
//using namespace std;
//
////继承方式
//
////1. 公共继承
//class Base1
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//class Son1 :public Base1
//{
//public:
//	void func()
//	{
//		m_A = 10;  //父类中的公共权限成员,到子类中依然是公共权限成员
//		m_B = 10;  //父类中的保护权限成员,到子类中依然是保护权限成员
//		//m_C = 10;  //父类中的私有权限成员，子类中访问不到
//	}
//};
//
//void test01()
//{
//	Son1 s1;
//	s1.m_A = 100;  //在子类Son1中m_A是公共权限，类外可以访问
//	//s1.m_B = 100;  //在子类Son1中m_B是保护权限，类外访问不到
//}
//
////2. 保护继承
//class Base2
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//class Son2 :protected Base2
//{
//public:
//	void func()
//	{
//		m_A = 10;  //父类中的公共权限成员，到子类中变为保护权限成员
//		m_B = 10;  //父类中的保护权限成员，到子类中依然是保护权限成员
//		//m_C = 10;  //父类中的私有权限成员，子类中访问不到
//	}
//};
//
//void test02()
//{
//	Son2 s2;
//	//s2.m_A = 100;  //在子类Son2中m_A是保护权限，类外访问不到
//	//s2.m_B = 100;  //在子类Son2中m_B是保护权限，类外访问不到
//}
//
////3. 私有继承
//class Base3
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//class Son3 :private Base3
//{
//public:
//	void func()
//	{
//		m_A = 10;  //父类中的公共权限成员，到子类中变为私有权限成员
//		m_B = 10;  //父类中的保护权限成员，到子类中变为私有权限成员
//		//m_C = 10;  //父类中的私有权限成员，子类中访问不到
//	}
//};
//
//class GrandSon3 :public Son3
//{
//public:
//	void func()
//	{
//		//m_A = 10;  //父类Son3中的私有权限成员，子类GrandSon3中访问不到
//		//m_B = 10;  //父类Son3中的私有权限成员，子类GrandSon3中访问不到
//	}
//};
//
//void test03()
//{
//	Son3 s3;
//	//s3.m_A = 100;  //在子类Son3中m_A是私有权限，类外访问不到
//	//s3.m_B = 100;  //在子类Son3中m_B是私有权限，类外访问不到
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
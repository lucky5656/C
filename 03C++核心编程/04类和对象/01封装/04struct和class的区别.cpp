//#include<iostream>
//using namespace std;
//
//class C1
//{
//	int m_A;  //class的默认权限是私有private
//};
//
//struct C2
//{
//	int m_A;  //struct的默认权限是公共public
//};
//
//int main()
//{
//	//struct和class的区别：
//	//struct的默认权限是公共public； class的默认权限是私有private
//
//	C1 c1;
//	//c1.m_A = 100;  //错误，在class中默认权限是私有，因此类外不可以访问
//
//	C2 c2;
//	c2.m_A = 100;  //正确，在struct中默认权限是公共，因此类外可以访问
//
//	system("pause");
//
//	return 0;
//}
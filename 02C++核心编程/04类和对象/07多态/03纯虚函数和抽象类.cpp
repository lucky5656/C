//#include<iostream>
//using namespace std;
//
////���麯���ͳ�����
//class Base
//{
//public:
//	virtual void func() = 0;  //���麯����ĳ����ֻҪ��һ�����麯���������ͳ�Ϊ�����ࣩ
//	//�������ص㣺1. �޷�ʵ��������2. ����������������д�����еĴ��麯��������Ҳ���ڳ�����
//};
//
//class Son:public Base
//{
//public:
//	virtual void func() 
//	{
//		cout << "func�����ĵ��ã�" << endl;
//	}
//};
//
//void test01()
//{
//	//Base b;  //���󣬳������޷�ʵ��������
//	//new Base;  //���󣬳������޷�ʵ��������
//	//Son s;  //���������д�����еĴ��麯���������޷�ʵ��������
//
//	Base *base = new Son;
//	base->func();
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
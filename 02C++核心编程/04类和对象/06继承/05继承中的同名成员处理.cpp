//#include<iostream>
//using namespace std;
//
////�̳��е�ͬ����Ա����
//class Base
//{
//public:
//	Base()
//	{
//		m_A = 100;
//	}
//	void func()
//	{
//		cout << "Base - func()���ã�" << endl;
//	}
//	void func(int a)
//	{
//		cout << "Base - func(int a)���ã�" << endl;
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
//		cout << "Son - func()���ã�" << endl;
//	}
//	int m_A;
//};
//
////ͬ����Ա���Դ���
//void test01()
//{
//	//Base b;
//	Son s;  
//	cout << "Son�е�m_A = " << s.m_A << endl;  //ֱ�ӷ��ʵ��������ͬ����Ա����
//	cout << "Base�е�m_A = " << s.Base::m_A << endl;   //�Ӹ�����������ʵ��Ǹ����ͬ����Ա����
//}
//
////ͬ����Ա��������
//void test02()
//{
//	Son s;
//	s.func();  //ֱ�ӵ��õ��������ͬ����Ա����
//	s.Base::func();  //�Ӹ�����������õ��Ǹ����ͬ����Ա����
//	s.Base::func(100);  //��������г��ֺ͸���ͬ���ĳ�Ա�����������ͬ����Ա�����ص������е�����ͬ����Ա�������������ʵ������б����ص�ͬ����Ա��������Ҫ��������
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
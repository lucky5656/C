#include<iostream>
using namespace std;

//�̳��е�ͬ����̬��Ա����
class Base
{
public:
	static int m_A;

	static void func()
	{
		cout << "Base - static void func()���ã�" << endl;
	}
	static void func(int a)
	{
		cout << "Base - static void func(int a)���ã�" << endl;
	}
};
int Base::m_A = 100;

class  Son :public Base
{
public:
	static int m_A;

	static void func()
	{
		cout << "Son - static void func()���ã�" << endl;
	}
};
int Son::m_A = 200;

//ͬ����̬��Ա���Դ���
void test01()
{
	//1. ͨ���������
	cout << "ͨ��������ʣ�" << endl;
	Son s;
	cout << "Son�е�m_A = " << s.m_A << endl;  //ֱ�ӷ��ʵ��������ͬ����̬��Ա����
	cout << "Base�е�m_A = " << s.Base::m_A << endl;   //�Ӹ�����������ʵ��Ǹ����ͬ����̬��Ա����

	//2. ͨ����������
	cout << "ͨ���������ʣ�" << endl;
	cout << "Son�е�m_A = " << Son::m_A << endl;
	cout << "Base�е�m_A = " << Son::Base::m_A << endl;  //��һ��::��ָͨ�������������ݣ��ڶ���::��ָ���ʸ����������µ�����
}

//ͬ����̬��Ա��������
void test02()
{
	//1. ͨ���������
	cout << "ͨ��������ʣ�" << endl;
	Son s;
	s.func();  //ֱ�ӵ��õ��������ͬ����̬��Ա����
	s.Base::func();  //�Ӹ�����������õ��Ǹ����ͬ����̬��Ա����
	s.Base::func(100);

	//2. ͨ����������
	cout << "ͨ���������ʣ�" << endl;
	Son::func();
	Son::Base::func();
	Son::Base::func(100);
}

int main()
{
	test01();
	test02();

	system("pause");

	return 0;
}
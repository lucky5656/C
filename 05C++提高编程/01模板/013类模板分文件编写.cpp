#include<iostream>
using namespace std;

//��ģ����ļ���д�����⣺��ģ���г�Ա��������ʱ�����ڵ��ý׶Σ����·��ļ���дʱ���Ӳ�����

//#include"013person.cpp"  // ��һ�ֽ����ʽ��ֱ�Ӱ���.cppԴ�ļ�

//�ڶ��ֽ����ʽ����.h��.cpp�е�����д��һ�𣬽���׺����Ϊ.hpp�ļ�
#include"013person.hpp" 

void test01()
{
	Person<string, int> p("Tom", 20);
	p.showPerson();
}

int main()
{
	test01();

	system("pause");

	return 0;
}
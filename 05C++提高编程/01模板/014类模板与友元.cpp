#include<iostream>
using namespace std;
#include<string>

//��ģ������Ԫ

//ͨ��ȫ�ֺ���ȥ��ӡPerson����Ϣ

//��ǰ�ñ�����ָ��Person��Ĵ���
template<class T1, class T2>
class Person;

//���ȫ�ֺ���������ʵ�֣���Ҫ�ñ�������ǰ֪����������Ĵ��ڽ�����ʵ�ַŵ���ǰ��
template<class T1, class T2>
void printPerson2(Person<T1, T2> p)  //��Ϊ��ȫ�ֺ���������Ҫ��������
{
	cout << "����ʵ�֣� ������" << p.m_Name << "    ���䣺" << p.m_Age << endl;
}

template<class T1, class T2>
class Person
{
	//ȫ�ֺ�������ʵ��
	friend void printPerson1(Person<T1, T2> p)  //���ò���ģ�廯�ķ�ʽ�������
	{
		cout << "����ʵ�֣� ������" << p.m_Name << "      ���䣺" << p.m_Age << endl;
	}
	//ȫ�ֺ�������ʵ��
	//���ȫ�ֺ���������ʵ�֣���Ҫ�ñ�������ǰ֪����������Ĵ���
	friend void printPerson2<>(Person<T1, T2> p);  //��Ҫ��һ����ģ��Ĳ����б���������Ϊ����ģ��

public:
	Person(T1 name, T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

private:
	T1 m_Name;
	T2 m_Age;
};

//1. ȫ�ֺ���������ʵ��
void test01()
{
	Person<string, int> p("Tom", 20);
	printPerson1(p);
}

//2. ȫ�ֺ���������ʵ��
void test02()
{
	Person<string, int> p("Jerry", 22);
	printPerson2(p);
}

int main()
{
	test01();
	test02();

	system("pause");

	return 0;
}
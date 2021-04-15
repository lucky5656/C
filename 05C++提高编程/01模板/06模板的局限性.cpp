#include<iostream>
using namespace std;

//ģ��ľ�����
//ģ���ͨ���Բ��������ܵ�

class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	//����
	string m_Name;
	//����
	int m_Age;
};

//�Ա����������Ƿ�����Ⱥ���
template<class T>
bool myCompare(T &a, T &b)
{
	if (a == b)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//���þ��廯Person�İ汾ʵ�ִ��룬���廯���ȵ���
template<> bool myCompare(Person &p1, Person &p2)
{
	if (p1.m_Name == p2.m_Name && p1.m_Age == p2.m_Age)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void test01()
{
	int a = 10;
	int b = 20;

	bool ret = myCompare(a, b);
	if (ret)
	{
		cout << "a��b��ȣ�" << endl;
	}
	else
	{
		cout << "a��b����ȣ�" << endl;
	}
}

void test02()
{
	Person p1("Tom", 10);
	Person p2("Tom", 10);

	bool ret = myCompare(p1, p2);
	if (ret)
	{
		cout << "p1��p2��ȣ�" << endl;
	}
	else
	{
		cout << "p1��p2����ȣ�" << endl;
	}
}

int main()
{
	test01();

	test02();

	system("pause");

	return 0;
}
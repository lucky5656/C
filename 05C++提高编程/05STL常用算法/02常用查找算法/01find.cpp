#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<string>

//���ò����㷨��find

//1. ����������������
void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	//�����������Ƿ���5���Ԫ��
	vector<int>::iterator it = find(v.begin(), v.end(), 5);
	if (it == v.end())
	{
		cout << "δ�ҵ�����5��Ԫ�أ�" << endl;
	}
	else
	{
		cout << "�ҵ�����5��Ԫ�أ�" << *it << endl;
	}
}

//2. �����Զ����������ͣ���������==��
class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	//����==ʹ�õײ�find֪����ζԱ�Person��������
	bool operator==(const Person &p)
	{
		if (this->m_Name == p.m_Name&&this->m_Age == p.m_Age)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	string m_Name;
	int m_Age;
};
void test02()
{
	vector<Person>v;

	//��������
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);

	//�ŵ�������
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	//�����������Ƿ���p2�����
	vector<Person>::iterator it = find(v.begin(), v.end(), p2);
	if (it == v.end())
	{
		cout << "δ�ҵ�p2��" << endl;
	}
	else
	{
		cout << "�ҵ�p2��������" << it->m_Name << "    ���䣺" << it->m_Age << endl;
	}
}

int main()
{
	test01();
	test02();

	system("pause");

	return 0;
}
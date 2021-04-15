#include<iostream>
using namespace std;
#include<map>
#include<string>

//map����

class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	string m_Name;
	int m_Age;
};

class compareMap
{
public:
	bool operator()(const Person p1, const Person p2)
	{
		return p1.m_Age > p2.m_Age;  //����
	}
};

void test01()
{
	map<Person, int, compareMap>m;

	//����Person����
	Person p1("����", 24);
	Person p2("����", 28);
	Person p3("�ŷ�", 25);
	Person p4("����", 21);

	m.insert(pair<Person, int>(p1, 1));
	m.insert(make_pair(p2, 2));
	m.insert(make_pair(p3, 3));
	m.insert(make_pair(p4, 4));

	for (map<Person, int, compareMap>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "��ţ� " << it->second << "    ���� " << it->first.m_Name <<"    ���䣺" << it->first.m_Age << endl;
	}
}

int main()
{
	test01();

	system("pause");

	return 0;
}
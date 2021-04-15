#include<iostream>
using namespace std;
#include<map>
#include<string>

//map排序

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
		return p1.m_Age > p2.m_Age;  //降序
	}
};

void test01()
{
	map<Person, int, compareMap>m;

	//创建Person对象
	Person p1("刘备", 24);
	Person p2("关羽", 28);
	Person p3("张飞", 25);
	Person p4("赵云", 21);

	m.insert(pair<Person, int>(p1, 1));
	m.insert(make_pair(p2, 2));
	m.insert(make_pair(p3, 3));
	m.insert(make_pair(p4, 4));

	for (map<Person, int, compareMap>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "序号： " << it->second << "    姓名 " << it->first.m_Name <<"    年龄：" << it->first.m_Age << endl;
	}
}

int main()
{
	test01();

	system("pause");

	return 0;
}
#include<iostream>
using namespace std;
#include<set>
#include<string>

//set容器的排序
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

class comparePerson
{
public:
	bool operator()(const Person p1, const Person p2)
	{
		return p1.m_Age > p2.m_Age;  //按年龄降序排列
	}
};

void test01()
{
	set<Person, comparePerson>s;

	//创建Person对象
	Person p1("刘备", 24);
	Person p2("关羽", 28);
	Person p3("张飞", 25);
	Person p4("赵云", 21);

	s.insert(p1);
	s.insert(p2);
	s.insert(p3);
	s.insert(p4);

	for (set<Person, comparePerson>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << "姓名：" << it->m_Name << "    年龄：" << it->m_Age << endl;
	}
}

int main()
{
	test01();

	system("pause");

	return 0;
}
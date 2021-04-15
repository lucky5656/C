#include<iostream>
using namespace std;
#include<vector>
#include<string>  

//vector存放自定义数据类型
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

void test01()
{
	vector<Person> v;

	Person p1("张三", 18);
	Person p2("李四", 20);
	Person p3("王五", 22);
	Person p4("赵六", 24);
	Person p5("赵四", 26);

	//向容器中添加数据
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	//遍历容器中的数据
	cout << "vector存放自定义数据类型：" << endl;
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		//cout << "姓名：" << (*it).m_Name << "    年龄：" << (*it).m_Age << endl;  //(*it)为Person类型
		cout << "姓名：" << it->m_Name << "    年龄：" << it->m_Age << endl;  //it相当于指针，可以通过->访问其属性
	}
}

//存放自定义数据类型的指针
void test02()
{
	vector<Person*> v;

	Person p1("张三", 18);
	Person p2("李四", 20);
	Person p3("王五", 22);
	Person p4("赵六", 24);
	Person p5("赵四", 26);

	//向容器中添加数据
	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);
	v.push_back(&p5);

	//遍历容器中的数据
	cout << "vector存放自定义数据类型的指针：" << endl;
	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "姓名：" << (*it)->m_Name << "    年龄：" << (*it)->m_Age << endl;  //(*it)相当于指针，可以通过->访问其属性
	}
}

int main()
{
	test01();
	test02();

	system("pause");

	return 0;
}
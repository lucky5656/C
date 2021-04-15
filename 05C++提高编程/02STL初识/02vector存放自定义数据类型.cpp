#include<iostream>
using namespace std;
#include<vector>
#include<string>  

//vector����Զ�����������
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

	Person p1("����", 18);
	Person p2("����", 20);
	Person p3("����", 22);
	Person p4("����", 24);
	Person p5("����", 26);

	//���������������
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	//���������е�����
	cout << "vector����Զ����������ͣ�" << endl;
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		//cout << "������" << (*it).m_Name << "    ���䣺" << (*it).m_Age << endl;  //(*it)ΪPerson����
		cout << "������" << it->m_Name << "    ���䣺" << it->m_Age << endl;  //it�൱��ָ�룬����ͨ��->����������
	}
}

//����Զ����������͵�ָ��
void test02()
{
	vector<Person*> v;

	Person p1("����", 18);
	Person p2("����", 20);
	Person p3("����", 22);
	Person p4("����", 24);
	Person p5("����", 26);

	//���������������
	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);
	v.push_back(&p5);

	//���������е�����
	cout << "vector����Զ����������͵�ָ�룺" << endl;
	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "������" << (*it)->m_Name << "    ���䣺" << (*it)->m_Age << endl;  //(*it)�൱��ָ�룬����ͨ��->����������
	}
}

int main()
{
	test01();
	test02();

	system("pause");

	return 0;
}
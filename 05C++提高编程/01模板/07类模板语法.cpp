#include<iostream>
using namespace std;
#include<string>

//类模板
template<class NameType, class AgeType>
class Person
{
public:
	Person(NameType name, AgeType age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	void showPerson()
	{
		cout << "name：" << this->m_Name << "    age：" << this->m_Age << endl;
	}

	//姓名
	NameType m_Name;
	//年龄
	AgeType m_Age;
};

void test01()
{
	Person<string, int> p1("孙悟空", 99);  //string是NameType;int是AgeType
	p1.showPerson();
}

int main()
{
	test01();

	system("pause");

	return 0;
}
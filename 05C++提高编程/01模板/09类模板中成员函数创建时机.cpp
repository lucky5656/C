#include<iostream>
using namespace std;

//��ģ���г�Ա��������ʱ��
//��ģ���г�Ա�����ڵ���ʱ��ȥ����

class Person1
{
public:
	void showPerson1()
	{
		cout << "Person1 show" << endl;
	}
};

class Person2
{
public:
	void showPerson2()
	{
		cout << "Person2 show" << endl;
	}
};

template<class T>
class MyClass
{
public:
	T obj;

	//��ģ���еĳ�Ա������������ʱ�����ᱻ��������Ϊobj�޷�ȷ���������ͣ�ֻ�е���ô�ǵ��õ�ʱ�򣬲���ȷ��T���������ͣ�
	void func1()
	{
		obj.showPerson1();
	}

	void func2()
	{
		obj.showPerson2();
	}
};

void test01()
{
	MyClass<Person1> m1; 
	m1.func1();  //Person1��ֻ��showPerson1�ĳ�Ա����������ģ�����������ȷ��ΪPerson1ʱ��ֻ�ܵ���func1

	MyClass<Person2> m2;
	m2.func2();  //Person2��ֻ��showPerson2�ĳ�Ա����������ģ�����������ȷ��ΪPerson2ʱ��ֻ�ܵ���func1
}

int main()
{
	test01();

	system("pause");

	return 0;
}
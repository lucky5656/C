#include<iostream>
using namespace std;

//const�޸ĳ�Ա����

//������
class Person
{
public:
	//thisָ��ı�����ָ�볣����ָ��ķ����ǲ������޸ĵ�
	//const Person *const this; ֵ��ָ�򶼲����޸�
	void showPerson() const  //�ڳ�Ա���������const�����ε���thisָ�룬˵��thisָ��ָ��ָ���ֵҲ�������޸�
	{
		//this->m_A = 100;  //����thisָ�벻�����޸�ָ��ָ���ֵ
		//this = NULL;  //����thisָ�벻�����޸�ָ���ָ��ֻ��ָ��p
		this->m_B = 100;  //thisָ������޸ļӹؼ���mutable�ı���
	}

	void func()  //��ͨ����
	{
		m_A = 100;
	}

	int m_A;
	mutable int m_B;   //�����������ʹ�ڳ������У�Ҳ�����޸����ֵ���ӹؼ���mutable                       
};

void test01()
{
	Person p;
	p.showPerson();  
}

//������
void test02()
{
	const Person p;  //�ڶ���ǰ��const����Ϊ������
	//p.m_A = 100;  //���󣬳����������޸���ͨ�ĳ�Ա����
	p.m_B = 100;  //m_B�������������ڳ�������Ҳ�����޸�

	//������ֻ�ܵ��ó�����
	p.showPerson();
	//p.func();   //���󣬳������ܵ�����ͨ��Ա��������Ϊ��ͨ��Ա���������޸ĳ�Ա���������ԣ��������������޸ĳ�Ա����������
}

int main()
{
	test01();

	system("pause");

	return 0;
}
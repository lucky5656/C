#include<iostream>
using namespace std;

//��̬��Ա����
//���ж�����ͬһ������
//��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����

class Person
{
public:
	//��̬��Ա����
	static void func1()
	{
		m_A = 100;  //��̬��Ա�������Է��ʾ�̬��Ա��������Ϊm_A�ǹ���ģ�����Ҫ����
		//m_B = 200;  //��̬��Ա�������Է��ʷǾ�̬��Ա�������޷����ֵ�������һ�������m_B����
		cout << "static void func1�ĵ��ã�" << endl;
	}

	static int m_A;  //��̬��Ա����
	int m_B;  //�Ǿ�̬��Ա����

	//��̬��Ա����Ҳ���з���Ȩ�޵�
private:
	static void func2()
	{
		cout << "static void func2�ĵ��ã�" << endl;
	}
};

int Person::m_A = 0;

//��̬��Ա���������ַ��ʷ�ʽ��
void test01()
{
	//1.ͨ���������
	Person p;
	p.func1();

	//2.ͨ���������ʣ�ԭ�������ж�����ͬһ����������������ĳһ���������Բ���Ҫ��������Ҳ���Խ��з��ʣ�
	Person::func1();
	//Person::func2();  //������ʲ���˽�еľ�̬��Ա����
}

int main()
{
	test01();

	system("pause");

	return 0;
}
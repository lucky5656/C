#include<iostream>
using namespace std;

//�����ǳ����

class Person
{
public:
	//���캯��
	Person()
	{
		cout << "Person��Ĭ�Ϲ��캯���ĵ��ã�" << endl;
	}
	Person(int age, int height)
	{
		m_Age = age;
		m_Height = new int(height);  //����new�������ڶ�����������
		cout << "Person���вι��캯���ĵ��ã�" << endl;
	}

	//ǳ���������������Ƕ������ڴ��ظ��ͷţ�Ҫ������������������
	//�Լ�ʵ�ֿ������캯�����ǳ��������������
	Person(const Person &p)
	{
		cout << "Person�Ŀ������캯���ĵ��ã�" << endl;
		m_Age = p.m_Age;
		//m_Height = p.m_Height;  //������Ĭ��ʵ�־������д���
		//�������
		m_Height = new int(*p.m_Height);
	}

	//��������  
	~Person()
	{
		//�����������뽫���������������ͷŲ���
		if (m_Height != NULL) 
		{
			delete m_Height;
			m_Height = NULL;
		}
		cout << "Person�����������ĵ��ã�" << endl;
	}

	int m_Age;  //����
	int *m_Height;  //���
};

void test01()
{
	Person p1(18, 160);  //1.��ӡ Person���вι��캯���ĵ��ã�  //5.��ӡ Person�����������ĵ��ã�
	cout << "p1�����䣺" << p1.m_Age << "    p1����ߣ�" << *p1.m_Height << endl;  //2.��ӡ p1�����䣺18    p1����ߣ�160

	Person p2(p1);  //3.��ӡ Person�Ŀ������캯���ĵ��ã�//6.��ӡ Person�����������ĵ��ã�
	cout << "p2�����䣺" << p2.m_Age << "    p2����ߣ�" << *p2.m_Height << endl;  //4.��ӡ p2�����䣺18    p1����ߣ�160
}

int main()
{
	test01();

	system("pause");

	return 0;
}
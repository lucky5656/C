#include<iostream>
using namespace std;

//��ָ����ó�Ա����
class Person
{
public:
	void showClassName()
	{
		cout << "This is Person class!" << endl;
	}

	void showPersonAge()
	{
		if (this == NULL)  //�õ�thisָ�룬��Ҫ�����жϱ�֤����Ľ�׳��
		{
			return;
		}
		cout << "age = " << this->m_Age << endl;   //ֱ������Ǵ���ģ���Ϊ�����ָ��ΪNULL��Ҫ���ж�
	}
	int m_Age;
};

void test01()
{
	Person *p = NULL;

	p->showClassName();  //��ָ��Ҳ���Ե��ó�Ա����

	p->showPersonAge();
}

int main()
{
	test01();

	system("pause");

	return 0;
}
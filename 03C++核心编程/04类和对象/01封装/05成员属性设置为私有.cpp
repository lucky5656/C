#include<iostream>
using namespace std;
#include<string>

//����Ա��������Ϊ˽��
//1. �����г�Ա��������Ϊ˽�У������Լ����ƶ�дȨ��
//2. ����дȨ�ޣ����ǿ��Լ�����ݵ���Ч��

class Person
{
public:
	//��������
	void setName(string name)
	{
		m_Name = name;
	}
	//��ȡ����
	string getName()
	{
		return m_Name;
	}

	////��ȡ����
	//int getAge()
	//{
	//	m_Age = 20;
	//	return m_Age;
	//}

	//��ȡ���䣨�����Ϊ�ɶ���д��������޸ģ������������0~150֮�䣩
	int getAge()
	{
		return m_Age;
	}
	//��������
	void setAge(int age)
	{
		if (age < 0 || age > 150)
		{
			m_Age = 0;
			cout << "��������" << endl;
			return;
		}
		m_Age = age;
	}

	//���ð���
	void setLover(string lover)
	{
		m_Lover = lover;
	}

private:
	string m_Name;  //�������ɶ���д��
	int m_Age;  //���䣨ֻ����
	string m_Lover;  //���ˣ�ֻд��
};

int main()
{
	Person p;
	p.setName("����");
	cout << "����Ϊ��" << p.getName() << endl;

	//p.m_Age = 18;  //��������ֻ��
	//p.setAge(18);
	p.setAge(18);
	cout << "����Ϊ��" << p.getAge() << endl;

	p.setLover("С��");
	//cout << "����Ϊ��" << p.getLover() << endl;  //���󣬰��������ⲻ�ɷ��ʣ�ֻд

	system("pause");

	return 0;
}
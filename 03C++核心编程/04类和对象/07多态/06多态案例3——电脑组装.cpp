#include<iostream>
using namespace std;

//������װ

//�������ͬ����ࣺ1. ����CPU�ࣻ2. �����Կ��ࣻ3. �����ڴ�����
//1. ����CPU��
class CPU
{
public:
	//����ļ��㺯��
	virtual void calculate() = 0;
};

//2. �����Կ���
class VedioCard
{
public:
	//�������ʾ����
	virtual void display() = 0;
};

//3. �����ڴ�����
class Memory
{
public:
	//����Ĵ洢����
	virtual void storage() = 0;
};

//������
class Computer
{
public:
	Computer(CPU * cpu, VedioCard * vc, Memory * mem)
	{
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}

	//�ṩ�����ĺ���
	void work()
	{
		//������������������ýӿ�
		m_cpu->calculate();
		m_vc->display();
		m_mem->storage();
	}

	//�ṩ�����������ͷ�3���������
	~Computer()
	{
		//�ͷ�CPU���
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}
		//�ͷ��Կ����
		if (m_vc != NULL)
		{
			delete m_vc;
			m_vc = NULL;
		}
		//�ͷ��ڴ������
		if (m_mem != NULL)
		{
			delete m_mem;
			m_mem = NULL;
		}
	}

private:
	CPU * m_cpu;  //CPU�����ָ��
	VedioCard * m_vc;  //�Կ������ָ��
	Memory * m_mem;  //�ڴ��������ָ��
};

//���峧�̣�1. Intel���̣�2. Lenovo����
//1. Intel����
class IntelCPU :public CPU  //CPU��
{
public:
	virtual void calculate()
	{
		cout << "Intel��CPU��ʼ�����ˣ�" << endl;
	}
};
class IntelVideoCard :public VedioCard  //�Կ���
{
public:
	virtual void display()
	{
		cout << "Intel���Կ���ʼ��ʾ�ˣ�" << endl;
	}
};
class IntelMemory :public Memory  //�ڴ�����
{
public:
	virtual void storage()
	{
		cout << "Intel���ڴ�����ʼ�洢�ˣ�" << endl;
	}
};

//2. Lenovo����
class LenovoCPU :public CPU  //CPU��
{
public:
	virtual void calculate()
	{
		cout << "Lenovo��CPU��ʼ�����ˣ�" << endl;
	}
};
class LenovoVideoCard :public VedioCard  //�Կ���
{
public:
	virtual void display()
	{
		cout << "Lenovo���Կ���ʼ��ʾ�ˣ�" << endl;
	}
};
class LenovoMemory :public Memory  //�ڴ�����
{
public:
	virtual void storage()
	{
		cout << "Lenovo���ڴ�����ʼ�洢�ˣ�" << endl;
	}
};

void test01()
{
	//��һ̨���Ե�������ڶ���������3���������Computer����ʹ�����������ͷţ�
	CPU * intelCpu = new IntelCPU;
	VedioCard * intelvedioCard = new IntelVideoCard;
	Memory * intelMemory = new IntelMemory;

	cout << "��һ̨���Կ�ʼ������" << endl;
	//������һ̨����
	Computer * computer1 = new Computer(intelCpu, intelvedioCard, intelMemory);
	computer1->work();
	delete computer1;

	cout << "---------------------------" << endl;

	cout << "�ڶ�̨���Կ�ʼ������" << endl;
	//��װ�ڶ�̨����
	Computer * computer2 = new Computer(new LenovoCPU, new LenovoVideoCard, new LenovoMemory);
	computer2->work();
	delete computer2;

	cout << "---------------------------" << endl;

	cout << "����̨���Կ�ʼ������" << endl;
	//��װ����̨����
	Computer * computer3 = new Computer(new LenovoCPU, new IntelVideoCard, new LenovoMemory);
	computer3->work();
	delete computer3;
}

int main()
{
	test01();

	system("pause");

	return 0;
}
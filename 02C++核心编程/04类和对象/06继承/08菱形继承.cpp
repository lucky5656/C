#include<iostream>
using namespace std;

//���μ̳�
//������
class Animal
{
public:
	int m_Age;
};

//������̳п��Խ�����μ̳е����⣬�ڼ̳�֮ǰ���Ϲؼ���virtual��Ϊ��̳У�Animal���Ϊ�����
//����
class Sheep :virtual public Animal{};

//����
class Tuo :virtual public Animal{};

//������
class YangTuo :public Sheep, public Tuo{};

void test01()
{
	YangTuo yt;
	yt.Sheep::m_Age = 18;
	yt.Tuo::m_Age = 28; 

	//�����ǳ������μ̳е�ʱ����������ӵ����ͬ���ݣ���Ҫ��������������
	cout << "Sheep�е�m_Age = " << yt.Sheep::m_Age << endl;
	cout << "Tuo�е�m_Age = " << yt.Tuo::m_Age << endl;
	cout << "YangTuo�е�m_Age = " << yt.m_Age << endl;

	//�������������һ�ݾͿ��ԣ����μ̳е������������ݣ���Դ�˷�
}

int main()
{
	test01();

	system("pause");

	return 0;
}
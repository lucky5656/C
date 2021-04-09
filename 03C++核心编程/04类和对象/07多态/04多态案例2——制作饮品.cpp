#include<iostream>
using namespace std;

//������Ʒ
class AbstractDrinking
{
public:
	virtual void Boil() = 0;  //��ˮ
	virtual void Brew() = 0;  //����
	virtual void PourInCup() = 0;  //���뱭��
	virtual void PutSomething() = 0;  //���븨��
	void makeDrink()  //������Ʒ
	{
		Boil();
		Brew();
		PourInCup();
		PutSomething();
	}
};

//�忧��
class Coffee :public AbstractDrinking
{
public:
	virtual void Boil()  //��ˮ
	{
		cout << "�󴿾�ˮ" << endl;
	}
	virtual void Brew()  //����
	{
		cout << "���ݿ���" << endl;
	}
	virtual void PourInCup()  //���뱭��
	{
		cout << "���뱭��" << endl;
	}
	virtual void PutSomething()  //���븨��
	{
		cout << "�����Ǻ�ţ��" << endl;
	}
};

//���Ҷ
class Tea :public AbstractDrinking
{
public:
	virtual void Boil()  //��ˮ
	{
		cout << "�󴿾�ˮ" << endl;
	}
	virtual void Brew()  //����
	{
		cout << "���ݲ�Ҷ" << endl;
	}
	virtual void PourInCup()  //���뱭��
	{
		cout << "���뱭��" << endl;
	}
	virtual void PutSomething()  //���븨��
	{
		cout << "�������" << endl;
	}
};

void doWork(AbstractDrinking *abs)  //AbstractDrinking *abs = new Coffee;
{
	abs->makeDrink();
	delete abs;  //�ͷŶ����ڴ�
}

void test01()
{
	//�忧��
	cout << "��ʼ�忧��..." << endl;
	doWork(new Coffee);

	cout << "----------------------" << endl;

	//���Ҷ
	cout << "��ʼ���Ҷ..." << endl;
	doWork(new Tea);

}

int main()
{
	test01();

	system("pause");

	return 0;
}
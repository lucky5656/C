#include<iostream>
using namespace std;

//��̬
//������
class Animal
{
public:
	virtual void speak()  //�麯��������ǰ���virtual�ؼ��֣����������ڱ����ʱ��Ͳ���ȷ������������
	{
		cout << "������˵��" << endl;
	}
};

//è��
class Cat :public Animal  //���������ָ��(����)����Ķ���  Animal &animal = cat;
{
public:
	void speak() 
	{
		cout << "Сè��˵��" << endl;
	}
};

//����
class Dog :public Animal 
{
public:
	void speak()
	{
		cout << "С����˵��" << endl;
	}
};

//ִ��˵���ĺ���
//��ַ��󶨣��ڱ���׶�ȷ��������ַ
//�����ִ��è˵������ô���������ַ�Ͳ�����ǰ�󶨣���Ҫ�����н׶ν��а󶨣�����ַ���

//��̬��̬����������1. �м̳й�ϵ
//                  2. ������д������麯������д����������ֵ���͡��������������б���ȫ��ͬ��
//��̬��̬��ʹ�ã����������ָ�����������ָ������Ķ����ʵ�ֶ�̬��̬
void doSpeak(Animal &animal)  //���������ָ��(����)����Ķ���  Animal &animal = cat;
{
	animal.speak();
}

void test01()
{
	Cat cat;
	doSpeak(cat);

	Dog dog;
	doSpeak(dog);
}

int main()
{
	test01();

	system("pause");

	return 0;
}
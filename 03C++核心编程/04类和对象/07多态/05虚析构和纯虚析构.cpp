#include<iostream>
using namespace std;
#include<string>

//�������ʹ�������

//������
class Animal
{
public:
	Animal()
	{
		cout << "Animal�Ĺ��캯���ĵ��ã�" << endl;
	}

	//�������������Խ������ָ���ͷ��������ʱ���ɾ�������
	//virtual ~Animal()
	//{
	//	cout << "Animal�������������ĵ��ã�" << endl;
	//}

	//���ô����������Խ������ָ���ͷ��������ʱ���ɾ�������
	//ʹ�ô�������ʱ������Ҫ����������Ҫ��ʵ��
	//���˴�������֮�������Ҳ���ڳ����࣬�޷�ʵ��������
	virtual ~Animal() = 0;  

	//���麯��
	virtual void speak() = 0;
};

Animal::~Animal()
{
	cout << "Animal�Ĵ������������ĵ��ã�" << endl;
}

class Cat: public Animal
{
public:
	Cat(string name)
	{
		cout << "Cat�Ĺ��캯���ĵ��ã�" << endl;
		m_Name = new string(name);
	}

	virtual void speak()
	{
		cout << *m_Name << "Сè��˵��" << endl;
	}

	~Cat()
	{
		if (m_Name != NULL)
		{
			cout << "Cat�����������ĵ��ã�" << endl;
			delete m_Name;
			m_Name = NULL;
		}
	}
	string *m_Name;  //�������������Կ��ٵ�������ʹ�����������ߴ����������������ָ�����ͷ�ʱ�޷����õ�������������������
};

void test01()
{
	Animal *animal = new Cat("Tom");
	animal->speak();
	//�����ָ����������ʱ�򣬲�����������е�����������������������ж������ԣ�������ڴ�й©
	delete animal;
}

int main()
{
	test01();

	system("pause");

	return 0;
}
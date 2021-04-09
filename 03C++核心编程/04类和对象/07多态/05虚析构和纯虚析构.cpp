#include<iostream>
using namespace std;
#include<string>

//虚析构和纯虚析构

//动物类
class Animal
{
public:
	Animal()
	{
		cout << "Animal的构造函数的调用！" << endl;
	}

	//利用虚析构可以解决父类指针释放子类对象时不干净的问题
	//virtual ~Animal()
	//{
	//	cout << "Animal的虚析构函数的调用！" << endl;
	//}

	//利用纯虚析构可以解决父类指针释放子类对象时不干净的问题
	//使用纯虚析构时，不仅要有声明，还要有实现
	//有了纯虚析构之后，这个类也属于抽象类，无法实例化对象
	virtual ~Animal() = 0;  

	//纯虚函数
	virtual void speak() = 0;
};

Animal::~Animal()
{
	cout << "Animal的纯虚析构函数的调用！" << endl;
}

class Cat: public Animal
{
public:
	Cat(string name)
	{
		cout << "Cat的构造函数的调用！" << endl;
		m_Name = new string(name);
	}

	virtual void speak()
	{
		cout << *m_Name << "小猫在说话" << endl;
	}

	~Cat()
	{
		if (m_Name != NULL)
		{
			cout << "Cat的析构函数的调用！" << endl;
			delete m_Name;
			m_Name = NULL;
		}
	}
	string *m_Name;  //在子类中有属性开辟到堆区，使用虚析构或者纯虚析构来解决父类指针在释放时无法调用到子类的析构代码的问题
};

void test01()
{
	Animal *animal = new Cat("Tom");
	animal->speak();
	//父类的指针在析构的时候，不会调用子类中的析构函数，导致子类如果有堆区属性，会出现内存泄漏
	delete animal;
}

int main()
{
	test01();

	system("pause");

	return 0;
}
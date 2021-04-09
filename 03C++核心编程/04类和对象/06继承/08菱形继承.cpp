#include<iostream>
using namespace std;

//菱形继承
//动物类
class Animal
{
public:
	int m_Age;
};

//利用虚继承可以解决菱形继承的问题，在继承之前加上关键字virtual变为虚继承，Animal类称为虚基类
//羊类
class Sheep :virtual public Animal{};

//驼类
class Tuo :virtual public Animal{};

//羊驼类
class YangTuo :public Sheep, public Tuo{};

void test01()
{
	YangTuo yt;
	yt.Sheep::m_Age = 18;
	yt.Tuo::m_Age = 28; 

	//当我们出现菱形继承的时候，两个父类拥有相同数据，需要加以作用域区分
	cout << "Sheep中的m_Age = " << yt.Sheep::m_Age << endl;
	cout << "Tuo中的m_Age = " << yt.Tuo::m_Age << endl;
	cout << "YangTuo中的m_Age = " << yt.m_Age << endl;

	//年龄这份数据有一份就可以，菱形继承导致数据有两份，资源浪费
}

int main()
{
	test01();

	system("pause");

	return 0;
}
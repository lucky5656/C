#include<iostream>
using namespace std;

//制作饮品
class AbstractDrinking
{
public:
	virtual void Boil() = 0;  //煮水
	virtual void Brew() = 0;  //冲泡
	virtual void PourInCup() = 0;  //倒入杯中
	virtual void PutSomething() = 0;  //加入辅料
	void makeDrink()  //制作饮品
	{
		Boil();
		Brew();
		PourInCup();
		PutSomething();
	}
};

//冲咖啡
class Coffee :public AbstractDrinking
{
public:
	virtual void Boil()  //煮水
	{
		cout << "煮纯净水" << endl;
	}
	virtual void Brew()  //冲泡
	{
		cout << "冲泡咖啡" << endl;
	}
	virtual void PourInCup()  //倒入杯中
	{
		cout << "倒入杯中" << endl;
	}
	virtual void PutSomething()  //加入辅料
	{
		cout << "加入糖和牛奶" << endl;
	}
};

//冲茶叶
class Tea :public AbstractDrinking
{
public:
	virtual void Boil()  //煮水
	{
		cout << "煮纯净水" << endl;
	}
	virtual void Brew()  //冲泡
	{
		cout << "冲泡茶叶" << endl;
	}
	virtual void PourInCup()  //倒入杯中
	{
		cout << "倒入杯中" << endl;
	}
	virtual void PutSomething()  //加入辅料
	{
		cout << "加入枸杞" << endl;
	}
};

void doWork(AbstractDrinking *abs)  //AbstractDrinking *abs = new Coffee;
{
	abs->makeDrink();
	delete abs;  //释放堆区内存
}

void test01()
{
	//冲咖啡
	cout << "开始冲咖啡..." << endl;
	doWork(new Coffee);

	cout << "----------------------" << endl;

	//冲茶叶
	cout << "开始冲茶叶..." << endl;
	doWork(new Tea);

}

int main()
{
	test01();

	system("pause");

	return 0;
}
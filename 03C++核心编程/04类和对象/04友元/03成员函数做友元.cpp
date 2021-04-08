#include<iostream>
using namespace std;
#include<string>

//成员函数做友元
class Building;
class GoodFriend
{
public:
	GoodFriend();

	void visit();  //让visit函数可以访问Building中的私有成员
	void visit2();  //让visit2函数不可以访问Building中的私有成员

	Building * building;
};

class Building
{
	friend void GoodFriend::visit();  //告诉编译器GoodFriend类下的visit成员函数作为本类的好朋友，可以访问私有成员

public:
	Building();

public:
	string m_SittingRoom;  //客厅

private:
	string m_BedRoom;  //卧室
};

//类外实现成员函数
Building::Building()
{
	m_SittingRoom = "客厅";
	m_BedRoom = "卧室";
}

GoodFriend::GoodFriend()
{
	building = new Building;  //创建一个Building对象的堆区，并用指针维护了建筑物building这个对象
}

void GoodFriend::visit()
{
	cout << "visit函数正在访问：" << building->m_SittingRoom << endl;
	cout << "visit函数正在访问：" << building->m_BedRoom << endl;  //通过友元，visit成员函数可以访问Building类的私有成员
}
void GoodFriend::visit2()
{
	cout << "visit2函数正在访问：" << building->m_SittingRoom << endl;
	//cout << "visit函数正在访问：" << building->m_BedRoom << endl;
}

void test01()
{
	GoodFriend gf;
	gf.visit();
	gf.visit2();
}

int main()
{
	test01();

	system("pause");

	return 0;
}
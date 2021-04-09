#include<iostream>
using namespace std;
#include<string>

//类做友元
class Building;
class GoodFriend
{
public:
	GoodFriend();

	void visit();  //参观函数访问Building中的属性

	Building * building;
};

class Building
{
	friend class GoodFriend;  //GoodFriend是本类的好朋友，可以访问本类中的私有成员

public:
	Building();

public:
	string m_SittingRoom;  //客厅

private:
	string m_BedRoom;  //卧室
};

//类外写成员函数
Building::Building()
{
	m_SittingRoom = "客厅";
	m_BedRoom = "卧室";
}

GoodFriend::GoodFriend()
{
	//创建建筑物对象
	building = new Building;
}

void GoodFriend::visit()
{
	cout << "好朋友类正在访问：" << building->m_SittingRoom << endl;

	cout << "好朋友类正在访问：" << building->m_BedRoom << endl;
}

void test01()
{
	GoodFriend gf;
	gf.visit();
}

int main()
{
	test01();

	system("pause");

	return 0;
}
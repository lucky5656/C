#include<iostream>
using namespace std;
#include<string>

//��Ա��������Ԫ
class Building;
class GoodFriend
{
public:
	GoodFriend();

	void visit();  //��visit�������Է���Building�е�˽�г�Ա
	void visit2();  //��visit2���������Է���Building�е�˽�г�Ա

	Building * building;
};

class Building
{
	friend void GoodFriend::visit();  //���߱�����GoodFriend���µ�visit��Ա������Ϊ����ĺ����ѣ����Է���˽�г�Ա

public:
	Building();

public:
	string m_SittingRoom;  //����

private:
	string m_BedRoom;  //����
};

//����ʵ�ֳ�Ա����
Building::Building()
{
	m_SittingRoom = "����";
	m_BedRoom = "����";
}

GoodFriend::GoodFriend()
{
	building = new Building;  //����һ��Building����Ķ���������ָ��ά���˽�����building�������
}

void GoodFriend::visit()
{
	cout << "visit�������ڷ��ʣ�" << building->m_SittingRoom << endl;
	cout << "visit�������ڷ��ʣ�" << building->m_BedRoom << endl;  //ͨ����Ԫ��visit��Ա�������Է���Building���˽�г�Ա
}
void GoodFriend::visit2()
{
	cout << "visit2�������ڷ��ʣ�" << building->m_SittingRoom << endl;
	//cout << "visit�������ڷ��ʣ�" << building->m_BedRoom << endl;
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
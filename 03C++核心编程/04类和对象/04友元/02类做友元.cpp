#include<iostream>
using namespace std;
#include<string>

//������Ԫ
class Building;
class GoodFriend
{
public:
	GoodFriend();

	void visit();  //�ιۺ�������Building�е�����

	Building * building;
};

class Building
{
	friend class GoodFriend;  //GoodFriend�Ǳ���ĺ����ѣ����Է��ʱ����е�˽�г�Ա

public:
	Building();

public:
	string m_SittingRoom;  //����

private:
	string m_BedRoom;  //����
};

//����д��Ա����
Building::Building()
{
	m_SittingRoom = "����";
	m_BedRoom = "����";
}

GoodFriend::GoodFriend()
{
	//�������������
	building = new Building;
}

void GoodFriend::visit()
{
	cout << "�����������ڷ��ʣ�" << building->m_SittingRoom << endl;

	cout << "�����������ڷ��ʣ�" << building->m_BedRoom << endl;
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
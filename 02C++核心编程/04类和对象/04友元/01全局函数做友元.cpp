////ȫ�ֺ�������Ԫ
////��������
//class Building
//{
//	friend void goodfriend(Building *building);  //goodfriendȫ�ֺ�����Building�ĺ����ѣ����Է���Building�е�˽�г�Ա
//
//public:
//	Building()
//	{
//		m_SittingRoom = "����";
//		m_BedRoom = "����";
//	}
//
//public:
//	string m_SittingRoom;  //����
//
//private:
//	string m_BedRoom;  //����
//};
//
////ȫ�ֺ���
//void goodfriend(Building *building)
//{
//	cout << "������ȫ�ֺ������ڷ��ʣ�" << building->m_SittingRoom << endl;
//	cout << "������ȫ�ֺ������ڷ��ʣ�" << building->m_BedRoom << endl;  //m_BedRoom��˽�����ԣ�Ҫ����ʣ�������������goodfriendȫ�ֺ�����Building�ĺ�����
//}
//
//void test01()
//{
//	Building building;
//	goodfriend(&building);
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//
//	return 0;
//}
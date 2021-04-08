////全局函数做友元
////建筑物类
//class Building
//{
//	friend void goodfriend(Building *building);  //goodfriend全局函数是Building的好朋友，可以访问Building中的私有成员
//
//public:
//	Building()
//	{
//		m_SittingRoom = "客厅";
//		m_BedRoom = "卧室";
//	}
//
//public:
//	string m_SittingRoom;  //客厅
//
//private:
//	string m_BedRoom;  //卧室
//};
//
////全局函数
//void goodfriend(Building *building)
//{
//	cout << "好朋友全局函数正在访问：" << building->m_SittingRoom << endl;
//	cout << "好朋友全局函数正在访问：" << building->m_BedRoom << endl;  //m_BedRoom是私有属性，要想访问，需在类中声明goodfriend全局函数是Building的好朋友
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
//#include<iostream>
//using namespace std;
//#include<string>
//
////�������Ϊ���Ա
//
////�ֻ���
//class Phone
//{
//public:
//	Phone(string pName)
//	{
//		cout << "Phone�Ĺ��캯���ĵ��ã�" << endl;
//		m_PName = pName;
//	}
//	~Phone()
//	{
//		cout << "Phone�����������ĵ��ã�" << endl;
//	}
//
//	//�ֻ�Ʒ������
//	string m_PName;
//};
//
////����
//class Person
//{
//public:
//	//Phone m_Phone = pName;  //��ʽת����
//	Person(string name, string pName):m_Name(name), m_Phone(pName)
//	{
//		cout << "Person�Ĺ��캯���ĵ��ã�" << endl;
//	}
//
//	~Person()
//	{
//		cout << "Person�����������ĵ��ã�" << endl;
//	}
//
//	//����
//	string m_Name;
//	//�ֻ�
//	Phone m_Phone;
//};
//
////�����г�Ա�����������ʱ�����ǳƸó�ԱΪ�����Ա
////�������������Ϊ�����Ա�������˳��Ϊ���ȵ��ö����Ա�Ĺ��죬�ٵ��ñ��๹��
////������˳���빹���෴
//void test01()
//{
//	Person p("����", "ƻ��MAX");
//
//	cout << p.m_Name << "����" << p.m_Phone .m_PName << endl;
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
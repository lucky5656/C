//#include<iostream>
//using namespace std;
//
////�������������
//class Person
//{
//	friend ostream &operator<<(ostream &cout, Person p);
//
//public:
//	Person(int a, int b)
//	{
//		m_A = a;
//		m_B = b;
//	}
//
//private:
//	//1. ��Ա�������������������p.operator<<(cout); ��Ϊ p<<cout;��������Ԥ�ڵ�Ч����һ��������ͨ���������ó�Ա���������������������Ϊ�޷�ʵ��cout����ࡣ
//	//void operator<<(Person &p)
//	//{
//
//	//}
//	int m_A;  //һ��д���뽨�齫��Ա����˽�л������Ǻ������ʲ��������Կ���������Ԫ�����
//	int m_B;
//};
//
////2. ȫ�ֺ����������������
//ostream &operator<<(ostream &cout, Person p)  //���ʣ�operator<<(cout, p); ��Ϊ cout<<p  //cout���������ostream���ͣ�Ҫͨ�����õķ�ʽ����cout����Ϊȫ��ֻ����һ��
//{
//	cout << "    m_A = " << p.m_A << "    m_B = " << p.m_B;
//	return cout;  //����cout��Ϊ��ʵ����ʽ��̣�
//}
//
//void test01()
//{
//	//Person p;  //��Ϊ��m_A��m_B˽�л���������ʲ���
//	//p.m_A = 10;
//	//p.m_B = 10;
//
//	Person p(10, 10);
//
//	cout << p;
//	cout << p << "    Hello World!" << endl;  //��������������������з���cout���Ϳ����ں���׷��<< "    Hello World!"��<<endl�Ȳ���
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
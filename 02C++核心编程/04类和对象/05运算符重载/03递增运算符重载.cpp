//#include<iostream>
//using namespace std;
//
////�������������
//
////�Զ�������
//class MyInteger
//{
//	friend ostream &operator<<(ostream &cout, MyInteger myint);
//
//public:
//	MyInteger()
//	{
//		m_Num = 0;
//	}
//
//	//����ǰ��++�����
//	MyInteger &operator++()  //ǰ�õ�������������Ϊ��һֱ��һ�����ݽ��е�������
//	{
//		m_Num++;  //�Ƚ���++����
//		return *this;  //�ٽ�������һ������
//	}
//
//	//���غ���++�����
//	MyInteger operator++(int)  //int����ռλ������������������ǰ�úͺ��õ���  //���õ������ص���ֵ
//	{
//		MyInteger temp = *this;//�ȼ�¼��ʱ���
//		m_Num++;  //�ٽ��е���
//		return temp;//��󽫼�¼�����һ������
//	}
//
//private:
//	int m_Num;
//};
//
////ȫ�ֺ����������������
//ostream &operator<<(ostream &cout, MyInteger myint)  //��Ϊm_Num��˽�еģ�������Ҫ��Ԫ����
//{
//	cout << myint.m_Num;
//	return cout;
//}
//
//void test01()
//{
//	MyInteger myint;
//
//	//cout << ++myint << endl;  //���������������������Ϊ��������Զ���Ķ��󣬲�֪������
//	cout << ++(++myint) << endl;
//	cout << myint << endl;
//}
//
//void test02()
//{
//	MyInteger myint;
//
//	cout << myint++ << endl;
//	cout << myint << endl;
//}
//
//int main()
//{
//	test01();
//	test02();
//
//	system("pause");
//
//	return 0;
//}
//#include<iostream>
//using namespace std;
//
////��̬��Ա����
//
//class Person
//{
//public:
//	// 1. ���ж�����ͬһ������
//    // 2. �ڱ���׶η����ڴ�
//    // 3. ���������������ʼ��
//	static int m_A;  //��������
//
//	//��̬��Ա����Ҳ���з���Ȩ�޵�
//private:
//	static int m_B;
//};
//
//int Person::m_A = 100;  //�����ʼ��
//int Person::m_B = 1000;
//
//void test01()
//{
//	Person p;
//	cout << p.m_A << endl;
//
//	Person p2;
//	p2.m_A = 200;
//	cout << p.m_A << endl;  //���ж�����ͬһ�����ݣ�����p2���޸ģ�pҲ��Ϊ200
//}
//
//void test02()
//{
//	//��̬��Ա����������ĳ�������ϣ����ж��󶼹���ͬһ������
//	//��̬���������ַ��ʷ�ʽ��
//	// 1. ͨ��������з���
//	Person p;
//	cout << p.m_A << endl;
//
//	// 2. ͨ���������з���
//	cout << Person::m_A << endl;
//	//cout << Person::m_B << endl;  //˽��Ȩ�ޣ������޷�����
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
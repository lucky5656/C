//#include<iostream>
//using namespace std;
//
////thisָ���ʹ��
//class Person
//{
//public:
//	Person(int age)
//	{
//		this->age = age;  //thisָ��ָ����Ǳ����õĳ�Ա���������Ķ���
//	}
//
//	Person &PersonAddAge(Person &p)  //��Ҫʹ�����ô��ݣ�p2.PersonAddAge(p1)�Ż�һֱ����p2�����ʹ��ֵ���ݣ��ᴴ���µĶ�����ô����ĵ��Ӿͱ�����µĶ�����������p2
//	{
//		this->age += p.age;
//		return *this;  //this��ָ��p2��ָ�룬��*thisָ��ľ���p2�������ı���
//	}
//
//	int age;
//};
//
////1. ������Ƴ�ͻ
//void test01()
//{
//	Person p1(18);
//	cout << "p1�����䣺 " << p1.age << endl;
//}
//
////2.���ض������� *this
//void test02()
//{
//	Person p1(10);
//
//	Person p2(10);
//
//	//��ʽ���˼��
//	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);  //10�ټ�����10 = 40
//
//	cout << "p2�����䣺 " << p2.age << endl;
//}
//
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
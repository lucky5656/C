#include<iostream>
using namespace std;

//��Ա�����ͳ�Ա�����ֿ��洢

class Person
{
	int m_A;  //�Ǿ�̬��Ա����������Ķ����ϣ�ռ4���ڴ�

	static int m_B;  //��̬��Ա������������Ķ����ϣ���ռ�ڴ�

	void func(){}  //�Ǿ�̬��Ա������������Ķ����ϣ���ռ�ڴ�

	static void func2() {}  //��̬��Ա������������Ķ����ϣ���ռ�ڴ�
};

void test01()
{
	Person p;
	//�ն���ռ�õ��ڴ�ռ�Ϊ��1
	//C++���������ÿ���ն���Ҳ����һ���ֽڿռ䣬��Ϊ�����ֿն���ռ�ڴ��λ�ã�ÿ���ն���ҲӦ����һ����һ�޶����ڴ��ַ
	cout << "size of p = " << sizeof(p) << endl;
}

void test02()
{
	Person p;
	cout << "size of p = " << sizeof(p) << endl;
}

int main()
{
	//test01();
	test02();

	system("pause");

	return 0;
}
#include<iostream>
using namespace std;

//�������ص�ע������
//1. ������Ϊ���ص�����
void func(int &a)  //int &a = 10;���Ϸ�
{
	cout << "func(int &a)�ĵ��ã�" << endl;
}

void func(const int &a)  //const int &a = 10;�Ϸ�
{
	cout << "func(const int &a)�ĵ��ã�" << endl;
}

//2. Ĭ����������Ĭ�ϲ���
void func2(int a, int b = 10)
{
	cout<<"func2(int a)�ĵ��ã�" << endl;
}

void func2(int a)
{
	cout << "func2(int a)�ĵ��ã�" << endl;
}

int main()
{
	int a = 10;  //����a��һ���ɶ���д�Ķ���
	func(a);  //���õ�һ��func()����
	func(10);  //���õڶ���func()����

	//func2(10);  //��������������Ĭ�ϲ���������ֶ����ԣ����б������������������
	func2(10, 20);

	system("pause");

	return 0;
}
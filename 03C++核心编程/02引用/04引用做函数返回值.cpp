#include<iostream>
using namespace std;

//�����������ķ���ֵ
//1. ��Ҫ���ؾֲ�����������
int& test01()
{
	int a = 10;  //�ֲ����������������ջ��
	return a;
}

//2. �����ĵ��ÿ�����Ϊ��ֵ
int& test02()
{
	static int a = 10;  //��̬���������ȫ������ȫ�����������ڳ��������ϵͳ�ͷ�
	return a;
}

int main()
{
	int &ref1 = test01();
	cout << "ref1 = " << ref1 << endl;  //��һ�ν����ȷ����Ϊ���������˱���
	cout << "ref1 = " << ref1 << endl;  //�ڶ��ν��������Ϊa���ڴ����ͷ�
	 
	int &ref2 = test02();  //ref2�����Ͼ��Ǻ���test02()�ķ���ֵa�ı���
	cout << "ref2 = " << ref2 << endl; 
	cout << "ref2 = " << ref2 << endl;  
	cout << "ref2 = " << ref2 << endl;

	test02() = 1000;  //��������ķ���ֵ�����ã���������ĵ��ÿ�����Ϊ��ֵ
	cout << "ref2 = " << ref2 << endl;
	cout << "ref2 = " << ref2 << endl;

	system("pause");

	return 0;
}
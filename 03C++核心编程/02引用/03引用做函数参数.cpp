#include<iostream>
using namespace std;

//��������
//1. ֵ����
void mySwap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;

	cout << "ֵ���ݣ�" << endl;
	cout << "swap01  a = " << a << endl;
	cout << "swap01  b = " << b << endl;
}

//2. ��ַ����
void mySwap02(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;

	cout << "��ַ���ݣ�" << endl;
	cout << "swap02  *a = " << *a << endl;
	cout << "swap02  *b = " << *b << endl;
}

//3. ���ô���
void mySwap03(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;

	cout << "���ô��ݣ�" << endl;
	cout << "swap03  a = " << a << endl;
	cout << "swap03  b = " << b << endl;
}

int main()
{
	int a1 = 10;
	int b1 = 20;
	mySwap01(a1, b1);  //ֵ���ݣ��ββ�������ʵ��
	cout << "a1 = " << a1 << endl;
	cout << "b1 = " << b1 << endl;

	int a2 = 10;
	int b2 = 20;
	mySwap02(&a2, &b2);  //��ַ���ݣ��βλ�����ʵ��
	cout << "a2 = " << a2 << endl;
	cout << "b2 = " << b2 << endl;

	int a3 = 10;
	int b3 = 20;
	mySwap03(a3, b3);  //���ô��ݣ��βλ�����ʵ��
	cout << "a3 = " << a3 << endl;
	cout << "b3 = " << b3 << endl;

	system("pause");

	return 0;
}
#include<iostream>
using namespace std;

//����ģ��

//�������ͽ�������
void swapInt(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

//���������ͽ�������
void swapInt(double &a, double &b)
{
	double temp = a;
	a = b;
	b = temp;
}

void test01()
{
	int a = 10;
	int b = 20;
	swap(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	double c = 1.1;
	double d = 2.2;
	swap(c, d);
	cout << "c = " << c << endl;
	cout << "d = " << d << endl;
}

//����ģ��
template<typename T>  //����һ��ģ�壬���߱���������Ĵ����н����ŵ�T��Ҫ����T��һ��ͨ����������
void mySwap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

void test02()
{
	//���ú���ģ�彻���������ַ�ʽʹ�ú���ģ�壺
	//1. �Զ������Ƶ�
	int a = 10;
	int b = 20;
	mySwap(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	//2. ��ʾָ������
	double c = 1.1;
	double d = 2.2;
	mySwap<double>(c, d);
	cout << "c = " << c << endl;
	cout << "d = " << d << endl;

}

int main()
{
	test01();

	test02();

	system("pause");

	return 0;
}
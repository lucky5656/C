#include<iostream>
using namespace std;

int main()
{

	//1.����ָ��
	int a = 10;
	//ָ�붨����﷨���������� * ָ�����
	int * p;
	//��ָ���¼����a�ĵ�ַ
	p = &a;  //& ȡַ
	cout << "a�ĵ�ַΪ��" << &a << endl;
	cout << "ָ��pΪ��" << p << endl;

	//2.ʹ��ָ��
	//����ͨ�������õķ�ʽ���ҵ�ָ��ָ����ڴ�
	//ָ��ǰ�� * ��������ã��ҵ�ָ��ָ����ڴ��е�����
	cout << "a = " << a << endl;
	cout << "p = " << *p << endl;

	system("pause");

	return 0;
}
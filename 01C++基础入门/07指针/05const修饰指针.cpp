#include<iostream>
using namespace std;

int main()
{

	//const����ָ��
	//1.const����ָ�롪������ָ��
	int a = 10;
	int b = 10;

	const int * p1 = &a;
	//ָ��ָ���ֵ�������޸ģ�ָ���ָ������޸�
	//* p1 = 100;  //����
	p1 = &b;

	//2.const���γ���
	//ָ���ָ�򲻿����޸ģ�ָ��ָ���ֵ�����޸�
	int * const p2 = &a;
	*p2 = 100;
	//p2 = &b;  //����

	//3.const������ָ�룬�����γ���
	const int * const p3 = &a;
	//ָ���ָ�򲻿����޸ģ�ָ��ָ���ֵҲ�������޸�
	//*p3 = 100;  //����
	//p3 = &b;  //����

	system("pause");

	return 0;
}
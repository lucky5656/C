#include<iostream>
using namespace std;

//��ӡ���ݺ���
void showValue(const int &val)
{
	//val = 1000;  //����const֮���ں����ڲ��Ͳ����޸�val������ֵ
	cout << "val = " << val << endl;
}

int main()
{
	//��������
	//ʹ�ó��������������βΣ���ֹ�����

	//int& ref = 10;  //�������ñ�����Ҫһ���Ϸ����ڴ�ռ�
	//����const֮�󣬱������Ż�����Ϊ int temp = 10; const int & ref = temp;
	const int& ref = 10;  //���ñ�����һ��Ϸ����ڴ�ռ�
	//ref = 20;  //����const֮���Ϊֻ�����������޸�

	int a = 100;  
	showValue(a);

	system("pause");

	return 0;
}
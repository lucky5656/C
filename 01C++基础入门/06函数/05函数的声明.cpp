#include<iostream>
using namespace std;

//����������
//�ȽϺ�����ʵ�������������ֽ��бȽϣ����ؽϴ��ֵ

//��������������ǰ���߱����������Ĵ���
int max(int a, int b);

int main()
{

	int a = 10;
	int b = 20;
	cout << max(a, b) << endl;

	system("pause");

	return 0;
}

//�����Ķ���
int max(int a, int b)  //�����Ķ�����main()����֮��һ��Ҫ��֮ǰ��������������ᱨ��
{
	return a > b ? a : b;
}
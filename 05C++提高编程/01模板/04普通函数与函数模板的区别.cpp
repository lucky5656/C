#include<iostream>
using namespace std;

//��ͨ�����뺯��ģ�������
//1. ��ͨ��������ʱ���Է����Զ�����ת������ʽ����ת������
//2. ����ģ�����ʱ����������Զ������Ƶ������ᷢ����ʽ����ת����
//3. ����ģ�����ʱ�����������ʾָ�����͵ķ�ʽ�����Է�����ʽ����ת����

//��ͨ����
int myAdd01(int a, int b)
{
	return a + b;
}

//����ģ��
template<class T>
T myAdd02(T a, T b)
{
	return a + b;
}

void test01()
{
	int a = 10;
	int b = 20;
	char c = 'c';
	cout << myAdd01(a, b) << endl;
	cout << myAdd01(a, c) << endl;  //���Ϊ109�����ַ�cת��Ϊ��Ӧ��ASCII��99����ʽ��ת��Ϊ���ͣ����������

	//�Զ������Ƶ������ᷢ����ʽ����ת��
	cout << myAdd02(a, b) << endl;
	//cout << myAdd02(a, c) << endl;  //����

	//��ʾָ�����ͣ��ᷢ����ʽ����ת��
	cout << myAdd02<int>(a, b) << endl;
	cout << myAdd02<int>(a, c) << endl;
}

int main()
{
	test01();

	system("pause");

	return 0;
}
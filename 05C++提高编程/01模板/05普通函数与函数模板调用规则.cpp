#include<iostream>
using namespace std;

//��ͨ�����뺯��ģ��ĵ��ù���
//1. �������ģ�����ͨ����������ʵ�֣����ȵ�����ͨ������
//2. ����ͨ����ģ������б���ǿ�Ƶ��ú���ģ�壻
//3. ����ģ��Ҳ���Է������أ�
//4. �������ģ����Բ������õ�ƥ�䣬���ȵ��ú���ģ�塣

//��ͨ����
void myPrint(int a, int b)
{
	cout << "���õ�����ͨ������" << endl;
}

//����ģ��
template<class T>
void myPrint(T a, T b)
{
	cout << "���õ��Ǻ���ģ�壡" << endl;
}

template<class T>
void myPrint(T a, T b, T c)
{
	cout << "���õ������صĺ���ģ�壡" << endl;
}

void test01()
{
	int a = 10;
	int b = 20;
	
	myPrint(a, b);  //������ͨ����

	//ͨ����ģ��Ĳ����б�ǿ�Ƶ��ú���ģ��
	myPrint<>(a, b);  //���ú���ģ��

	myPrint(a, b, 100);  //�������غ���ģ��

	//�������ģ��������õ�ƥ�䣬���ȵ��ú���ģ��
	char c1 = 'a';
	char c2 = 'b';
	myPrint(c1, c2);  //���ú���ģ�壬���������ͨ������Ҫ������ʽת������ģ�庯��ֻ��Ҫȷ��TΪchar���;�����
}

int main()
{
	test01();

	system("pause");

	return 0;
}
#include<iostream>
using namespace std;
#include<string>

//string���Һ��滻
//1. ����
void test01()
{
	string str1 = "abcdefgde";
	//find��rfind������rfind����������ң�find�������Ҳ���
	//find
	int pos = str1.find("de");
	if (pos == -1)
	{
		cout << "δ�ҵ��ַ�����" << endl;
	}
	else
	{
		cout << "����find�ҵ��ַ�����pos = " << pos << endl;
	}

	//rfind
	pos = str1.rfind("de");
	if (pos == -1)
	{
		cout << "δ�ҵ��ַ�����" << endl;
	}
	else
	{
		cout << "����rfind�ҵ��ַ�����pos = " << pos << endl;
	}
}

//2. �滻
void test02()
{
	string str1 = "abcdefg";
	str1.replace(1, 3, "1111");  //��1��λ�����3���ַ��滻Ϊ"1111"
	cout << "str1 = " << str1 << endl;
	
}

int main()
{
	test01();
	test02();

	system("pause");

	return 0;
}
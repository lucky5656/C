#include<iostream>
using namespace std;
#include<string>  //��C++����ַ���ʱ��Ҫ������ͷ�ļ�

int main()
{

	//1.C����ַ���
	char str[] = "Hello World";  //Ҫע����ǣ�char�ַ�������Ҫ��[]���Ⱥź���Ҫ��""���ַ�����������
	cout << str << endl;

	//2.C++����ַ���
	string str2 = "Hello World";  //Ҫע����ǣ���Ҫ���#include<string>���ͷ�ļ�
	cout << str2 << endl;

	system("pause");

	return 0;

}
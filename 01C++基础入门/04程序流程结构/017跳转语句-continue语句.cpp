#include<iostream>
using namespace std;

int main()
{

	//continue���
	for (int i = 0; i <= 10; i++)
	{
		//���������������������ż���������
		if (i % 2 == 0)  //�����ż��
		{
			continue;  //����ɸѡ������ִ�е��˾Ͳ�������ִ�У�����ִ����һ��ѭ��
		}
		cout << i << endl;
	}

	system("pause");

	return 0;

}
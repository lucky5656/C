#include<iostream>
using namespace std;
#include<ctime>  //timeϵͳʱ�������ͷ�ļ�

int main()
{

	//���������ӣ����������õ�ǰϵͳʱ���������������ֹÿ���������һ��
	srand((unsigned int)time(NULL));

	//1.ϵͳ���������
	int num = rand() % 100 + 1;  //rand()%100+1 ���� 0+1~99+1�����
	//cout << num << endl;

	//2.��ҽ��в²�
	int val = 0;

	while (1)
	{
		cout << "���������һ���²�����֣�" << endl;
		cin >> val;  //�����������

		//3.�ж���ҵĲ²�
	    //�´���ʾ��Ҳ²�����ǹ�С�������صڶ���
		if (val > num)
		{
			cout << "�²����" << endl;
		}
		else if (val < num)
		{
			cout << "�²��С��" << endl;
		}
		else
		{
			cout << "��ϲ���¶��ˣ�" << endl;
			//�¶ԣ��˳���Ϸ
			break;  //������break�ؼ������˳���ǰѭ��
		}
	}

	system("pause");

	return 0;

}
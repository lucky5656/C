#include<iostream>
using namespace std;

int main()
{
	//switch���
	//��һ����Ӱ���д�֣�10~9  ���䣻8~7 �ǳ��ã�5~6 һ�㣻5���� ��Ƭ

	//1.��ʾ�û�����Ӱ����
	cout << "�����Ӱ���д�֣�" << endl;

	//2.�û���ʼ���д��
	int score = 0;
	cin >> score;
	cout << "����ķ���Ϊ��" << score << endl;

	//3.�����û�����ķ�������ʾ�û����Ľ��
	switch (score)
	{
	case 10:
		cout << "����Ϊ�˵�Ӱ�Ǿ��䣡" << endl;
		break;  //�˳���ǰ��֧
	case 9:
		cout << "����Ϊ�˵�Ӱ�Ǿ��䣡" << endl;
		break;
	case 8:
		cout << "����Ϊ�˵�Ӱ�ǳ��ã�" << endl;
		break;
	case 7:
		cout << "����Ϊ�˵�Ӱ�ǳ��ã�" << endl;
		break;
	case 6:
		cout << "����Ϊ�˵�Ӱһ�㣡" << endl;
		break;
	case 5:
		cout << "����Ϊ�˵�Ӱһ�㣡" << endl;
		break;
	default:
		cout << "����Ϊ�˵�Ӱ����Ƭ��" << endl;
		break;
	}

	system("pause");

	return 0;

}
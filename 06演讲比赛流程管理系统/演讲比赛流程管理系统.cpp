#include<iostream>
using namespace std;
#include"speechManager.h"
#include<string>
#include<ctime>

int main()
{
	//������������
	srand((unsigned int)time(NULL));

	//�������������
	SpeechManager sm;

	//����12��ѡ�ֵĴ���
	//for (map<int, Speaker>::iterator it = sm.m_Speaker.begin(); it != sm.m_Speaker.end(); it++)
	//{
	//	cout << "��ţ�" << it->first << "    ������" << it->second.m_Name << "    ������" << it->second.m_Score[0] << endl;
	//}

	int choice = 0;
	while (true)
	{
		sm.show_Menu();  //����չʾ�˵���Ա����

		cout << "����������ѡ��" << endl;
		cin >> choice;

		switch (choice)
		{
		case 1:  //1. ��ʼ�ݽ�����
			sm.startSpeech();
			break;
		case 2:  //2. �鿴�����¼
			sm.showRecord();
			break;
		case 3:  //3. ��ձ�����¼
			sm.clearRecord();
			break;
		case 0:  //0. �˳���������
			sm.exitSystem();
			break;
		default:
			system("cls");  //�����������
			break;
		}
	}

	system("pause");

	return 0;
}
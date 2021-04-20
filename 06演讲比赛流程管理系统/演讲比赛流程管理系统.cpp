#include<iostream>
using namespace std;
#include"speechManager.h"
#include<string>
#include<ctime>

int main()
{
	//添加随机数种子
	srand((unsigned int)time(NULL));

	//创建管理类对象
	SpeechManager sm;

	//测试12名选手的创建
	//for (map<int, Speaker>::iterator it = sm.m_Speaker.begin(); it != sm.m_Speaker.end(); it++)
	//{
	//	cout << "编号：" << it->first << "    姓名：" << it->second.m_Name << "    分数：" << it->second.m_Score[0] << endl;
	//}

	int choice = 0;
	while (true)
	{
		sm.show_Menu();  //调用展示菜单成员函数

		cout << "请输入您的选择：" << endl;
		cin >> choice;

		switch (choice)
		{
		case 1:  //1. 开始演讲比赛
			sm.startSpeech();
			break;
		case 2:  //2. 查看往届记录
			sm.showRecord();
			break;
		case 3:  //3. 清空比赛记录
			sm.clearRecord();
			break;
		case 0:  //0. 退出比赛程序
			sm.exitSystem();
			break;
		default:
			system("cls");  //输入错误，清屏
			break;
		}
	}

	system("pause");

	return 0;
}
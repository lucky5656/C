#pragma once
#include<iostream>
using namespace std;
#include<vector>
#include<map>
#include"speaker.h"
#include<algorithm>
#include<deque>
#include<functional>
#include<numeric>
#include<string>
#include<fstream>

//设计演讲比赛管理类
class SpeechManager
{
public:
	//构造函数
	SpeechManager();

	void show_Menu();  //展示菜单

	void exitSystem();  //退出系统

	//析构函数
	~SpeechManager();

	void initSpeech();  //初始化容器和属性

	void createSpeaker();  //创建12名选手

	void startSpeech();  //开始比赛，比赛整个流程控制的函数

	void speechDraw();  //抽签

	void speechContest();  //比赛

	void showScore();  //显示比赛分数

	void saveRecord();  //保存分数

	void loadRecord();  //读取记录

	bool fileIsEmpty;  //判断文件是否为空

	map<int, vector<string>>m_Record;  //存放往届记录的容器

	void showRecord();  //显示往届记录

	void clearRecord();  //清空记录

	//成员属性
	vector<int>v1;  //保存第一轮比赛选手编号的容器

	vector<int>v2;  //保存第二轮晋级选手编号的容器

	vector<int>vVictory;  //保存胜出的前三名选手编号的容器

	map<int, Speaker>m_Speaker;  //存放编号以及对应的具体选手的容器

	int m_Index;  //存放比赛轮数
};
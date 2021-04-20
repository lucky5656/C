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

//����ݽ�����������
class SpeechManager
{
public:
	//���캯��
	SpeechManager();

	void show_Menu();  //չʾ�˵�

	void exitSystem();  //�˳�ϵͳ

	//��������
	~SpeechManager();

	void initSpeech();  //��ʼ������������

	void createSpeaker();  //����12��ѡ��

	void startSpeech();  //��ʼ�����������������̿��Ƶĺ���

	void speechDraw();  //��ǩ

	void speechContest();  //����

	void showScore();  //��ʾ��������

	void saveRecord();  //�������

	void loadRecord();  //��ȡ��¼

	bool fileIsEmpty;  //�ж��ļ��Ƿ�Ϊ��

	map<int, vector<string>>m_Record;  //��������¼������

	void showRecord();  //��ʾ�����¼

	void clearRecord();  //��ռ�¼

	//��Ա����
	vector<int>v1;  //�����һ�ֱ���ѡ�ֱ�ŵ�����

	vector<int>v2;  //����ڶ��ֽ���ѡ�ֱ�ŵ�����

	vector<int>vVictory;  //����ʤ����ǰ����ѡ�ֱ�ŵ�����

	map<int, Speaker>m_Speaker;  //��ű���Լ���Ӧ�ľ���ѡ�ֵ�����

	int m_Index;  //��ű�������
};
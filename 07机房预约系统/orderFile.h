#pragma once
#include<iostream>
using namespace std;
#include<map>
#include<string>
#include"globalFile.h"
#include<fstream>

class OrderFile
{
public:
	//���캯��
	OrderFile();

	//����ԤԼ��¼
	void updateOrder();

	//��¼ԤԼ����
	int m_Size;

	//��¼����ԤԼ��Ϣ��������key��¼������value�����¼��ֵ����Ϣ
	map<int, map<string, string>>m_orderData;  //map<string,string>��key�������ԣ����ڡ�ʱ���...����value����ʵֵ��ÿ�����Զ�Ӧ�ľ������ݣ���map<int,map<string,string>>��key����ԤԼ��¼������value����һ����¼�е�������Ϣ
};
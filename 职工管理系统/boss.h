#pragma once
#include<iostream>
using namespace std;
#include"worker.h"
#include<string>

//�ϰ���
class Boss :public Worker
{
public:
	//���캯��
	Boss(int id, string name, int deptId);

	//��ʾ������Ϣ
	virtual void showInfo();

	//��ȡ��λ����
	virtual string getDeptName();
};
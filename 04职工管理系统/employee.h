#pragma once
#include<iostream>
using namespace std;
#include"worker.h"
#include<string>

//��ͨԱ���ļ�
class Employee :public Worker
{
public:
	//���캯��
	Employee(int id, string name, int deptId);

	//��ʾ������Ϣ
	virtual void showInfo();

	//��ȡ��λ����
	virtual string  getDeptName();
};
#pragma once
#include<iostream>
using namespace std;
#include"Identity.h"
#include<string>
#include"orderFile.h"
#include<vector>

//��ʦ��
class Teacher :public Identity
{
public:
	//Ĭ�Ϲ��캯��
	Teacher();

	//�вι��캯����������ְ���š����������룩
	Teacher(int empId, string name, string pwd);

	//�˵�����
	virtual void operMenu();

	//�鿴����ԤԼ
	void showAllOrder();

	//���ԤԼ
	void valiOrder();

	//ְ����
	int m_EmpId;
};
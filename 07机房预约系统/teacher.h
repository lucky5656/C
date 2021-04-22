#pragma once
#include<iostream>
using namespace std;
#include"Identity.h"
#include<string>
#include"orderFile.h"
#include<vector>

//教师类
class Teacher :public Identity
{
public:
	//默认构造函数
	Teacher();

	//有参构造函数（参数：职工号、姓名、密码）
	Teacher(int empId, string name, string pwd);

	//菜单界面
	virtual void operMenu();

	//查看所有预约
	void showAllOrder();

	//审核预约
	void valiOrder();

	//职工号
	int m_EmpId;
};
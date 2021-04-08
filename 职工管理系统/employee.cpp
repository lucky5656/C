#include"employee.h"

//构造函数
Employee::Employee(int id, string name, int deptId)
{
	this->m_Id = id;  //自身属性的初始化
	this->m_Name = name;
	this->m_DeptId = deptId;
}

//显示个人信息
void Employee::showInfo()
{
	cout << "职工编号：" << this->m_Id
		<< "\t职工姓名：" << this->m_Name
		<< "\t岗位名称：" << this->getDeptName()
		<< "\t岗位职责：完成经理交给的任务" << endl;
}

//获取岗位名称
string  Employee::getDeptName()
{
	return string("员工");
}
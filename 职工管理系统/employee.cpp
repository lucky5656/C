#include"employee.h"

//���캯��
Employee::Employee(int id, string name, int deptId)
{
	this->m_Id = id;  //�������Եĳ�ʼ��
	this->m_Name = name;
	this->m_DeptId = deptId;
}

//��ʾ������Ϣ
void Employee::showInfo()
{
	cout << "ְ����ţ�" << this->m_Id
		<< "\tְ��������" << this->m_Name
		<< "\t��λ���ƣ�" << this->getDeptName()
		<< "\t��λְ����ɾ�����������" << endl;
}

//��ȡ��λ����
string  Employee::getDeptName()
{
	return string("Ա��");
}
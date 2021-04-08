#pragma once  //��ֹͷ�ļ��ظ�����
#include<iostream>  //�������������ͷ�ļ�
using namespace std;  //ʹ�ñ�׼�����ռ�
#include"worker.h"
#include"employee.h"
#include"manager.h"
#include"boss.h"

#include<fstream>
#define FILENAME "empFile.txt"

class WorkerManager
{
public:
	WorkerManager();  //���캯������.h�ļ��У�ֻ������������ʵ�֣�

	void Show_Menu();  //չʾ�˵�

	void ExitSystem();  //�˳�ϵͳ

	int m_EmpNum;  //��¼ְ������

	Worker ** m_EmpArray;  //ְ������ָ��

	void Add_Emp();  //���ְ��

	void save(); //�����ļ�

	bool m_FileIsEmpty;  //�ж��ļ��Ƿ�Ϊ�յı�־

	int get_EmpNum();  //ͳ���ļ��е�����

	void init_Emp();  //��ʼ��Ա��

	void Show_Emp();  //��ʾְ����Ϣ

	int IsExist(int id);  //�ж�ְ���Ƿ���ڣ�������ڣ�����ְ���������飬��������ڣ�����-1

	void Del_Emp();  //ɾ��ְ��

	void Mod_Emp();  //�޸�ְ��

	void Find_Emp();  //����ְ��

	void Sort_Emp();  //����ְ��

	void Clean_File();  //����ļ�

	~WorkerManager();  //��������
};
#include<iostream>
using namespace std;
#include"workerManager.h"
#include"worker.h"
#include"employee.h"
#include"manager.h"
#include"boss.h"

//void test()
//{
//	//���Դ���
//	Worker *worker = NULL;
//	worker = new Employee(1, "����", 1);
//	worker->showInfo();
//	delete worker;
//
//	worker = new Manager(2, "����", 2);
//	worker->showInfo();
//	delete worker;
//
//	worker = new Boss(3, "����", 3);
//	worker->showInfo();
//	delete worker;
//}

int main()
{
	//test();

	//ʵ���������߶���
	WorkerManager wm;

	int choice = 0;  //�����洢�û���ѡ��
	while (true)
	{
		//����չʾ�˵���Ա����
		wm.Show_Menu();

		cout << "����������ѡ��" << endl;
		cin >> choice;  //�����û���ѡ��

		switch (choice)		
		{ 
		case 0:  //0. �˳��������
			wm.ExitSystem();
			break;
		case 1:  //1. ����ְ����Ϣ
			wm.Add_Emp();
			break;
		case 2:  //2. ��ʾְ����Ϣ
			wm.Show_Emp();
			break;
		case 3:  //3. ɾ����ְְ��
			wm.Del_Emp();
			break;
		case 4:  //4. �޸�ְ����Ϣ
			wm.Mod_Emp();
			break;
		case 5:  //5. ����ְ����Ϣ
			wm.Find_Emp();
			break;
		case 6:  //6. ���ձ������
			wm.Sort_Emp();
			break;
		case 7:  //7. ��������ĵ�
			wm.Clean_File();
			break;
		default:
			system("cls");  //����0-7֮������֣�����
			break;
		}
	}

	system("pause");

	return 0;
}
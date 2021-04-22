#include"teacher.h"

//Ĭ�Ϲ��캯��
Teacher::Teacher()
{

}

//�вι��캯����������ְ���š����������룩
Teacher::Teacher(int empId, string name, string pwd)
{
	//��ʼ������
	this->m_EmpId = empId;
	this->m_Name = name;
	this->m_Pwd = pwd;
}

//�˵�����
void Teacher::operMenu()
{
	cout << "��ӭ��ʦ��" << this->m_Name << "��¼��" << endl;
	cout << "\t\t ----------------------------------\n";
	cout << "\t\t|                                  |\n";
	cout << "\t\t|          1.�鿴����ԤԼ          |\n";
	cout << "\t\t|                                  |\n";
	cout << "\t\t|          2.���ԤԼ              |\n";
	cout << "\t\t|                                  |\n";
	cout << "\t\t|          0.ע����¼              |\n";
	cout << "\t\t|                                  |\n";
	cout << "\t\t ----------------------------------\n";
	cout << "��ѡ�����Ĳ����� " << endl;
}

//�鿴����ԤԼ
void Teacher::showAllOrder()
{
	OrderFile of;
	if (of.m_Size == 0)
	{
		cout << "��ԤԼ��¼��" << endl;
		system("pause");
		system("cls");
		return;
	}

	for (int i = 0; i < of.m_Size; i++)
	{
		cout << i + 1 << "�� ";
		cout << "ԤԼ���ڣ���" << of.m_orderData[i]["date"];
		cout << "    ʱ��Σ�" << (of.m_orderData[i]["interval"] == "1" ? "����" : "����");
		cout << "    ѧ�ţ�" << of.m_orderData[i]["stuId"];
		cout << "    ������" << of.m_orderData[i]["stuName"];
		cout << "    ������ţ�" << of.m_orderData[i]["roomId"];
		string status = "    ԤԼ״̬��";
		//1 ����У�2 ��ԤԼ��-1 ԤԼʧ�ܣ�0 ȡ��ԤԼ
		if (of.m_orderData[i]["status"] == "1")
		{
			status += "�����...";
		}
		else if (of.m_orderData[i]["status"] == "2")
		{
			status += "���ͨ����ԤԼ�ɹ���";
		}
		else if (of.m_orderData[i]["status"] == "-1")
		{
			status += "���δͨ����ԤԼʧ�ܣ�";
		}
		else if (of.m_orderData[i]["status"] == "0")
		{
			status += "ȡ��ԤԼ��";
		}
		cout << status << endl;
	}
	system("pause");
	system("cls");
}

//���ԤԼ
void Teacher::valiOrder()
{
	OrderFile of;

	if (of.m_Size == 0)
	{
		cout << "��ԤԼ��¼��" << endl;
		system("pause");
		system("cls");
		return;
	}

	vector<int>v;  //��Ŵ���˵�ԤԼ��¼���
	int index = 0;
	cout << "����˵�ԤԼ��¼���£�" << endl;

	for (int i = 0; i < of.m_Size; i++)
	{
		if (of.m_orderData[i]["status"] == "1")
		{
			v.push_back(i);
			cout << ++index << "�� ";
			cout << "ԤԼ���ڣ���" << of.m_orderData[i]["date"];
			cout << "    ʱ��Σ�" << (of.m_orderData[i]["interval"] == "1" ? "����" : "����");
			cout << "    ѧ�ţ�" << of.m_orderData[i]["stuId"];
			cout << "    ������" << of.m_orderData[i]["stuName"];
			cout << "    ������ţ�" << of.m_orderData[i]["roomId"];
			string status = "    ԤԼ״̬�������...";  //����˵�ԤԼ��¼ֻ�������һ�����
			cout << status << endl;
		}
	}

	cout << "��������Ҫ��˵�ԤԼ��¼��0�����أ���" << endl;
	int select = 0;  //�����û�ѡ���ԤԼ��¼
	int ret = 0;  //����ԤԼ��¼����˽��������ṩ�����δͨ����

	while (true)
	{
		cin >> select;
		if (select >= 0 && select <= v.size())
		{
			if (select == 0)
			{
				break;
			}
			else
			{
				cout << "��������˽����" << endl;
				cout << "1. ͨ��" << endl;
				cout << "2. ��ͨ��" << endl;
				cin >> ret;
				if (ret == 1)
				{
					//���ͨ��
					of.m_orderData[v[select - 1]]["status"] = "2";
				}
				else
				{
					//��˲�ͨ��
					of.m_orderData[v[select - 1]]["status"] = "-1";
				}
				of.updateOrder();  //����ԤԼ��¼
				cout << "�����ϣ�" << endl;
				break;
			}
		}
		cout << "�����������������룺" << endl;
	}
	system("pause");
	system("cls");
}
#include"student.h"

//Ĭ�Ϲ���
Student::Student()
{

}

//�вι��죨������ѧ�š����������룩
Student::Student(int id, string name, string pwd)
{
	//��ʼ������
	this->m_Id = id;
	this->m_Name = name;
	this->m_Pwd = pwd;

	//��ʼ��������Ϣ
	ifstream ifs;
	ifs.open(COMPUTER_FILE, ios::in);

	ComputerRoom com;
	while (ifs >> com.m_ComId && ifs >> com.m_MaxNum)
	{
		vCom.push_back(com);  //����ȡ����Ϣ���뵽������
	}
	ifs.close();
}

//�˵�����
void Student::operMenu()
{
	cout << "��ӭѧ������" << this->m_Name << "��¼��" << endl;
	cout << "\t\t ----------------------------------\n";
	cout << "\t\t|                                  |\n";
	cout << "\t\t|          1.����ԤԼ              |\n";
	cout << "\t\t|                                  |\n";
	cout << "\t\t|          2.�鿴�ҵ�ԤԼ          |\n";
	cout << "\t\t|                                  |\n";
	cout << "\t\t|          3.�鿴����ԤԼ          |\n";
	cout << "\t\t|                                  |\n";
	cout << "\t\t|          4.ȡ��ԤԼ              |\n";
	cout << "\t\t|                                  |\n";
	cout << "\t\t|          0.ע����¼              |\n";
	cout << "\t\t|                                  |\n";
	cout << "\t\t ----------------------------------\n";
	cout << "��ѡ�����Ĳ����� " << endl;
}

//����ԤԼ
void Student::applyOrder()
{
	cout << "�������ŵ�ʱ��Ϊ��һ�����壡" << endl;
	cout << "��ѡ������ԤԼ��ʱ�䣺" << endl;
	cout << "1. ��һ" << "  2. �ܶ�" << "  3. ����" << "  4. ����" << "  5. ����" << endl;

	int date = 0;  //����
	int interval = 0;  //ʱ���
	int room = 0;  //�������

	while (true)
	{
		cin >> date;
		if (date >= 1 && date <= 5)
		{
			break;
		}
		else
		{
			cout << "�����������������룺" << endl;
		}
	}

	cout << "��ѡ������ԤԼ��ʱ��Σ�" << endl;
	cout << "1. ���磨8:00 - 12:00��" << "  2. ���磨14:00 - 18:00��" << endl;

	while (true)
	{
		cin >> interval;
		if (interval >= 1 && interval <= 2)
		{
			break;
		}
		else
		{
			cout << "�����������������룺" << endl;
		}
	}

	cout << "��ѡ�������" << endl;
	for (int i = 0; i < vCom.size(); i++)
	{
		cout << vCom[i].m_ComId << "�Ż���������Ϊ��" << vCom[i].m_MaxNum << endl;
	}

	while (true)
	{
		cin >> room;
		if (room >= 1 && room <= 3)
		{
			break;
		}
		else
		{
			cout << "�����������������룺" << endl;
		}
	}

	cout << "ԤԼ�ɹ��������..." << endl;

	ofstream ofs;
	ofs.open(ORDER_FILE, ios::app);

	ofs << "date:" << date << " ";  //����
	ofs << "interval:" << interval << " ";  //ʱ���
	ofs << "stuId:" << this->m_Id << " ";  //ѧ��ѧ��
	ofs << "stuName:" << this->m_Name << " ";  //ѧ������
	ofs << "roomId:" << room << " ";  //�������
	ofs << "status:" << 1 << " ";  //ԤԼ״̬��1��������У�

	ofs.close();

	system("pause");
	system("cls");
}

//�鿴����ԤԼ
void Student::showMyOrder()
{
	OrderFile of;

	if (of.m_Size == 0)  //��ԤԼ��¼������
	{
		cout << "��ԤԼ��¼��" << endl;
		system("pause");
		system("cls");
		return;
	}

	//��ԤԼ��¼����������Ϣ����
	for (int i = 0; i < of.m_Size; i++)
	{
		//�ҵ�����ԤԼ
		if (atoi(of.m_orderData[i]["stuId"].c_str()) == this->m_Id)  //.c_str()��stringת��Ϊconst char *��atoi()��const char *ת��Ϊint��������ǽ�stringתΪint
		{
			cout << "ԤԼ���ڣ���" << of.m_orderData[i]["date"];
			cout << "    ʱ��Σ�" << (of.m_orderData[i]["interval"]=="1"?"����":"����");
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
	}
	system("pause");
	system("cls");
}

//�鿴����ԤԼ
void Student::showAllOrder()
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

//ȡ��ԤԼ
void Student::cancelOrder()
{
	OrderFile of;
	if (of.m_Size == 0)
	{
		cout << "��ԤԼ��¼��" << endl;
		system("pause");
		system("cls");
		return;
	}


	cout << "����л�ԤԼ�ɹ��ļ�¼����ȡ��������ԤԼ��¼���£�" << endl;
	vector<int>v;  //�����������е��±���
	int index = 1;    //��ʾ�û���Ҫ������ԤԼ��¼������
	for (int i = 0; i < of.m_Size; i++)
	{
		//���ж��Ƿ�������ѧ��
		if (this->m_Id == atoi(of.m_orderData[i]["stuId"].c_str()))
		{
			//��ɸѡ״̬������л�ԤԼ�ɹ�
			if (of.m_orderData[i]["status"] == "1" || of.m_orderData[i]["status"] == "2")
			{
				v.push_back(i);
				cout << index++ << "�� ";
				cout << "ԤԼ���ڣ���" << of.m_orderData[i]["date"];
				cout << "    ʱ��Σ�" << (of.m_orderData[i]["interval"] == "1"?"����":"����");
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
				cout << status << endl;
			}
		}
	}

	cout << "��������Ҫȡ���ļ�¼��0�����أ���" << endl;
	int select = 0;

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
				of.m_orderData[v[select - 1]]["status"] = "0";  //v[select - 1]������Ҫȡ���ļ�¼����λ��

				of.updateOrder();  //��������

				cout << "��ȡ��ԤԼ��" << endl;
				break;
			}
		}

		cout << "�����������������룺" << endl;
	}

	system("pause");
	system("cls");
}
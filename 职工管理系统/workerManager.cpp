#include"workerManager.h"

//���캯��
WorkerManager::WorkerManager()
{
	//1. �ļ�������
	ifstream ifs;
	ifs.open(FILENAME, ios::in);  //���ļ�

	if (!ifs.is_open())
	{
		//cout << "�ļ������ڣ�" << endl;  //���Դ���

		//��ʼ������
		this->m_EmpNum = 0;  //��ʼ������Ϊ0
		this->m_EmpArray = NULL;  //��ʼ�������ָ��Ϊ��
		this->m_FileIsEmpty = true;  //��ʼ���ļ��Ƿ�Ϊ��
		ifs.close();  //�ر��ļ�
		return;
	}

	//2. �ļ����ڣ��������ݱ��û����
	char ch;
	ifs >> ch;  //��ȡ�ļ���һ���ַ��������eof���ļ�β�����ı�־��˵���ļ������ˡ�����ļ����Ϊ�գ��൱������ֻ��һ��eof�ı�־�����ǰ������־���ߣ�Ȼ���ж�����ļ��Ƿ�Ϊ�ա�
	if (ifs.eof())  //���ifs.eof()Ϊ�棬�����ļ�������
	{
		//cout << "�ļ�Ϊ�գ�" << endl;  //���Դ���
		this->m_EmpNum = 0;  //��ʼ������Ϊ0
		this->m_EmpArray = NULL;  //��ʼ�������ָ��Ϊ��
		this->m_FileIsEmpty = true;  //��ʼ���ļ��Ƿ�Ϊ��
		ifs.close();  //�ر��ļ�
		return;
	}

	//3. �ļ����ڣ����ұ���ְ������������
	int num = this->get_EmpNum();
	//cout << "ְ��������" << num << endl;
	this->m_EmpNum = num;

	//���ٿռ�
	this->m_EmpArray = new Worker*[this->m_EmpNum];
	//���ļ��е����ݴ浽������
	this->init_Emp();

	//���Դ���
	//for (int i = 0; i < this->m_EmpNum; i++)
	//{
	//	cout << "ְ����ţ�" << this->m_EmpArray[i]->m_Id
	//		<< "\tְ��������" << this->m_EmpArray[i]->m_Name
	//		<< "\t���ű�ţ�" << this->m_EmpArray[i]->m_DeptId << endl;
	//}
}

//չʾ�˵�
void WorkerManager::Show_Menu()
{
	cout << "*************************************" << endl;
	cout << "******* ��ӭʹ��ְ������ϵͳ ********" << endl;
	cout << "********** 0. �˳�������� **********" << endl;
	cout << "********** 1. ����ְ����Ϣ **********" << endl;
	cout << "********** 2. ��ʾְ����Ϣ **********" << endl;
	cout << "********** 3. ɾ����ְְ�� **********" << endl;
	cout << "********** 4. �޸�ְ����Ϣ **********" << endl;
	cout << "********** 5. ����ְ����Ϣ **********" << endl;
	cout << "********** 6. ���ձ������ **********" << endl;
	cout << "********** 7. ��������ĵ� **********" << endl;
	cout << "*************************************" << endl;
	cout << endl;
}

//�˳�ϵͳ
void WorkerManager::ExitSystem()
{
	cout << "��ӭ�´�ʹ�ã�" << endl;
	system("pause");
	exit(0);  //�˳�����
}

//���ְ��
void WorkerManager::Add_Emp()
{
	cout << "���������ְ����������" << endl;

	int addNum = 0;  //�����û����������
	cin >> addNum;

	if (addNum > 0)
	{
		//���
		//��������µĿռ��С
		int newSize = this->m_EmpNum + addNum;  //�¿ռ��С = ԭ����¼���� + ��������

		//�����¿ռ�
		Worker ** newSpace = new Worker *[newSize];

		//��ԭ���ռ��µ����ݿ������¿ռ���
		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				newSpace[i] = this->m_EmpArray[i];
			}
		}

		//���������
		for (int i = 0; i < addNum; i++)
		{
			int id;  //ְ�����
			string name;  //ְ������
			int deptSelect;  //��λѡ��

			cout << "�������" << i + 1 << "����ְ���ı�ţ�" << endl;
			cin >> id;

			cout << "�������" << i + 1 << "����ְ����������" << endl;
			cin >> name;

			cout << "��ѡ���" << i + 1 << "����ְ���ĸ�λ��" << endl;
			cout << "1. Ա��" << endl;
			cout << "2. ����" << endl;
			cout << "3. �ϰ�" << endl;
			cin >> deptSelect;

			Worker * worker = NULL;
			switch (deptSelect)
			{
			case 1:
				worker = new Employee(id, name, 1);
				break;
			case 2:
				worker = new Manager(id, name, 2);
				break;
			case 3:
				worker = new Boss(id, name, 3);
				break;
			default:
				break;
			}

			//��������ְ��ָ�뱣�浽������
			newSpace[this->m_EmpNum + i] = worker;
		}

		//�ͷ�ԭ�пռ�
		delete[] this->m_EmpArray;

		//�����¿ռ��ָ��
		this->m_EmpArray = newSpace;

		//�����µ�ְ������
		this->m_EmpNum = newSize;

		this->m_FileIsEmpty = false;  //�ɹ����һ��ְ�����ļ��Ͳ�Ϊ����

		//��ʾ��ӳɹ�
		cout << "�ɹ������" << addNum << "����ְ����" << endl;

		//�������ݵ��ļ���
		this->save();
	}
	else
	{
		cout << "������������" << endl;
	}

	//����������������ص��ϼ�Ŀ¼
	system("pause");
	system("cls");
}

//�����ļ�
void WorkerManager::save()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out);  //������ķ�ʽ���ļ�����д�ļ�

	//��ÿ���˵�����д�뵽�ļ���
	for (int i = 0; i < this->m_EmpNum; i++)
	{
		ofs << this->m_EmpArray[i]->m_Id << "  "
			<< this->m_EmpArray[i]->m_Name << "  "
			<< this->m_EmpArray[i]->m_DeptId << endl;
	}

	//�ر��ļ�
	ofs.close();
}

//ͳ���ļ��е�����
int WorkerManager::get_EmpNum()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);  //���ļ�������

	int id;
	string name;
	int deptId;

	int num = 0;  //num��ͳ�������ı���
	while (ifs>>id && ifs>>name && ifs>>deptId)  //������������
	{
		num++;
	}
	return num;
}

//��ʼ��Ա��
void WorkerManager::init_Emp()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	int deptId;

	int index = 0;  //�±�
	while (ifs >> id && ifs >> name && ifs >> deptId)
	{
		Worker * worker = NULL;  //��ʼ������workerΪ��

		if (deptId == 1)  //��ְͨ��
		{
			worker = new Employee(id, name, deptId);
		}
		else if (deptId == 2)  //����
		{
			worker = new Manager(id, name, deptId);
		}
		else  //�ϰ�
		{
			worker = new Boss(id, name, deptId);
		}
		this->m_EmpArray[index] = worker;
		index++;
	}
	
	//�ر��ļ�
	ifs.close();
}

//��ʾְ����Ϣ
void WorkerManager::Show_Emp()
{
	//�ж��ļ��Ƿ�Ϊ��
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��߼�¼Ϊ�գ�" << endl;
	}
	else
	{
		for (int i = 0; i < m_EmpNum; i++)
		{
			//���ö�̬���ó���ӿ�
			this->m_EmpArray[i]->showInfo();
		}
	}
	//�������������
	system("pause");
	system("cls");
}

//ɾ��ְ��
void WorkerManager::Del_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ�գ�" << endl;
	}
	else
	{
		//����ְ�����ɾ��
		cout << "��������Ҫɾ����ְ����ţ�" << endl;
		int id = 0;
		cin >> id;

		int index = this->IsExist(id);

		if (index != -1)  //˵��ְ�����ڣ�����Ҫɾ��indexλ���ϵ�ְ��
		{
			//����ǰ��
			for (int i = index; i < this->m_EmpNum - 1; i++)
			{
				this->m_EmpArray[i] = this->m_EmpArray[i + 1];
			}
			this->m_EmpNum--;  //���������м�¼��Ա����

			//����ͬ�����µ��ļ���
			this->save();

			cout << "ɾ���ɹ���" << endl;
		}
		else
		{
			cout << "ɾ��ʧ�ܣ�δ�ҵ���ְ����" << endl;
		}
	}

	//�����������
	system("pause");
	system("cls");
}

//�ж�ְ���Ƿ���ڣ�������ڣ�����ְ���������飬��������ڣ�����-1
int WorkerManager::IsExist(int id)
{
	int index = -1;

	for (int i = 0; i < this->m_EmpNum; i++)
	{
		if (this->m_EmpArray[i]->m_Id == id)
		{
			//�ҵ�ְ��
			index = i;

			break;
		}
	}
	return index;
}

//�޸�ְ��
void WorkerManager::Mod_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ�գ�" << endl;
	}
	else
	{
		cout << "��������Ҫ�޸ĵ�ְ���ı�ţ�" << endl;
		int id;
		cin >> id;

		int ret = this->IsExist(id);
		if (ret != -1)
		{
			//�鵽��Ҫ�޸ĵı�ŵ�ְ��
			delete this->m_EmpArray[ret];  //Ҫ�����µ��ˣ����ȰѶ��������ͷŸɾ�

			int newId = 0;
			string newName = "";
			int newdeptSelect = 0;

			cout << "�鵽���Ϊ " << id << " �ŵ�ְ�����������µ�ְ����ţ�" << endl;
			cin >> newId;

			cout << "�������µ�������" << endl;
			cin >> newName;

			cout << "�������µĸ�λ��" << endl;
			cout << "1. Ա��" << endl;
			cout << "2. ����" << endl;
			cout << "3. �ϰ�" << endl;
			cin >> newdeptSelect;

			Worker * worker = NULL;
			switch (newdeptSelect)
			{
			case 1:
				worker = new Employee(newId, newName, newdeptSelect);
				break;
			case 2:
				worker = new Manager(newId, newName, newdeptSelect);
				break;
			case 3:
				worker = new Boss(newId, newName, newdeptSelect);
				break;
			default:
				break;
			}

			//�������ݵ�������
			this->m_EmpArray[ret] = worker;
			cout << "�޸ĳɹ���" << endl;

			//���浽�ļ���
			this->save();
		}
		else
		{
			cout << "�޸�ʧ�ܣ����޴��ˣ�" << endl;
		}
	}
	system("pause");
	system("cls");
}

//����ְ��
void WorkerManager::Find_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ�գ�" << endl;
	}
	else
	{
		cout << "��������ҵķ�ʽ��" << endl;
		cout << "1. ����ְ����Ų���" << endl;
		cout << "2. ����ְ����������" << endl;

		int select = 0;
		cin >> select;
		if (select == 1)
		{
			//����ְ����Ų���
			int id;
			cout << "������Ҫ����ְ���ı�ţ�" << endl;
			cin >> id;

			int ret = IsExist(id);
			if(ret != -1)
			{
				//�ҵ�ְ��
				cout << "���ҳɹ�����ְ����Ϣ���£�" << endl;
				this->m_EmpArray[ret]->showInfo();
			}
			else
			{
				cout << "����ʧ�ܣ����޴��ˣ�" << endl;
			}
		}
		else if (select == 2)
		{
			//����ְ����������
			string name;
			cout << "������Ҫ����ְ����������" << endl;
			cin >> name;

			//�����ж��Ƿ���ҵ�ְ���ı�־
			bool flag = false;  //Ĭ��δ�ҵ�ְ��

			for (int i = 0; i < m_EmpNum; i++)
			{
				if (this->m_EmpArray[i]->m_Name == name)
				{
					cout << "���ҳɹ�����ְ����Ϣ���£�" << endl;
					this->m_EmpArray[i]->showInfo();  //������ʾ��Ϣ�Ľӿ�

					flag = true;
				}
			}
			if (flag == false)
			{
				cout << "����ʧ�ܣ����޴��ˣ�" << endl;
			}
		}
		else
		{
			cout << "�����ѡ������" << endl;
		}
	}
	system("pause");
	system("cls");
}

//����ְ��
void WorkerManager::Sort_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ�գ�" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "��ѡ������ʽ��" << endl;
		cout << "1. ����ְ����Ž�������" << endl;
		cout << "2. ����ְ����Ž��н���" << endl;

		int select = 0;
		cin >> select;
		for (int i = 0; i < m_EmpNum; i++)
		{
			int MinOrMax = i;  //������Сֵ�����ֵ�±�
			for (int j = i + 1; j < m_EmpNum; j++)
			{
				if (select == 1)  //����(�϶���Сֵ�±꣩
				{
					if (this->m_EmpArray[MinOrMax]->m_Id > this->m_EmpArray[j]->m_Id)
					{
						MinOrMax = j;
					}
				}
				else  //����(�϶����ֵ�±꣩
				{
					if (this->m_EmpArray[MinOrMax]->m_Id < this->m_EmpArray[j]->m_Id)
					{
						MinOrMax = j;
					}
				}
			}
			//�ж�һ��ʼ�϶�����Сֵ�����ֵ�ǲ��Ǽ������Сֵ�����ֵ��������ǣ���������
			if (i != MinOrMax)
			{
				Worker * temp = this->m_EmpArray[i];
				this->m_EmpArray[i] = this->m_EmpArray[MinOrMax];
				this->m_EmpArray[MinOrMax] = temp;
			}
		}
		cout << "����ɹ��������Ľ��Ϊ��" << endl;
		this->save();  //�����Ľ�����浽�ļ���
		this->Show_Emp();
	}
}

//����ļ�
void WorkerManager::Clean_File()
{
	cout << "�Ƿ�ȷ����գ�" << endl;
	cout << "1. ��" << endl;
	cout << "2. ��" << endl;

	int select = 0;
	cin >> select;

	if (select == 1)
	{
		//����ļ�
		ofstream ofs(FILENAME, ios::trunc);  //ɾ���ļ������´���
		ofs.close();

		if (this->m_EmpArray != NULL)
		{
			//ɾ��������ÿ��ְ������
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				delete this->m_EmpArray[i];
				this->m_EmpArray[i] = NULL;
			}
			//ɾ����������ָ��
			delete[] this->m_EmpArray;
			this->m_EmpArray = NULL;
			this->m_EmpNum = 0;
			this->m_FileIsEmpty = true;
		}
		cout << "��ճɹ���" << endl;
	}
	system("pause");
	system("cls");
}

//��������
WorkerManager::~WorkerManager()
{
	if (this->m_EmpArray != NULL)
	{
		for (int i = 0; i < this->m_EmpNum; i++)
		{
			if (this->m_EmpArray[i] != NULL)
			{
				delete this->m_EmpArray[i];
			}
		}
		delete[] this->m_EmpArray;
		this->m_EmpArray = NULL;
	}
}
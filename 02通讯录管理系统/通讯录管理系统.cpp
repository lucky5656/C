#include<iostream>
using namespace std;
#include<string>
#define MAX 1000  //ͨѶ¼�������������

//�����ϵ�˽ṹ��
struct Person
{
	string m_Name;  //����
	int m_Sex;  //�Ա�1 �� ��2 Ů
	int m_Age;  // ����
	string m_Phone;  // �绰
	string m_Address;  //��ַ
};

//���ͨѶ¼�ṹ��
struct Addressbooks
{
	//ͨѶ¼�б������ϵ������
	struct Person personArray[MAX];

	//ͨѶ¼�е�ǰ��¼����ϵ�˸���
	int m_Size;
};

//1. �����ϵ��
void addPerson(Addressbooks * abs)
{
	//�ж�ͨѶ¼�Ƿ�������������˾Ͳ������
	if (abs->m_Size == MAX)
	{
		cout << "ͨѶ¼�������޷���ӣ�" << endl;
	}
	else
	{
		//��Ӿ�����ϵ��
	
		//����
		string name;
		cout << "������������" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;
	
		//�Ա�
		cout << "�������Ա�" << endl;
		cout << "1 --- ��" << endl;
		cout << "2 --- Ů" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)  //����������1����2�������˳�ѭ������Ϊ���������ȷֵ
			{
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			cout << "�����������������룺" << endl;  //��������������������
		}
		
		//����
		cout << "���������䣺" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;

		//�绰
		cout << "������绰��" << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;

		//��ַ
		cout << "�������ַ��" << endl;
		string address;
		cin >> address;
		abs->personArray[abs->m_Size].m_Address = address;

		//����ͨѶ¼����
		abs->m_Size++;

		cout << "��ӳɹ���" << endl;
	}
	system("pause");  //�밴���������
	system("cls");  //��������
}

//2. ��ʾ��ϵ��
void showPerson(Addressbooks * abs)
{
	//�ж�ͨѶ¼�������Ƿ�Ϊ0�����Ϊ0����ʾ��¼Ϊ�գ������Ϊ0����ʾͨѶ¼�е���ϵ����Ϣ
	if (abs->m_Size == 0)
	{
		cout << "��ǰͨѶ¼�ļ�¼Ϊ�գ�" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "������" << abs->personArray[i].m_Name << "\t";
			cout << "�Ա�" << (abs->personArray[i].m_Sex == 1 ? "��" : "Ů") << "\t";
			cout << "���䣺" << abs->personArray[i].m_Age << "\t";
			cout << "�绰��" << abs->personArray[i].m_Phone << "\t";
			cout << "��ַ��" << abs->personArray[i].m_Address << endl;
		}
	}
	system("pause");
	system("cls");
}

//3. ɾ����ϵ��
//3.1 �����ϵ���Ƿ���ڣ�������ڣ�������ϵ�����������еľ���λ�ã������ڷ���-1
int isExist(Addressbooks * abs, string name)  //����1 ͨѶ¼ ������2 �Ա�����
{
	for (int i = 0; i < abs->m_Size; i++)
	{
		//�ҵ��û����������
		if (abs->personArray[i].m_Name == name)
		{
			return i;  //�ҵ�����������������е��±���
		}
	}
	return -1;  //�������������û�ҵ�������-1
}

//3.2 ɾ��ָ����ϵ��
void deletePerson(Addressbooks * abs)
{
	cout << "������Ҫɾ������ϵ�˵�������" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1)
	{
		//���ҵ���ϵ�ˣ�Ҫ����ɾ������
		for (int i = ret; i < abs->m_Size; i++)
		{
			//����ǰ��
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_Size--;  //����ͨѶ¼�е���Ա
		cout << "ɾ���ɹ���" << endl;
	}
	else
	{
		cout << "���޴��ˣ��޷�ɾ����" << endl;
	}
	system("pause");
	system("cls");
}

//4. ������ϵ��
void findPerson(Addressbooks * abs)
{
	cout << "����Ҫ���ҵ���ϵ�˵�������" << endl;
	string name;
	cin >> name;
	//�ж�ָ������ϵ���Ƿ����ͨѶ¼��
	int ret = isExist(abs, name);
	if (ret != -1)  //��ϵ�˴���
	{
		cout << "������" << abs->personArray[ret].m_Name << "\t";
		cout << "�Ա�" << (abs->personArray[ret].m_Sex == 1 ? "��" : "Ů") << "\t";
		cout << "���䣺" << abs->personArray[ret].m_Age << "\t";
		cout << "�绰��" << abs->personArray[ret].m_Phone << "\t";
		cout << "��ַ��" << abs->personArray[ret].m_Address << endl;
	}
	else  //��ϵ�˲�����
	{
		cout << "���޴��ˣ�" << endl;
	}
	system("pause");
	system("cls");
}

//5. �޸���ϵ��
void modifyPerson(Addressbooks * abs)
{
	cout<<"����Ҫ�޸ĵ���ϵ�˵�������" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1)  //��ϵ�˴���
	{
		//����
		string name;
		cout << "������������" << endl;
		cin >> name;
		abs->personArray[ret].m_Name = name;
		//�Ա�
		cout << "�������Ա�" << endl;
		cout << "1 --- ��" << endl;
		cout << "2 --- Ů" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)  //����������1����2�������˳�ѭ������Ϊ���������ȷֵ
			{
				abs->personArray[ret].m_Sex = sex;
				break;
			}
			cout << "�����������������룺" << endl;  //��������������������
		}

		//����
		cout << "���������䣺" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[ret].m_Age = age;

		//�绰
		cout << "������绰��" << endl;
		string phone;
		cin >> phone;
		abs->personArray[ret].m_Phone = phone;

		//��ַ
		cout << "�������ַ��" << endl;
		string address;
		cin >> address;
		abs->personArray[ret].m_Address = address;

		cout << "�޸ĳɹ���" << endl;
	}
	else  //��ϵ�˲�����
	{
		cout << "���޴��ˣ��޷��޸ģ�" << endl;
	}
	system("pause");
	system("cls");
}

//6. �����ϵ��
void cleanPerson(Addressbooks * abs)
{
	//abs->m_Size = 0;  //����ǰ��¼����ϵ��������Ϊ0�����߼��ϵ���ղ���
	cout << "ȷ���Ƿ�Ҫ���������ϵ���������롰�ǡ��򡰷񡱣�" << endl;
	string isSure;
	while (true)
	{
		cin >> isSure;
		if (isSure == "��" || isSure == "��")
		{
			if (isSure == "��")
			{
				abs->m_Size = 0;
				cout << "��ճɹ���" << endl;
				break;
			}
			else if(isSure == "��")
			{
				break;
			}
		}
		cout << "�����������������룺" << endl;  //��������������������
	}
	system("pause");
	system("cls");
}

//�˵����溯��
void showMenu()
{
	cout << "***************************" << endl;
	cout << "***��ӭ����ͨѶ¼����ϵͳ**" << endl;
	cout << "****** 1. �����ϵ�� ******" << endl;
	cout << "****** 2. ��ʾ��ϵ�� ******" << endl;
	cout << "****** 3. ɾ����ϵ�� ******" << endl;
	cout << "****** 4. ������ϵ�� ******" << endl;
	cout << "****** 5. �޸���ϵ�� ******" << endl;
	cout << "****** 6. �����ϵ�� ******" << endl;
	cout << "****** 0. �˳�ͨѶ¼ ******" << endl;
	cout << "***************************" << endl;
}

int main()
{
	//����ͨѶ¼�ṹ�����
	struct Addressbooks abs;
	//��ʼ��ͨѶ¼�е�ǰ��Ա����
	abs.m_Size = 0;

	int select = 0;  //�����û�ѡ������ı���

	while (true)
	{
		//�˵���������
		showMenu();

		cout << "��������Ҫ������ָ�" << endl;
		cin >> select;

		switch (select)
		{
		case 1:  // 1. �����ϵ��
			addPerson(&abs);  //���õ�ַ���ݿ�������ʵ��
			break;
		case 2:  // 2. ��ʾ��ϵ��
			showPerson(&abs);
			break;
		case 3:  // 3. ɾ����ϵ��
			deletePerson(&abs);
			break;
		case 4:  // 4. ������ϵ��
			findPerson(&abs);
			break;
		case 5:  // 5. �޸���ϵ��
			modifyPerson(&abs);
			break;
		case 6:  // 6. �����ϵ��
			cleanPerson(&abs);
			break;
		case 0:  // 0. �˳�ͨѶ¼
			cout << "��ӭ�´�ʹ�ã�" << endl;
			system("pause");
			return 0;
			break;
		}
	}

	system("pause");

	return 0;
}
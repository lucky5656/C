#include<iostream>
using namespace std;
#include<string>

//���һ��ѧ���࣬������������ѧ�ţ���������ѧ�Ÿ�ֵ��������ʾѧ����������ѧ�š�
class Student 
{
	//����Ȩ��
public:  //����Ȩ��

	//���е����Ժ���Ϊͳһ��Ϊ��Ա
	//���ԣ�Ҳ�г�Ա���ԡ���Ա����
	//��Ϊ��Ҳ�г�Ա��������Ա����

	//���ԣ�������
	string m_name;	//����
	int m_ID;  //ѧ��

	//��Ϊ��������
	void showStudent()	//��ʾѧ����������ѧ��
	{
		cout << "ѧ����������" << m_name << "    ѧ����ѧ�ţ�" << m_ID << endl;
	}

	//��������ֵ
	void setName(string name)
	{
		m_name = name;
	}

	//��ѧ�Ÿ�ֵ
	void setID(int ID)
	{
		m_ID = ID;
	}
};

int main()
{
	//ͨ��ѧ���ഴ��һ�������ѧ��������
	Student s1;  //ʵ��������
	//��s��������Խ��и�ֵ
	//s1.m_name = "����";
	s1.setName("����");  //ͨ����Ϊ�����Խ��и�ֵ
	//s1.m_ID = 1;
	s1.setID(1);
	//��ʾѧ����Ϣ
	s1.showStudent();

	Student s2; 
	s2.m_name = "����";
	s2.m_ID = 2;
	s2.showStudent();

	system("pause");

	return 0;
}
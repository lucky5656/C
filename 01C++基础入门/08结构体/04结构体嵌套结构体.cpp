#include<iostream>
using namespace std;
#include<string>

//�ṹ��Ƕ�׽ṹ��
//����ѧ���ṹ��
struct student
{
	string name;  	//ѧ��������
	int age;  	//ѧ��������
	int score;  	//ѧ���ķ���
};

//������ʦ�ṹ��
struct teacher
{
	int id;  //��ʦ�ı��
	string name;  //��ʦ������
	int age;  //��ʦ������
	struct student stu;  //������ѧ��
};

int main()
{
	//������ʦ
	struct teacher t;
	t.id = 10000;
	t.name = "����";
	t.age = 50;
	t.stu.name = "С��";
	t.stu.age = 20;
	t.stu.score = 60;

	cout << "��ʦ��������" << t.name << "    ��ʦ�ı�ţ�" << t.id << "    ��ʦ�����䣺" << t.age
		<< "    ������ѧ����������" << t.stu.name << "    ������ѧ�������䣺" << t.stu.age
		<< "    ������ѧ���ķ�����" << t.stu.score << endl;

	system("pause");

	return 0;
}
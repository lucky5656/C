#include<iostream>
using namespace std;
#include<string>

//�ṹ������������
//����ѧ���ṹ��
struct student
{
	string name;  	//ѧ��������
	int age;  	//ѧ��������
	int score;  	//ѧ���ķ���
};

//��ӡѧ����Ϣ�ĺ���
//1. ֵ����
void printStudent1(struct student s)
{
	s.age = 20;  //�޸�ֵ�����е��βΣ������޸�ʵ�Σ�main���������仹��18
	cout << "�Ӻ���1��ֵ����      ������" << s.name << "    ���䣺" << s.age << "    ������" << s.score << endl;
}

//2. ��ַ����
void printStudent2(struct student * p)
{
	p->age = 40;  //�޸ĵ�ַ�����е��βΣ����޸�ʵ�Σ�main�����������Ϊ40
	cout << "�Ӻ���2�е�ַ����    ������" << p->name << "    ���䣺" << p->age << "    ������" << p->score << endl;
}

int main()
{
	//��ѧ�����뵽һ�������У���ӡѧ�����ϵ�������Ϣ

	//�����ṹ�����
	struct student s;
	s.name = "����";
	s.age = 18;
	s.score = 100;

	printStudent1(s);
	printStudent2(&s);

	cout << "main������           ������" << s.name << "    ���䣺" << s.age << "    ������" << s.score << endl;

	system("pause");

	return 0;
}
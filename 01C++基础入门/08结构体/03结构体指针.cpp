#include<iostream>
using namespace std;
#include<string>

//�ṹ��ָ��
//����ѧ���ṹ��
struct Student
{
	//��Ա�б�
	string name;  	//����
	int age;  	//����
	int score;  	//����
};

int main()
{
	//1. ����ѧ���ṹ����� 
	struct Student s = { "����", 18, 100 };  //struct����ʡ��

	//2. ͨ��ָ��ָ��ṹ�����
	struct Student * p = &s;   //struct����ʡ��

	//3. ͨ��ָ����ʽṹ������е�����
	p->score = 80;  //ָ��ͨ�� -> ���������Է��ʳ�Ա
	cout << "������" << p->name << "    ���䣺" << p->age << "    ������" << p->score << endl;

	system("pause");

	return 0;
}
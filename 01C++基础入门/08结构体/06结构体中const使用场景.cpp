#include<iostream>
using namespace std;
#include<string>

//�ṹ����const��ʹ�ó���

//����ѧ���ṹ��
struct student
{
	string name;  	//ѧ��������
	int age;  	//ѧ��������
	int score;  	//ѧ���ķ���
};

//�������е��βθ�Ϊָ�룬���Լ����ڴ�ռ䣬���Ҳ��Ḵ���µĸ�������
void printStudents(const student *s)  //printStudents()������Ŀ��ֻΪ��ӡ��Ϣ��������ȥ�޸ģ�һ�������޸Ĳ�����Ӧ�ñ���
{
	//s->age = 150;  //����const֮��һ�����޸ĵĲ����ͻᱨ�����Է�ֹ�����
	cout << "������" << s->name << "    ���䣺" << s->age << "    ������" << s->score << endl;
}

int main()
{
	//�����ṹ�����
	struct student s = { "����", 18, 100 };

	//ͨ��������ӡ�ṹ�����
	printStudents(&s);

	cout << "main�е����������䣺" << s.age << endl;

	system("pause");

	return 0;
}
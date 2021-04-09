#include<iostream>
using namespace std;
#include<string>

//结构体嵌套结构体
//定义学生结构体
struct student
{
	string name;  	//学生的姓名
	int age;  	//学生的年龄
	int score;  	//学生的分数
};

//定义老师结构体
struct teacher
{
	int id;  //老师的编号
	string name;  //老师的姓名
	int age;  //老师的年龄
	struct student stu;  //辅导的学生
};

int main()
{
	//创建老师
	struct teacher t;
	t.id = 10000;
	t.name = "老王";
	t.age = 50;
	t.stu.name = "小王";
	t.stu.age = 20;
	t.stu.score = 60;

	cout << "老师的姓名：" << t.name << "    老师的编号：" << t.id << "    老师的年龄：" << t.age
		<< "    辅导的学生的姓名：" << t.stu.name << "    辅导的学生的年龄：" << t.stu.age
		<< "    辅导的学生的分数：" << t.stu.score << endl;

	system("pause");

	return 0;
}
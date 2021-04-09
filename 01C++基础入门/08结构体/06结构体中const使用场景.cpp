#include<iostream>
using namespace std;
#include<string>

//结构体中const的使用场景

//定义学生结构体
struct student
{
	string name;  	//学生的姓名
	int age;  	//学生的年龄
	int score;  	//学生的分数
};

//将函数中的形参改为指针，可以减少内存空间，而且不会复制新的副本出来
void printStudents(const student *s)  //printStudents()函数的目的只为打印信息，而不能去修改，一旦出现修改操作，应该报错
{
	//s->age = 150;  //加入const之后，一旦有修改的操作就会报错，可以防止误操作
	cout << "姓名：" << s->name << "    年龄：" << s->age << "    分数：" << s->score << endl;
}

int main()
{
	//创建结构体变量
	struct student s = { "张三", 18, 100 };

	//通过函数打印结构体变量
	printStudents(&s);

	cout << "main中的张三的年龄：" << s.age << endl;

	system("pause");

	return 0;
}
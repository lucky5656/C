#include<iostream>
using namespace std;
#include<string>

//结构体做函数参数
//定义学生结构体
struct student
{
	string name;  	//学生的姓名
	int age;  	//学生的年龄
	int score;  	//学生的分数
};

//打印学生信息的函数
//1. 值传递
void printStudent1(struct student s)
{
	s.age = 20;  //修改值传递中的形参，不会修改实参，main函数的年龄还是18
	cout << "子函数1中值传递      姓名：" << s.name << "    年龄：" << s.age << "    分数：" << s.score << endl;
}

//2. 地址传递
void printStudent2(struct student * p)
{
	p->age = 40;  //修改地址传递中的形参，会修改实参，main函数的年龄变为40
	cout << "子函数2中地址传递    姓名：" << p->name << "    年龄：" << p->age << "    分数：" << p->score << endl;
}

int main()
{
	//将学生传入到一个参数中，打印学生身上的所有信息

	//创建结构体变量
	struct student s;
	s.name = "张三";
	s.age = 18;
	s.score = 100;

	printStudent1(s);
	printStudent2(&s);

	cout << "main函数中           姓名：" << s.name << "    年龄：" << s.age << "    分数：" << s.score << endl;

	system("pause");

	return 0;
}
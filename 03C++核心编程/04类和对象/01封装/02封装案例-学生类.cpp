#include<iostream>
using namespace std;
#include<string>

//设计一个学生类，属性有姓名和学号，给姓名和学号赋值，可以显示学生的姓名和学号。
class Student 
{
	//访问权限
public:  //公共权限

	//类中的属性和行为统一称为成员
	//属性：也叫成员属性、成员变量
	//行为：也叫成员函数、成员方法

	//属性（变量）
	string m_name;	//姓名
	int m_ID;  //学号

	//行为（函数）
	void showStudent()	//显示学生的姓名和学号
	{
		cout << "学生的姓名：" << m_name << "    学生的学号：" << m_ID << endl;
	}

	//给姓名赋值
	void setName(string name)
	{
		m_name = name;
	}

	//给学号赋值
	void setID(int ID)
	{
		m_ID = ID;
	}
};

int main()
{
	//通过学生类创建一个具体的学生（对象）
	Student s1;  //实例化对象
	//给s对象的属性进行赋值
	//s1.m_name = "张三";
	s1.setName("张三");  //通过行为给属性进行赋值
	//s1.m_ID = 1;
	s1.setID(1);
	//显示学生信息
	s1.showStudent();

	Student s2; 
	s2.m_name = "李四";
	s2.m_ID = 2;
	s2.showStudent();

	system("pause");

	return 0;
}
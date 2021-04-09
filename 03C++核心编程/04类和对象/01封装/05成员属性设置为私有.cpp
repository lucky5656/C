#include<iostream>
using namespace std;
#include<string>

//将成员属性设置为私有
//1. 将所有成员属性设置为私有，可以自己控制读写权限
//2. 对于写权限，我们可以检测数据的有效性

class Person
{
public:
	//设置姓名
	void setName(string name)
	{
		m_Name = name;
	}
	//获取姓名
	string getName()
	{
		return m_Name;
	}

	////获取年龄
	//int getAge()
	//{
	//	m_Age = 20;
	//	return m_Age;
	//}

	//获取年龄（年龄改为可读可写，如果想修改，则年龄必须在0~150之间）
	int getAge()
	{
		return m_Age;
	}
	//设置年龄
	void setAge(int age)
	{
		if (age < 0 || age > 150)
		{
			m_Age = 0;
			cout << "输入有误！" << endl;
			return;
		}
		m_Age = age;
	}

	//设置爱人
	void setLover(string lover)
	{
		m_Lover = lover;
	}

private:
	string m_Name;  //姓名（可读可写）
	int m_Age;  //年龄（只读）
	string m_Lover;  //爱人（只写）
};

int main()
{
	Person p;
	p.setName("张三");
	cout << "姓名为：" << p.getName() << endl;

	//p.m_Age = 18;  //错误，年龄只读
	//p.setAge(18);
	p.setAge(18);
	cout << "年龄为：" << p.getAge() << endl;

	p.setLover("小红");
	//cout << "爱人为：" << p.getLover() << endl;  //错误，爱人在类外不可访问，只写

	system("pause");

	return 0;
}
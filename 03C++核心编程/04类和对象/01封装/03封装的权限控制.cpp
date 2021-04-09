#include<iostream>
using namespace std;
#include<string>

//访问权限有三种：
//1. public  公共权限 ：成员类内可以访问，类外可以访问
//2. protected  保护权限 ：成员类内可以访问，类外不可以访问（子类可以访问父类中的保护内容）
//3. private  私有权限 ： 成员类内可以访问，类外不可以访问（子类不可以访问父类中的私有内容）

class Person
{
	//访问权限
public:  //公共权限
	string m_Name;  //姓名
protected:  //保护权限
	string m_Car;  //汽车
private:  //私有权限
	int m_Password;  //银行卡密码

public:
	void func()
	{
		m_Name = "张三";
		m_Car = "拖拉机";
		m_Password = 123456;
	}
};

int main()
{
	//实例化对象
	Person p1;

	p1.m_Name = "李四";
	//p1.m_Car = "奔驰";  //保护权限内容，在类外访问不到
	//p1.m_Password = 123789;  //私有权限内容，在类外访问不到

	p1.func();

	system("pause");

	return 0;
}
#include<iostream>
using namespace std;
#include<string>

//结构体数组
//1. 定义结构体
struct Student  
{
	//成员列表
	string name;  	//姓名
	int age;  	//年龄
	int score;  	//分数
};  

int main()
{
	//2. 创建结构体数组
	struct Student stuArray[3] =
	{
		{"张三", 18, 100},
		{"李四", 19, 80},
		{"王五", 20, 60}
	};

	//3. 给结构体数组中的元素赋值
	stuArray[2].name = "赵六";  //对第三个学生的信息进行重新赋值
	stuArray[2].age = 80;
	stuArray[2].score = 70;

	//4. 遍历结构体数组
	for (int i = 0; i < 3; i++)
	{
		cout << "姓名：" << stuArray[i].name 
			 << "    年龄：" << stuArray[i].age 
			 << "    分数：" << stuArray[i].score << endl;
	}

	system("pause");

	return 0;
}
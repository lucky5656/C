//#include<iostream>
//using namespace std;
//#include<string>
//
////结构体指针
////定义学生结构体
//struct Student
//{
//	//成员列表
//	string name;  	//姓名
//	int age;  	//年龄
//	int score;  	//分数
//};
//
//int main()
//{
//	//1. 创建学生结构体变量 
//	struct Student s = { "张三", 18, 100 };  //struct可以省略
//
//	//2. 通过指针指向结构体变量
//	struct Student * p = &s;   //struct可以省略
//
//	//3. 通过指针访问结构体变量中的数据
//	p->score = 80;  //指针通过 -> 操作符可以访问成员
//	cout << "姓名：" << p->name << "    年龄：" << p->age << "    分数：" << p->score << endl;
//
//	system("pause");
//
//	return 0;
//}
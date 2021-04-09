#include<iostream>
using namespace std;

int main()
{

	//选择结构：多行if语句
	//用户输入分数，如果分数大于600，视为考上一本大学，在屏幕上输出；如果没考上一本大学，打印未考上一本大学
	//1.用户输入分数
	int score = 0;
	cout << "请输入一个分数：" << endl;
	cin >> score;

	//2.打印用户输入的分数
	cout << "您输入的分数为：" << score << endl;

	//3.判断分数是否大于600，如果大于，打印考上一本，否则打印未考上一本大学
	if (score > 600)  //要注意的是，在if判断语句后面，不要加分号
	{
		cout << "恭喜您考上一本大学！" << endl;
	}
	else
	{
		cout << "很遗憾，您未考上一本大学！" << endl;
	}

	system("pause");

	return 0;

}
#include<iostream>
using namespace std;

int main()
{

	/*
	-提示用户输入一个高考考试分数；
    - 根据分数做出判断：分数如果大于600分视为考上一本，大于500分考上二本，大于400考上三本，其余视为未考上本科；
    - 在一本分数中，如果大于700分，考入北大；大于650分，考入清华；大于600考入人大。
	*/

	//1.用户输入分数
	int score = 0;
	cout << "请输入一个分数：" << endl;
	cin >> score;

	//2.打印用户输入的分数
	cout << "您输入的分数为：" << score << endl;

	//3.判断
	//如果大于600，考上一本；
		//大于700，北大；
		//大于650，清华；
		//其余，人大；
	//如果大于500，考上二本；
	//如果大于400，考上三本；
	//否则，未考上大学
	if (score > 600)  //要注意的是，在if判断语句后面，不要加分号
	{
		cout << "恭喜您考上一本大学！" << endl;
		if (score > 700)
		{
			cout << "您能考入北大！" << endl;
		}
		else if (score > 650)
		{
			cout << "您能考入北大！" << endl;
		}
		else
		{
			cout << "您能考入人大！" << endl;
		}
	}
	else if (score > 500)  //要注意的是，在if判断语句后面，不要加分号
	{
		cout << "恭喜您考上二本大学！" << endl;
	}
	else if (score > 400)  //要注意的是，在if判断语句后面，不要加分号
	{
		cout << "恭喜您考上三本大学！" << endl;
	}
	else
	{
		cout << "很遗憾，您未考上大学！" << endl;
	}

	system("pause");

	return 0;

}
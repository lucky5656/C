#include<iostream>
using namespace std;

int main()
{
	//switch语句
	//给一个电影进行打分：10~9  经典；8~7 非常好；5~6 一般；5以下 烂片

	//1.提示用户给电影评分
	cout << "请给电影进行打分：" << endl;

	//2.用户开始进行打分
	int score = 0;
	cin >> score;
	cout << "您打的分数为：" << score << endl;

	//3.根据用户输入的分数来提示用户最后的结果
	switch (score)
	{
	case 10:
		cout << "您认为此电影是经典！" << endl;
		break;  //退出当前分支
	case 9:
		cout << "您认为此电影是经典！" << endl;
		break;
	case 8:
		cout << "您认为此电影非常好！" << endl;
		break;
	case 7:
		cout << "您认为此电影非常好！" << endl;
		break;
	case 6:
		cout << "您认为此电影一般！" << endl;
		break;
	case 5:
		cout << "您认为此电影一般！" << endl;
		break;
	default:
		cout << "您认为此电影是烂片！" << endl;
		break;
	}

	system("pause");

	return 0;

}
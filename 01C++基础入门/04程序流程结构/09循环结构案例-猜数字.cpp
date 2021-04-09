#include<iostream>
using namespace std;
#include<ctime>  //time系统时间包含的头文件

int main()
{

	//添加随机种子，作用是利用当前系统时间生成随机数，防止每次随机数都一样
	srand((unsigned int)time(NULL));

	//1.系统生成随机数
	int num = rand() % 100 + 1;  //rand()%100+1 生成 0+1~99+1随机数
	//cout << num << endl;

	//2.玩家进行猜测
	int val = 0;

	while (1)
	{
		cout << "请玩家输入一个猜测的数字：" << endl;
		cin >> val;  //玩家输入数据

		//3.判断玩家的猜测
	    //猜错，提示玩家猜测过大还是过小，并返回第二步
		if (val > num)
		{
			cout << "猜测过大！" << endl;
		}
		else if (val < num)
		{
			cout << "猜测过小！" << endl;
		}
		else
		{
			cout << "恭喜您猜对了！" << endl;
			//猜对，退出游戏
			break;  //可利用break关键字来退出当前循环
		}
	}

	system("pause");

	return 0;

}
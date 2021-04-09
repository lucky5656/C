#include<iostream>
using namespace std;

int main()
{

	//continue语句
	for (int i = 0; i <= 10; i++)
	{
		//如果是奇数，输出；如果是偶数，不输出
		if (i % 2 == 0)  //如果是偶数
		{
			continue;  //可以筛选条件，执行到此就不再向下执行，接着执行下一次循环
		}
		cout << i << endl;
	}

	system("pause");

	return 0;

}
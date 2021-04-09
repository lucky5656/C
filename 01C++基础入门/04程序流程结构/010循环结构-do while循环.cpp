#include<iostream>
using namespace std;

int main()
{

	//do...while循环语句
	//在屏幕中输出0到9这10个数字

	int num = 0;

	do
	{
		cout << num << endl;
		num++;
	} 
	while (num < 10);
	
	system("pause");

	return 0;

}
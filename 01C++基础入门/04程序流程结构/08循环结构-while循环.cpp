#include<iostream>
using namespace std;

int main()
{
	//while循环
	//在屏幕中打印0~9这10个数字
	int num = 0;
	while (num < 10)  //while()小括号中需填入循环条件，且要避免死循环的出现
	{
		cout << num << endl;
		num++;
	}


	system("pause");

	return 0;

}
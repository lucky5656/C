#include <iostream>
using namespace std;

int main()
{

	//布尔类型
	//1.创建bool数据类型
	bool flag = true;  //true代表真,本质上为1
	cout << flag << endl;
	flag = false;  //false代表假,本质上为0
	cout << flag << endl;
	
	//2.查看bool类型所占内存空间
	cout << "bool类型所占内存空间：" << sizeof(bool) << endl;

	system("pause");

	return 0;

}
#include <iostream>
using  namespace std;

//1、#define宏常量
#define Day 7  

int  main()
{

	//Day = 14;  //错误，定义的Day是常量，一旦修改，就会报错
	cout << "一周总共有：" << Day << "天" << endl;

	//2、const修饰的变量
	const int month = 12;  
	//month = 24; //错误，const修饰的变量也称为常量，一旦修改，就会报错

	cout << "一年总共有：" << month << "月" << endl;

	system("pause");

	return 0;

}
#include<iostream>
using namespace std;

int main()
{
	//数组
	/*
	  1.数据类型 数组名[数组长度];
	  2.数据类型 数组名[数组长度] = { 值1，值2 ... };
	  3.数据类型 数组名[] = { 值1，值2 ... };
	*/
	
	//1.数据类型 数组名[数组长度];
	int arr1[3];
	//给数组中的元素进行赋值
	arr1[0] = 10;  //数组中的元素是从0开始索引的
	arr1[1] = 20;
	arr1[2] = 30;

	//访问数据元素
	cout << arr1[0] << endl;
	cout << arr1[1] << endl;
	cout << arr1[2] << endl;

	//2.数据类型 数组名[数组长度] = { 值1，值2 ... };
	//如果在初始化数据时，没有全部填写完，会用0来填补剩余数据
	int arr2[5] = { 40, 50, 60 };

	//cout << arr2[0] << endl;
	//cout << arr2[1] << endl;
	//cout << arr2[2] << endl;

	//利用循环来输出数组中的元素
	for (int i = 0; i < 3; i++)
	{
		cout << arr2[i] << endl;
	}

	//3.数据类型 数组名[] = { 值1，值2 ... };
	//定义数组的时候，必须有初始长度
	int arr3[] = { 70, 80, 90, };
	for (int i = 0; i < 3; i++)
	{
		cout << arr3[i] << endl;
	}

	system("pause");

	return 0;

}
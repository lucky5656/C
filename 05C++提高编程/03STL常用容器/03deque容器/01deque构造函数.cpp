#include<iostream>
using namespace std;
#include<deque>

//deque构造函数

void printDeque(const deque<int>&d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		//*it = 100;  //容器中的数据不可以修改
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	deque<int>d1;  //默认构造形式
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printDeque(d1);

	deque<int>d2(d1.begin(), d1.end());  //构造函数将[beg, end)区间中的元素拷贝给本身
	printDeque(d2);

	deque<int>d3(10, 100);  //构造函数将n个elem拷贝给本身
	printDeque(d3);

	deque<int>d4(d3);  //拷贝构造函数
	printDeque(d4);
}

int main()
{
	test01();

	system("pause");

	return 0;
}
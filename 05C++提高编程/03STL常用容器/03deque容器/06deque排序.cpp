#include<iostream>
using namespace std;
#include<deque>
#include<algorithm>  //标准算法头文件

void printDeque(deque<int>&d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//deque排序（默认顺序为升序，从小到达排序）
//对于支持随机访问的迭代器的容器，都可以利用sort算法直接对其进行排序
//vector容器也可以利用sort进行排序
void test01()
{
	deque<int>d;
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_front(100);
	d.push_front(200);
	d.push_front(300);
	cout << "排序前：" << endl;
	printDeque(d);  //300 200 100 10 20 30

	//排序
	sort(d.begin(), d.end());
	cout << "排序后：" << endl;
	printDeque(d);  //10 20 30 100 200 300
}

int main()
{
	test01();

	system("pause");

	return 0;
}
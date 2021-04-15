#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>  //标准算法头文件
 
//vector容器存放内置数据类型
void myPrint(int val)
{
	cout << val << endl;
}

void test01()
{
	//创建一个vector容器，可认为数组
	vector<int> v; 

	//向容器中插入数据
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	//通过迭代器访问容器中的数据

	cout << "第一种遍历方式：" << endl;
	vector<int>::iterator itBegin = v.begin();  //起始迭代器，指向容器中第一个元素的位置
	vector<int>::iterator itEnd = v.end();  //结束迭代器，指向容器中最后一个元素的下一个位置

	//第一种遍历方式
	while (itBegin != itEnd)
	{
		cout << *itBegin << endl;
		itBegin++;
	}

	//第二种遍历方式
	cout << "第二种遍历方式：" << endl;
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << endl;
	}

	//第三种遍历方式
	cout << "第三种遍历方式：" << endl;
	for_each(v.begin(), v.end(), myPrint);
}

int main()
{
	test01();

	system("pause");

	return 0;
}
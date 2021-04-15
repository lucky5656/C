#include<iostream>
using namespace std;
#include<vector> 
#include<algorithm>
#include<functional>  //内建函数对象头文件

//关系仿函数：大于greater<>

void test01()
{
	vector<int>v;

	v.push_back(10);
	v.push_back(30);
	v.push_back(40);
	v.push_back(20);
	v.push_back(50);

	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	//降序
	sort(v.begin(), v.end(), greater<int>());  //greater<int>()为内建函数对象，相当于自己写的实现降序排序规则的仿函数
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

int main()
{
	test01();

	system("pause");

	return 0;
}
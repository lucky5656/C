#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<string>

//常用查找算法：binary_search

void test01()
{
	vector<int>v;

	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	//v.push_back(2);  //如果是无序序列，结果未知！

	//查找容器中是否有9这个元素
	bool ret = binary_search(v.begin(), v.end(),9);  //注意：binary_search使用时，容器必须是有序序列
	if (ret)
	{
		cout << "找到等于9的元素！" << endl;
	}
	else
	{
		cout << "未找到等于9的元素！" << endl;
	}
}

int main()
{
	test01();

	system("pause");

	return 0;
}
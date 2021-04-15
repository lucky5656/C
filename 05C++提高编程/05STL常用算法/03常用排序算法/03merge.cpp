#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
#include<functional>
#include<ctime>

//常用排序算法：merge

void myPrint(int val)
{
	cout << val << " ";
}

void test01()
{
	vector<int>v1;
	vector<int>v2;

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 1);
	}

	//目标容器
	vector<int>vTarget;

	vTarget.resize(v1.size() + v2.size());  //目标容器需要提前开辟空间

	//利用merge将两个容器v1和v2合并，并存储到另一容器vTarget中
	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());

	for_each(vTarget.begin(), vTarget.end(), myPrint);
	cout << endl;
}

int main()
{
	test01();

	system("pause");

	return 0;
}
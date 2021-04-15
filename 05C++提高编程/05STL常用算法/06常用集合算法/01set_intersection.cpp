#include<iostream>
using namespace std;
#include<vector>;
#include<algorithm>

//常用集合算法：set_intersection

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
		v1.push_back(i);  //0~9
		v2.push_back(i + 5);  //5~14
	}
	cout << "v1：";
	for_each(v1.begin(), v1.end(), myPrint);
	cout << endl;
	cout << "v2：";
	for_each(v2.begin(), v2.end(), myPrint);
	cout << endl;

	//目标容器（需要提前开辟空间，最特殊情况为大容器包含小容器，开辟空间取小容器的size即可）
	vector<int>vTarget;

	vTarget.resize(min(v1.size(),v2.size()));  //开辟空间（取小容器的size，可能会比交集的size大一些）

	//获取交集
	cout << "v1和v2的交集：";
	vector<int>::iterator itEnd = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());

	for_each(vTarget.begin(), itEnd, myPrint);  //结束迭代器选择求交集得到的结束迭代器，而不是目标容器的结束迭代器，因为目标容器的size可能会比交集的size偏大一些
	cout << endl;
}

int main()
{
	test01();

	system("pause");

	return 0;
}
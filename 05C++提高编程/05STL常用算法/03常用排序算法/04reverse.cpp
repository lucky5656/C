#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
#include<functional>

//常用排序算法：reverse

void myPrint(int val)
{
	cout << val << " ";
}

void test01()
{
	vector<int>v;

	v.push_back(10);
	v.push_back(30);
	v.push_back(50);
	v.push_back(20);
	v.push_back(40);

	cout << "反转前：" << endl;
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;

	//利用reverse将容器内元素进行反转
	reverse(v.begin(), v.end());

	cout << "反转后：" << endl;
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;
}

int main()
{
	test01();

	system("pause");

	return 0;
}
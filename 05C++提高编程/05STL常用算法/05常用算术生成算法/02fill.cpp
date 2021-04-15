#include<iostream>
using namespace std;
#include<vector>
#include<numeric>
#include<algorithm>

//常用算术生成算法：fill

void myPrint(int val)
{
	cout << val << " ";
}

void test01()
{
	vector<int>v;
	v.resize(10);  //系统会默认填充0
	cout << "利用fill填充前：" << endl;
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;

	//利用fill后期重新向容器中填充指定的元素
	fill(v.begin(), v.end(), 100);

	cout << "利用fill填充后：" << endl;
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;
}

int main()
{
	test01();

	system("pause");

	return 0;
}
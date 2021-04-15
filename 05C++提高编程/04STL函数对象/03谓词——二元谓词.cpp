#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

//二元谓词

class MyCompare
{
public:
	bool operator()(int val1, int val2)  //二元谓词
	{
		return val1 > val2;
	}
};

void test01()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(40);
	v.push_back(20);
	v.push_back(30);
	v.push_back(50);

	cout << "升序排列：" << endl;
	sort(v.begin(), v.end());
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	cout << "---------------------" << endl;

	//使用对象函数改变算法策略，变为降序
	cout << "降序排列：" << endl;
	sort(v.begin(), v.end(), MyCompare());
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
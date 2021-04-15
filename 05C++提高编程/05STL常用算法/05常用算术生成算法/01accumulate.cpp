#include<iostream>
using namespace std;
#include<vector>
#include<numeric>

//常用算术生成算法：accumulate

void test01()
{
	vector<int>v;

	for (int i = 0; i <= 100; i++)
	{
		v.push_back(i);
	}
	int total = accumulate(v.begin(), v.end(), 0);  //参数3：起始累加值（如果为0，total = 5050；如果为1000，total = 6050）

	cout << "total = " << total << endl;
}

int main()
{
	test01();

	system("pause");

	return 0;
}
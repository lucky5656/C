#include<iostream>
using namespace std;
#include<vector>
#include<numeric>

//�������������㷨��accumulate

void test01()
{
	vector<int>v;

	for (int i = 0; i <= 100; i++)
	{
		v.push_back(i);
	}
	int total = accumulate(v.begin(), v.end(), 0);  //����3����ʼ�ۼ�ֵ�����Ϊ0��total = 5050�����Ϊ1000��total = 6050��

	cout << "total = " << total << endl;
}

int main()
{
	test01();

	system("pause");

	return 0;
}
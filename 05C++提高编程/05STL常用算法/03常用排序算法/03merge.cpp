#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
#include<functional>
#include<ctime>

//���������㷨��merge

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

	//Ŀ������
	vector<int>vTarget;

	vTarget.resize(v1.size() + v2.size());  //Ŀ��������Ҫ��ǰ���ٿռ�

	//����merge����������v1��v2�ϲ������洢����һ����vTarget��
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
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<string>

//���ò����㷨��adjacent_find

void test01()
{
	vector<int>v;

	v.push_back(0);
	v.push_back(2);
	v.push_back(0);
	v.push_back(3); 
	v.push_back(1);
	v.push_back(4);
	v.push_back(3);
	v.push_back(3);

	//�����������Ƿ��������ظ�Ԫ��
	vector<int>::iterator it = adjacent_find(v.begin(), v.end());
	if (it == v.end())
	{
		cout << "δ�ҵ������ظ�Ԫ�أ�" << endl;
	}
	else
	{
		cout << "�ҵ������ظ�Ԫ�أ�" << *it << endl;
	}
}

int main()
{
	test01();

	system("pause");

	return 0;
}
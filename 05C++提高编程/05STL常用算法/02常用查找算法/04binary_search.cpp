#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<string>

//���ò����㷨��binary_search

void test01()
{
	vector<int>v;

	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	//v.push_back(2);  //������������У����δ֪��

	//�����������Ƿ���9���Ԫ��
	bool ret = binary_search(v.begin(), v.end(),9);  //ע�⣺binary_searchʹ��ʱ��������������������
	if (ret)
	{
		cout << "�ҵ�����9��Ԫ�أ�" << endl;
	}
	else
	{
		cout << "δ�ҵ�����9��Ԫ�أ�" << endl;
	}
}

int main()
{
	test01();

	system("pause");

	return 0;
}
#include<iostream>
using namespace std;
#include<vector>

void printVector(vector<int>&v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//vector�����ʹ�С����
void test01()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);

	if (v1.empty())  //Ϊ�棬��������Ϊ��
	{
		cout << "v1Ϊ�գ�" << endl;
	}
	else
	{
		cout << "v1��Ϊ�գ�" << endl;
		cout << "v1������Ϊ��" << v1.capacity() << endl;
		cout << "v1�Ĵ�СΪ��" << v1.size() << endl;
	}

	//����ָ����С
	v1.resize(15, 100);  //�������ָ���ı�ԭ�����ˣ�Ĭ����0������µ�λ�ã�Ҳ�����������صİ汾ͨ������2ָ��Ĭ�����ֵ
	printVector(v1);

	v1.resize(5);  //�������ָ���ı�ԭ�����ˣ��������ֻᱻɾ��
	printVector(v1);
}

int main()
{
	test01();

	system("pause");

	return 0;
}
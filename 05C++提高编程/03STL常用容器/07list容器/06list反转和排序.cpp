#include<iostream>
using namespace std;
#include<list>

//list��ת������

void printList(const list<int>&L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	list<int>L1;

	L1.push_back(20);
	L1.push_back(10);
	L1.push_back(50);
	L1.push_back(40);
	L1.push_back(30);

	cout << "��תǰ��" << endl;
	printList(L1);
	L1.reverse();  // ��ת
	cout << "��ת��" << endl;
	printList(L1);
}

bool myCompare(int v1, int v2)
{
	//�����õ�һ�������ڵڶ�����
	return v1 > v2;
}

void test02()
{
	list<int>L1;

	L1.push_back(20);
	L1.push_back(10);
	L1.push_back(50);
	L1.push_back(40);
	L1.push_back(30);

	cout << "����ǰ��" << endl;
	printList(L1);

	//sort(L1.begin(), L1.end());  //�������в�֧��������ʵ��������������������ñ�׼�㷨�������ڲ����ṩ��ӦһЩ�㷨
	L1.sort();  // ����Ĭ����������Ǵ�С���󣬼�����
	cout << "�����" << endl;
	printList(L1);

	L1.sort(myCompare);  //����
	printList(L1);
}

int main()
{
	test01();
	test02();

	system("pause");

	return 0;
}
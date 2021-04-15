#include<iostream>
using namespace std;
#include<deque>
#include<algorithm>  //��׼�㷨ͷ�ļ�

void printDeque(deque<int>&d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//deque����Ĭ��˳��Ϊ���򣬴�С��������
//����֧��������ʵĵ�����������������������sort�㷨ֱ�Ӷ����������
//vector����Ҳ��������sort��������
void test01()
{
	deque<int>d;
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_front(100);
	d.push_front(200);
	d.push_front(300);
	cout << "����ǰ��" << endl;
	printDeque(d);  //300 200 100 10 20 30

	//����
	sort(d.begin(), d.end());
	cout << "�����" << endl;
	printDeque(d);  //10 20 30 100 200 300
}

int main()
{
	test01();

	system("pause");

	return 0;
}
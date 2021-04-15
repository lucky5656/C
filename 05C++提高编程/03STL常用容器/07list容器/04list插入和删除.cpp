#include<iostream>
using namespace std;
#include<list>

//list�����ɾ��

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
	list<int>L;
	//β��
	L.push_back(10);
	L.push_back(20);
	L.push_back(30);

	//ͷ��
	L.push_front(100); 
	L.push_front(200);
	L.push_front(300);

	printList(L);  //300 200 100 10 20 30

	//βɾ
	L.pop_back();
	printList(L);  //300 200 100 10 20

	//ͷɾ
	L.pop_front();
	printList(L);  //200 100 10 20

	//insert����
	L.insert(L.begin(),1000);
	printList(L);  //1000 200 100 10 20

	list<int>::iterator it = L.begin();
	L.insert(++it, 20000);
	printList(L);  //1000 20000 200 100 10 20 

	//ɾ��
	it = L.begin();
	L.erase(++it);
	printList(L);  //1000 200 100 10 20

	//�Ƴ�
	L.push_back(10000);
	L.push_back(10000); 
	L.push_back(10000);
	printList(L);  //1000 200 100 10 20 10000 10000 10000
	L.remove(10000);  //ɾ��������������10000ֵƥ���Ԫ��
	printList(L);  //1000 200 100 10 20

	//���
	L.clear();
	printList(L);  //��ӡһ�пո�
}

int main()
{
	test01();

	system("pause");

	return 0;
}
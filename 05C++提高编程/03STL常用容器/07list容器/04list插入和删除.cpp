#include<iostream>
using namespace std;
#include<list>

//list插入和删除

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
	//尾插
	L.push_back(10);
	L.push_back(20);
	L.push_back(30);

	//头插
	L.push_front(100); 
	L.push_front(200);
	L.push_front(300);

	printList(L);  //300 200 100 10 20 30

	//尾删
	L.pop_back();
	printList(L);  //300 200 100 10 20

	//头删
	L.pop_front();
	printList(L);  //200 100 10 20

	//insert插入
	L.insert(L.begin(),1000);
	printList(L);  //1000 200 100 10 20

	list<int>::iterator it = L.begin();
	L.insert(++it, 20000);
	printList(L);  //1000 20000 200 100 10 20 

	//删除
	it = L.begin();
	L.erase(++it);
	printList(L);  //1000 200 100 10 20

	//移除
	L.push_back(10000);
	L.push_back(10000); 
	L.push_back(10000);
	printList(L);  //1000 200 100 10 20 10000 10000 10000
	L.remove(10000);  //删除容器中所有与10000值匹配的元素
	printList(L);  //1000 200 100 10 20

	//清空
	L.clear();
	printList(L);  //打印一行空格
}

int main()
{
	test01();

	system("pause");

	return 0;
}
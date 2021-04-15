#include<iostream>
using namespace std;
#include<map>

//mapÅÅĞò

//·Âº¯Êı
class compareMap  
{
public:
	bool operator()(int v1, int v2)
	{
		return v1 > v2;  //½µĞò
	}
};

void test01()
{
	map<int, int, compareMap>m;

	m.insert(make_pair(2, 20));
	m.insert(make_pair(1, 10));
	m.insert(make_pair(5, 50));
	m.insert(make_pair(3, 30));
	m.insert(make_pair(4, 40));

	for (map<int, int, compareMap>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << it->first << "    value = " << it->second << endl;
	}
}

int main()
{
	test01();

	system("pause");

	return 0;
}
#include<iostream>
using namespace std;
#include<map>

//mapͳ�ƺͲ���

void test01()
{
	map<int, int>m;

	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(3, 40));

	//����
	map<int, int>::iterator pos = m.find(3);
	
	if (pos != m.end())
	{
		cout << "���ҵ�Ԫ�� key = " << (*pos).first << "    value = " << (*pos).second << endl;
	}
	else
	{
		cout << "δ�ҵ�Ԫ�أ�" << endl;
	}

	//ͳ��
	int num = m.count(3);  //map����������ظ���keyԪ�أ�����map���ԣ�count���ҪôΪ0��ҪôΪ1
	cout << "num = " << num << endl;
}

int main()
{
	test01();

	system("pause");

	return 0;
}
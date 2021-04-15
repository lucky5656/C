#include<iostream>
using namespace std;
#include<map>

//map�����ɾ��

void printMap(map<int, int>&m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << it->first << "    value = " << it->second << endl;
	}
	cout << endl;
}

void test01()
{
	map<int, int>m;

	//����
	//��һ�ַ�ʽ
	m.insert(pair<int, int>(1, 10));

	//�ڶ��ַ�ʽ
	m.insert(make_pair(2, 20));

	//�����ַ�ʽ
	m.insert(map<int, int>::value_type(3, 30));

	//�����ַ�ʽ��[]���������ڲ�������;Ϊ��������key����value��
	m[4] = 40;
	//cout << m[4] << endl;

	printMap(m);

	//ɾ��
	m.erase(m.begin());
	printMap(m);

	m.erase(3);  //����keyɾ����ɾ��keyΪ3������
	printMap(m);

	//���
	//m.erase(m.begin(), m.end());

	m.clear();
	printMap(m);
}

int main()
{
	test01();

	system("pause");

	return 0;
}
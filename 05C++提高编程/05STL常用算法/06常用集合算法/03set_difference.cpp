#include<iostream>
using namespace std;
#include<vector>;
#include<algorithm>

//���ü����㷨��set_difference
void myPrint(int val)
{
	cout << val << " ";
}

void test01()
{
	vector<int>v1;
	vector<int>v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);  //0~9
		v2.push_back(i + 5);  //5~14
	}
	cout << "v1��";
	for_each(v1.begin(), v1.end(), myPrint);
	cout << endl;
	cout << "v2��";
	for_each(v2.begin(), v2.end(), myPrint);
	cout << endl;

	//Ŀ����������Ҫ��ǰ���ٿռ䣬 ���������Ϊ��������û�н��������ٿռ�ȡ��������size���ɣ�
	vector<int>vTarget;

	vTarget.resize(max(v1.size(), v2.size()));  //���ٿռ䣨ȡ��������size�����ܻ�Ȳ��size��һЩ��

	//��ȡ�
	cout << "v1��v2�Ĳ��";
	vector<int>::iterator itEnd = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());

	for_each(vTarget.begin(), itEnd, myPrint);  //����������ѡ�����õ��Ľ�����������������Ŀ�������Ľ�������������ΪĿ��������size���ܻ�Ȳ��sizeƫ��һЩ
	cout << endl;

	cout << "v2��v1�Ĳ��";
	itEnd = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), vTarget.begin());
	for_each(vTarget.begin(), itEnd, myPrint); 
	cout << endl;
}

int main()
{
	test01();

	system("pause");

	return 0;
}
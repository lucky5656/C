#include<iostream>
using namespace std;

int main()
{

	//�˷��ھ���
	for (int i = 0; i <= 9; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << j << "*" << i << "=" << j * i << "   ";
		}
		cout << endl;
	}

	system("pause");

	return 0;

}
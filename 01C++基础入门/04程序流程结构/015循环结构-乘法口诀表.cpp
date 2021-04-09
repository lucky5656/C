#include<iostream>
using namespace std;

int main()
{

	//³Ë·¨¿Ú¾÷±í
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
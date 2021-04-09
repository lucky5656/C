#include<iostream>
using namespace std;

int main()
{

	//赋值运算符
	// 赋值：= 
	int a = 10;
	a = 100;
	cout << "a = " << a << endl;

	// 加等于：+=
	a = 10;
	a += 2;  // a = a + 2
	cout << "a = " << a << endl;

	// 减等于：-=
	a = 10;
	a -= 2;  // a = a - 2
	cout << "a = " << a << endl;

	// 乘等于：*=
	a = 10;
	a *= 2;  // a = a * 2
	cout << "a = " << a << endl;

	// 除等于：/=
	a = 10;
	a /= 2;  // a = a / 2
	cout << "a = " << a << endl;

	// 模等于：%=
	a = 10;
	a %= 2;  // a = a % 2
	cout << "a = " << a << endl;

	system("pause");

	return 0;

}
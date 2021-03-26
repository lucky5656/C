#include<iostream>
using namespace std;
#include<string>  //用C++风格字符串时，要添加这个头文件

int main()
{

	//1.C风格字符串
	char str[] = "Hello World";  //要注意的是，char字符串名后要加[]；等号后面要用""将字符串包含起来
	cout << str << endl;

	//2.C++风格字符串
	string str2 = "Hello World";  //要注意的是，需要添加#include<string>这个头文件
	cout << str2 << endl;

	system("pause");

	return 0;

}
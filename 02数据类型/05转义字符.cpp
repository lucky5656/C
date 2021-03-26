#include<iostream>
using namespace std;

int main()
{

	//转义字符

	//换行符 \n
	cout << "Hello World\n";

	//反斜杠 \\

	cout<<"\\"<<endl;  //两个反斜杠才能输出一个反斜杠

	//水平制表符 \t  ： 作用是可以整齐的输出数据
	cout << "aa\tHelloWorld" << endl;
	cout << "aaa\tHelloWorld" << endl;
	cout << "aaaa\tHelloWorld" << endl;
	cout << "aaaaa\tHelloWorld" << endl;

	system("pause");

	return 0;

}
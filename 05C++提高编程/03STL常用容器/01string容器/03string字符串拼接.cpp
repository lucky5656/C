#include<iostream>
using namespace std;
#include<string>

//string字符串拼接
/*
- string& operator+=(const char* str);           //重载+=操作符
- string& operator+=(const char c);              //重载+=操作符
- string& operator+=(const string& str);         //重载+=操作符
- string& append(const char *s);                 //把字符串s连接到当前字符串结尾
- string& append(const char *s, int n);          //把字符串s的前n个字符连接到当前字符串结尾
- string& append(const string &s);               //同operator+=(const string& str)
- string& append(const string &s, int pos, int n); //字符串s中从pos开始的n个字符连接到字符串结尾
*/

void test01()
{
	string str1 = "I ";
	str1 += "like fruits";
	cout << "str1 = " << str1 << endl;  //str1 = I like fruits

	str1 += "：";
	cout << "str1 = " << str1 << endl;  //str1 = I like fruits：

	string str2 = "apple banana";
	str1 += str2;
	cout << "str1 = " << str1 << endl;  //str1 = I like fruits：apple banana

	string str3= "I";
	str3.append(" like ");
	cout << "str3 = " << str3 << endl;  //str3 = I like

	str3.append("fruits abcd", 6);
	cout << "str3 = " << str3 << endl;  //str3 = I like fruits

	//str3.append(str2);  //str3 = I like fruitsapple banana
	//str3.append(str2, 0, 5);  //str3 = I like fruitsapple（只截取到apple）
	str3.append(str2, 6, 11);  //str3 = I like fruitsbanana（直截取banana，参数2 从哪个位置开始截取；参数3 截取字符个数）
	cout << "str3 = " << str3 << endl;
}

int main()
{
	test01();

	system("pause");

	return 0;
}
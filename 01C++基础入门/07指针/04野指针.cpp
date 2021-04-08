//#include<iostream>
//using namespace std;
//
//int main()
//{
//
//	//野指针
//	//在程序中，尽量避免出现野指针
//	int * p = (int *)0x1100;  //地址0x1100不是我们申请的，不能对其操作
//
//	//cout << *p << endl;  //引发了异常: 读取访问权限冲突。
//
//	system("pause");
//
//	return 0;
//}
//#include<iostream>
//using namespace std;
//
////实现两个数字之间进行交换的函数
//void swap1(int num1, int num2)
//{
//	int temp = num1;
//	num1 = num2;
//	num2 = temp;
//
//	cout << "swap1 num1 = " << num1 << endl;
//	cout << "swap1 num2 = " << num2 << endl;
//}
//
//void swap2(int *p1, int *p2)
//{
//	int temp = *p1;
//	*p1 = *p2;
//	*p2 = temp;
//
//	cout << "swap2 *p1 = " << *p1 << endl;
//	cout << "swap2 *p2 = " << *p2 << endl;
//}
//
//int main()
//{
//	//指针和函数
//	//1.值传递
//	int a = 10;
//	int b = 20;
//	swap1(a, b);
//
//	cout << "a = " << a << endl;  //实参未发生改变
//	cout << "b = " << b << endl;
//
//	//2.地址传递
//	//如果是地址传递，可以修饰实参
//	swap2(&a, &b);
//
//	cout << "a = " << a << endl;  //实参发生改变
//	cout << "b = " << b << endl;
//
//	system("pause");
//
//	return 0;
//}
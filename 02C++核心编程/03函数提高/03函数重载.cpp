//#include<iostream>
//using namespace std;
//
////函数重载：可以让函数名相同，提高复用性
//
////函数重载的满足条件：1. 同一个作用域下
////                    2. 函数名称相同
////                    3. 函数参数类型不同，或者个数不同，或者顺序不同
//void func()
//{
//	cout << "func的调用！" << endl;
//}
//
//void func(int a)
//{
//	cout << "func(int a)的调用！" << endl;
//}
//
//void func(double a)
//{
//	cout << "func(double a)的调用！" << endl;
//}
//
//void func(int a, double b)
//{
//	cout << "func(int a, double b)的调用！" << endl;
//}
//
//void func(double a, int b)
//{
//	cout << "func(double a, int b)的调用！" << endl;
//}
//
////注意事项：函数的返回值类型不可以作为函数重载的条件
////int func(double a, int b)
////{
////	cout << "func(double a, int b)的调用！" << endl;
////}
//
//int main()
//{
//	func();  //调用第一个func()函数
//	func(10);  //调用第二个func()函数
//	func(3.14);  //调用第三个func()函数
//	func(10, 3.14);  //调用第四个func()函数
//	func(3.14, 10);  //调用第五个func()函数
//
//	system("pause");
//
//	return 0;
//}
//#include<iostream>
//using namespace std;
//
////���õı�����c++�ڲ�ʵ����һ��ָ�볣����
////���������ã�ת��Ϊ int * const ref = &a;
//void func(int& ref)  
//{
//	ref = 100;  //ref�����ã�ת��Ϊ *ref = 100
//}
//
//int main()
//{
//	int a = 10;
//
//	int& ref = a;	//�Զ�ת��Ϊ int * const ref = &a;ָ�볣����ָ��ָ�򲻿ɸģ�Ҳ˵��Ϊʲô���ò��ɸ���
//	ref = 20;  //�ڲ�����ref�����ã��Զ�������ת��Ϊ *ref = 20;
//	cout << "a = " << a << endl;
//	cout << "ref = " << ref << endl;
//
//	func(a);
//	cout << "a = " << a << endl;
//	cout << "ref = " << ref << endl;
//
//	system("pause");
//
//	return 0;
//}
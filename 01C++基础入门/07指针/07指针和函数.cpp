//#include<iostream>
//using namespace std;
//
////ʵ����������֮����н����ĺ���
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
//	//ָ��ͺ���
//	//1.ֵ����
//	int a = 10;
//	int b = 20;
//	swap1(a, b);
//
//	cout << "a = " << a << endl;  //ʵ��δ�����ı�
//	cout << "b = " << b << endl;
//
//	//2.��ַ����
//	//����ǵ�ַ���ݣ���������ʵ��
//	swap2(&a, &b);
//
//	cout << "a = " << a << endl;  //ʵ�η����ı�
//	cout << "b = " << b << endl;
//
//	system("pause");
//
//	return 0;
//}
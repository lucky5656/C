//#include<iostream>
//using namespace std;
//
//int main()
//{
//
//	//break语句的使用时机
//	//1.出现在switch语句中
//	cout << "请选择副本难度：" << endl;
//	cout << "1.普通" << endl;
//	cout << "2.中等" << endl;
//	cout << "3.困难" << endl;
//
//	int select = 0;  //创建选择结果的变量
//
//	cout << "请输入您认为的副本难度：" << endl;
//	cin >> select;  //等待用户输入
//
//	switch(select)
//	{
//	case 1:
//		cout << "您选择的是普通难度！" << endl;
//		break;
//	case 2:
//		cout << "您选择的是中等难度！" << endl;
//		break;
//	case 3:
//		cout << "您选择的是困难难度！" << endl;
//		break;
//	default:
//		break;
//	}
//
//	//2.出现在循环语句中
//	for (int i = 0; i < 10; i++)
//	{
//		//如果i等于5，退出循环，不再打印
//		if (i == 5)
//		{
//			break;
//		}
//		cout << i << endl;
//	}
//
//	//3.出现在嵌套循环语句中
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			if (j == 5)
//			{
//				break;
//			}
//			cout << "*  ";
//		}
//		cout << endl;
//	}
//
//	system("pause");
//
//	return 0;
//
//}
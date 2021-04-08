//#include<iostream>
//using namespace std;
//
//int main()
//{
//
//	//三只小猪称体重，判断哪只小猪最重
//
//	//1.创建三只小猪的体重变量
//	int num1 = 0;
//	int num2 = 0;
//	int num3 = 0;
//
//	//2.让用户输入三只小猪的重量，并打印在屏幕上
//	cout << "请输入小猪A的体重：" << endl;
//	cin >> num1;
//
//	cout << "请输入小猪B的体重：" << endl;
//	cin >> num2;
//
//	cout << "请输入小猪C的体重：" << endl;
//	cin >> num3;
//
//	cout << "小猪A的体重为：" << num1 << endl;
//	cout << "小猪B的体重为：" << num2 << endl;
//	cout << "小猪C的体重为：" << num3 << endl;
//
//	//3.判断哪只重
//	//先判断A和B哪只重；
//	if (num1 > num2)  //A比B重
//	{
//		if (num1 > num3)  // A比C重
//		{
//			cout << "小猪A最重！" << endl;
//		}
//		else  // C比A重
//		{
//			cout << "小猪C最重！" << endl;
//		}
//	}
//	else  //B比A重
//	{
//		if (num2 > num3)  // B比C重
//		{
//			cout << "小猪B最重！" << endl;
//		}
//		else  // C比B重
//		{ 
//			cout << "小猪C最重！" << endl;
//		}
//	}
//
//	system("pause");
//
//	return 0;
//
//}
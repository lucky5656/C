//#include<iostream>
//using namespace std;
//
////继承中的对象模型
//class Base
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//class Son :public Base
//{
//public:
//	int m_D;
//};
//
////利用开发人员命令提示工具查看对象模型
////跳转盘符 E:
////跳转文件路径 cd 具体路径
////查看命令 cl /d1 reportSingleClassLayout类名 文件名
//
//void test01()
//{
//	//父类中的所有静态成员属性都会被子类继承下去，而父类中的私有成员属性是被编译器给隐藏了，因此是访问不到的，但确实被继承下去了
//	cout << "size of Son = " << sizeof(Son) << endl;  //16
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//
//	return 0;
//}
//#include<iostream>
//using namespace std;
//
////构造函数的分类及调用
////分类：按照参数分类——无参构造（默认构造）和有参构造
////      按照类型分类——普通构造和拷贝构造
//class Person
//{
//public:
//	//构造函数
//	Person()
//	{
//		cout << "Person的无参构造函数的调用！" << endl;
//	}
//	Person(int a)
//	{
//		age = a;
//		cout << "Person的有参构造函数的调用！" << endl;
//	}
//	//拷贝构造函数
//	Person(const Person &p)
//	{
//		//将传入的人身上的所有属性拷贝到我身上
//		age = p.age;
//		cout << "Person的拷贝构造函数的调用！" << endl;
//	}
//
//	//析构函数  
//	~Person()
//	{
//		cout << "Person析构函数的调用！" << endl;
//	}
//
//	int age;
//};
//
////调用
//void test01()
//{
//	//调用的三种方式：
//	//1.括号法
//	Person p1;    //默认构造函数调用  //1.打印 Person的无参构造函数的调用！  //12.打印 Person的析构函数的调用！
//	Person p2(10);  //有参构造函数调用  //2.打印 Person的有参构造函数的调用！  //13.打印 Person的析构函数的调用！
//	Person p3(p2);  //拷贝构造函数调用  //3.打印 Person的拷贝构造函数的调用！  //14.打印 Person的析构函数的调用！
//
//	//注意事项1：调用默认构造函数时，不要加()
//	//Person p1();   //编译器会认为这是一个函数声明，不会认为在创建对象
//
//	//cout << "p2的年龄：" << p2.age << endl;
//	//cout << "p3的年龄：" << p3.age << endl;
//
//	//2.显示法
//	Person p4;  //默认构造函数调用  //4.打印 Person的无参构造函数的调用！  //15.打印 Person的析构函数的调用！
//	Person p5 = Person(10);  //有参构造函数调用  //5.打印 Person的有参构造函数的调用！  //16.打印 Person的析构函数的调用！
//	Person p6 = Person(p5);  //拷贝构造函数调用  //6.打印 Person的拷贝构造函数的调用！  //17.打印 Person的析构函数的调用！
//
//	Person(10);  //匿名对象，特点：当前行执行结束后，系统会立即回收匿名对象  //7.打印 Person的有参构造函数的调用！  //8.打印 Person的无参构造函数的调用！
//	cout << "abcde" << endl;  //9.打印 abcde
//	//注意事项2：不要利用拷贝构造函数来初始化匿名对象
//	//Person(p6);  //编译器会认为Person(p6) === Person p6 是对象声明
//
//	//3.隐式转换法
//	Person p7 = 10;  //相当于写了Person p7 = Person(10); 有参构造  //10.打印 Person的有参构造函数的调用！  //18.打印 Person的析构函数的调用！
//	Person p8 = p7;  //拷贝构造  //11.打印 Person的拷贝构造函数的调用！  //19.打印 Person的析构函数的调用！
//
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
#include<iostream>
using namespace std;
#include"015MyArray.hpp"
#include<string>

void printIntArray(MyArray<int> &arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << arr[i] << endl;  // 可以通过下标的方式访问数组中的元素
	}
}

void test01()
{
	MyArray<int>arr1(5);  //构造函数的调用  //1.可以对内置数据类型的数据进行存储

	for (int i = 0; i < 5; i++)
	{
		//利用尾插法向数组中插入数据
		arr1.Push_Back(i);
	}
	cout << "arr1的打印输出：" << endl;
	printIntArray(arr1);

	cout << "arr1的容量为：" << arr1.getCapacity() << endl;
	cout << "arr1的大小为：" << arr1.getSize() << endl;

	MyArray<int>arr2(arr1);  //拷贝构造函数的调用  
	cout << "arr2的打印输出：" << endl;
	printIntArray(arr2);
	//尾删
	arr2.Pop_Back();
	cout << "arr2尾删后的打印输出：" << endl;
	printIntArray(arr2);
	cout << "arr2尾删后的容量为：" << arr2.getCapacity() << endl;
	cout << "arr2尾删后的大小为：" << arr2.getSize() << endl;

	MyArray<int>arr3(100);  //首先调用构造函数
	arr3 = arr1;  //然后调用operator=，重写赋值
}

//测试自定义数据类型
class Person
{
public:
	Person() {};  //默认构造
	Person(string name, int age)  //有参构造
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	string m_Name;
	int m_Age;
};

void printPersonArray(MyArray<Person>& arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << "姓名：" << arr[i].m_Name << "    年龄：" << arr[i].m_Age << endl;
	}
}

void test02()
{
	MyArray<Person>arr(10);  //1.可以对自定义数据类型的数据进行存储
	Person p1("张三", 18);
	Person p2("李四", 20);
	Person p3("王五", 22);
	Person p4("赵六", 24);
	Person p5("赵四", 26);

	//将数据插入到数组中
	arr.Push_Back(p1);
	arr.Push_Back(p2);
	arr.Push_Back(p3);
	arr.Push_Back(p4);
	arr.Push_Back(p5);

	//打印数组
	cout << "arr的打印输出：" << endl;
	printPersonArray(arr);

	//打印容量
	cout << "arr的容量为：" << arr.getCapacity() << endl;

	//打印大小
	cout << "arr的大小为：" << arr.getSize() << endl;
}

int main()
{
	test01();
	test02();

	system("pause");

	return 0;
}
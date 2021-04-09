#include<iostream>
using namespace std;

//多态
//动物类
class Animal
{
public:
	virtual void speak()  //虚函数（函数前面加virtual关键字）：编译器在编译的时候就不能确定函数调用了
	{
		cout << "动物在说话" << endl;
	}
};

//猫类
class Cat :public Animal  //父类的引用指向(接收)子类的对象  Animal &animal = cat;
{
public:
	void speak() 
	{
		cout << "小猫在说话" << endl;
	}
};

//狗类
class Dog :public Animal 
{
public:
	void speak()
	{
		cout << "小狗在说话" << endl;
	}
};

//执行说话的函数
//地址早绑定，在编译阶段确定函数地址
//如果想执行猫说话，那么这个函数地址就不能提前绑定，需要在运行阶段进行绑定，即地址晚绑定

//动态多态满足条件：1. 有继承关系
//                  2. 子类重写父类的虚函数（重写：函数返回值类型、函数名、参数列表完全相同）
//动态多态的使用：父类的引用指针或者引用来指向子类的对象可实现动态多态
void doSpeak(Animal &animal)  //父类的引用指向(接收)子类的对象  Animal &animal = cat;
{
	animal.speak();
}

void test01()
{
	Cat cat;
	doSpeak(cat);

	Dog dog;
	doSpeak(dog);
}

int main()
{
	test01();

	system("pause");

	return 0;
}
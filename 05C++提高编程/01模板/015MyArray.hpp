//自己通用的数组类
#pragma once
#include<iostream>
using namespace std;

template<class T>
class MyArray
{
public:
	//有参构造：参数、容量
	MyArray(int capacity)  //3. 构造函数中可以传入数组的容量
	{
		//cout << "MyArray的有参构造函数的调用！" << endl;
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAddress = new T[this->m_Capacity];  //2. 将数组中的数据存储到堆区
	}

	//4. 提供对应的拷贝构造函数以及operator=防止浅拷贝问题
	//拷贝构造函数
	MyArray(const MyArray &arr)  //自己编写拷贝函数，为防止浅拷贝的问题
	{
		//cout << "MyArray的拷贝构造函数的调用！" << endl;
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		//this->pAddress = arr.pAddress;  //浅拷贝

		//深拷贝
		this->pAddress = new T[arr.m_Capacity];
		
		//将arr中的数据全部都拷贝过来，因为arr数组中可能已经有数据了
		for (int i = 0; i < this->m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
	}

	//operator= 为防止浅拷贝的问题
	MyArray& operator=(const MyArray& arr)
	{
		//cout << "MyArray的operator=的调用！" << endl;
		//先判断原来堆区是否有数据，如果有，先释放
		if (this->pAddress != NULL)
		{
			delete[] this->pAddress;
			this->pAddress = NULL;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}

		//深拷贝
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[arr.m_Capacity];
		for (int i = 0; i < this->m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
		return *this;
	}

	//5. 提供尾插法和尾删法对数组中的数据进行增加和删除
	//尾插法
	void Push_Back(const T & val)
	{
		//判断容量是否等于数组的大小
		if (this->m_Capacity == this->m_Size)
		{
			return;
		}
		this->pAddress[this->m_Size] = val;  //在数组末尾插入数据
		this->m_Size++;  //更新数组大小
	}

	//尾删法
	void Pop_Back()
	{
		//让用户访问不到最后一个元素，即为尾删，逻辑删除
		//判断数组中是否已没有元素
		if (this->m_Size == 0)
		{
			return;
		}
		this->m_Size--;
	}

	//6. 可以通过下标的方式访问数组中的元素
	//想要通过arr[0]去访问数组中的数据，会发现没有与此操作数匹配的[]运算符，需要重载[]
	T& operator[](int index)  //arr[0] = 100，如果这个函数调用最后想作为左值存在的话，返回T的引用
	{
		return this->pAddress[index];
	}

	//返回数组的容量
	int getCapacity()
	{
		return this->m_Capacity;
	}

	//返回数组的大小
	int getSize()
	{
		return this->m_Size;
	}

	//析构函数
	~MyArray()
	{
		if (this->pAddress != NULL)
		{
			//cout << "MyArray的析构函数的调用！" << endl;
			delete[] this->pAddress;  //将数组内存释放干净
			this->pAddress = NULL;  //将指针置空，防止其为野指针
		}
	}

private:
	T * pAddress;  //指针指向堆区开辟的真实数组

	int m_Capacity;  //数组容量

	int m_Size;  //数组大小
};
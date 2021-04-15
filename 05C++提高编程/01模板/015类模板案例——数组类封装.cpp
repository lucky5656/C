#include<iostream>
using namespace std;
#include"015MyArray.hpp"
#include<string>

void printIntArray(MyArray<int> &arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << arr[i] << endl;  // ����ͨ���±�ķ�ʽ���������е�Ԫ��
	}
}

void test01()
{
	MyArray<int>arr1(5);  //���캯���ĵ���  //1.���Զ������������͵����ݽ��д洢

	for (int i = 0; i < 5; i++)
	{
		//����β�巨�������в�������
		arr1.Push_Back(i);
	}
	cout << "arr1�Ĵ�ӡ�����" << endl;
	printIntArray(arr1);

	cout << "arr1������Ϊ��" << arr1.getCapacity() << endl;
	cout << "arr1�Ĵ�СΪ��" << arr1.getSize() << endl;

	MyArray<int>arr2(arr1);  //�������캯���ĵ���  
	cout << "arr2�Ĵ�ӡ�����" << endl;
	printIntArray(arr2);
	//βɾ
	arr2.Pop_Back();
	cout << "arr2βɾ��Ĵ�ӡ�����" << endl;
	printIntArray(arr2);
	cout << "arr2βɾ�������Ϊ��" << arr2.getCapacity() << endl;
	cout << "arr2βɾ��Ĵ�СΪ��" << arr2.getSize() << endl;

	MyArray<int>arr3(100);  //���ȵ��ù��캯��
	arr3 = arr1;  //Ȼ�����operator=����д��ֵ
}

//�����Զ�����������
class Person
{
public:
	Person() {};  //Ĭ�Ϲ���
	Person(string name, int age)  //�вι���
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
		cout << "������" << arr[i].m_Name << "    ���䣺" << arr[i].m_Age << endl;
	}
}

void test02()
{
	MyArray<Person>arr(10);  //1.���Զ��Զ����������͵����ݽ��д洢
	Person p1("����", 18);
	Person p2("����", 20);
	Person p3("����", 22);
	Person p4("����", 24);
	Person p5("����", 26);

	//�����ݲ��뵽������
	arr.Push_Back(p1);
	arr.Push_Back(p2);
	arr.Push_Back(p3);
	arr.Push_Back(p4);
	arr.Push_Back(p5);

	//��ӡ����
	cout << "arr�Ĵ�ӡ�����" << endl;
	printPersonArray(arr);

	//��ӡ����
	cout << "arr������Ϊ��" << arr.getCapacity() << endl;

	//��ӡ��С
	cout << "arr�Ĵ�СΪ��" << arr.getSize() << endl;
}

int main()
{
	test01();
	test02();

	system("pause");

	return 0;
}
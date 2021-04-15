//�Լ�ͨ�õ�������
#pragma once
#include<iostream>
using namespace std;

template<class T>
class MyArray
{
public:
	//�вι��죺����������
	MyArray(int capacity)  //3. ���캯���п��Դ������������
	{
		//cout << "MyArray���вι��캯���ĵ��ã�" << endl;
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAddress = new T[this->m_Capacity];  //2. �������е����ݴ洢������
	}

	//4. �ṩ��Ӧ�Ŀ������캯���Լ�operator=��ֹǳ��������
	//�������캯��
	MyArray(const MyArray &arr)  //�Լ���д����������Ϊ��ֹǳ����������
	{
		//cout << "MyArray�Ŀ������캯���ĵ��ã�" << endl;
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		//this->pAddress = arr.pAddress;  //ǳ����

		//���
		this->pAddress = new T[arr.m_Capacity];
		
		//��arr�е�����ȫ����������������Ϊarr�����п����Ѿ���������
		for (int i = 0; i < this->m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
	}

	//operator= Ϊ��ֹǳ����������
	MyArray& operator=(const MyArray& arr)
	{
		//cout << "MyArray��operator=�ĵ��ã�" << endl;
		//���ж�ԭ�������Ƿ������ݣ�����У����ͷ�
		if (this->pAddress != NULL)
		{
			delete[] this->pAddress;
			this->pAddress = NULL;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}

		//���
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[arr.m_Capacity];
		for (int i = 0; i < this->m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
		return *this;
	}

	//5. �ṩβ�巨��βɾ���������е����ݽ������Ӻ�ɾ��
	//β�巨
	void Push_Back(const T & val)
	{
		//�ж������Ƿ��������Ĵ�С
		if (this->m_Capacity == this->m_Size)
		{
			return;
		}
		this->pAddress[this->m_Size] = val;  //������ĩβ��������
		this->m_Size++;  //���������С
	}

	//βɾ��
	void Pop_Back()
	{
		//���û����ʲ������һ��Ԫ�أ���Ϊβɾ���߼�ɾ��
		//�ж��������Ƿ���û��Ԫ��
		if (this->m_Size == 0)
		{
			return;
		}
		this->m_Size--;
	}

	//6. ����ͨ���±�ķ�ʽ���������е�Ԫ��
	//��Ҫͨ��arr[0]ȥ���������е����ݣ��ᷢ��û����˲�����ƥ���[]���������Ҫ����[]
	T& operator[](int index)  //arr[0] = 100�����������������������Ϊ��ֵ���ڵĻ�������T������
	{
		return this->pAddress[index];
	}

	//�������������
	int getCapacity()
	{
		return this->m_Capacity;
	}

	//��������Ĵ�С
	int getSize()
	{
		return this->m_Size;
	}

	//��������
	~MyArray()
	{
		if (this->pAddress != NULL)
		{
			//cout << "MyArray�����������ĵ��ã�" << endl;
			delete[] this->pAddress;  //�������ڴ��ͷŸɾ�
			this->pAddress = NULL;  //��ָ���ÿգ���ֹ��ΪҰָ��
		}
	}

private:
	T * pAddress;  //ָ��ָ��������ٵ���ʵ����

	int m_Capacity;  //��������

	int m_Size;  //�����С
};
#pragma once
#include<iostream>
using namespace std;
#include<map>
#include<string>
#include"globalFile.h"
#include<fstream>

class OrderFile
{
public:
	//构造函数
	OrderFile();

	//更新预约记录
	void updateOrder();

	//记录预约条数
	int m_Size;

	//记录所有预约信息的容器，key记录条数，value具体记录键值对信息
	map<int, map<string, string>>m_orderData;  //map<string,string>中key代表属性（日期、时间段...），value代表实值（每个属性对应的具体内容）；map<int,map<string,string>>中key代表预约记录条数，value代表一条记录中的所有信息
};
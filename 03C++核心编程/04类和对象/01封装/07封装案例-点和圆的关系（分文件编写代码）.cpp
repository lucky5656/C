#include<iostream>
using namespace std;
#include "07circle.h"  //圆类
#include "07point.h"  //点类

//判断点和圆的关系
void isInCircle(Circle &c, Point &p)
{
	//计算两点之间距离的平方
	int distance = (c.getCenter().getX() - p.getX())*(c.getCenter().getX() - p.getX()) +
	               (c.getCenter().getY() - p.getY())*(c.getCenter().getY() - p.getY());

	//计算半径的平方
	int rDistance = c.getR() * c.getR();

	//判断关系
	if (distance == rDistance)
	{
		cout << "点在圆上" << endl;
	}
	else if (distance > rDistance)
	{
		cout << "点在圆外" << endl;
	}
	else
	{
		cout << "点在圆内" << endl;
	}
}

int main()
{
	Circle c;  //创建圆
	c.setR(10);
	Point center;
	center.setX(10);
	center.setY(0);
	c.setCenter(center);

	Point p;  //创建点
	p.setX(10);
	p.setY(10);

	//判断关系
	isInCircle(c, p);

	system("pause");

	return 0;
}
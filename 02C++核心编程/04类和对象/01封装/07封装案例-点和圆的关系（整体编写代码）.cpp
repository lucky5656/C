//#include<iostream>
//using namespace std;
//
////点和圆的关系
////点类
//class Point
//{
//public:
//	void setX(int x)  //设置X
//	{
//		m_X = x;
//	}
//	int getX()  //获取X
//	{
//		return m_X;
//	}
//
//	void setY(int y)  //设置Y
//	{
//		m_Y = y;
//	}
//	int getY()  //获取Y
//	{
//		return m_Y;
//	}
//
//private:
//	int m_X;
//	int m_Y;
//};
//
////圆类
//class Circle
//{
//public:
//	void setR(int r)  //设置半径
//	{
//		m_R = r;
//	}
//	int getR()  //获取半径
//	{
//		return m_R;
//	}
//
//	void setCenter(Point center)  //设置圆心
//	{
//		m_Center = center;
//	}
//	Point getCenter()  //获取圆心
//	{
//		return m_Center;
//	}
//
//private:
//	int m_R;  //半径
//	Point m_Center;  //圆心
//};
//
////判断点和圆的关系
//void isInCircle(Circle &c, Point &p)
//{
//	//计算两点之间距离的平方
//	int distance = (c.getCenter().getX() - p.getX())*(c.getCenter().getX() - p.getX()) +
//		(c.getCenter().getY() - p.getY())*(c.getCenter().getY() - p.getY());
//
//	//计算半径的平方
//	int rDistance = c.getR() * c.getR();
//
//	//判断关系
//	if (distance == rDistance)
//	{
//		cout << "点在圆上" << endl;
//	}
//	else if (distance > rDistance)
//	{
//		cout << "点在圆外" << endl;
//	}
//	else
//	{
//		cout << "点在圆内" << endl;
//	}
//}
//
//int main()
//{
//	Circle c;  //创建圆
//	c.setR(10);
//	Point center;
//	center.setX(10);
//	center.setY(0);
//	c.setCenter(center);
//
//	Point p;  //创建点
//	p.setX(10);
//	p.setY(10);
//
//	//判断关系
//	isInCircle(c, p);
//
//	system("pause");
//
//	return 0;
//}
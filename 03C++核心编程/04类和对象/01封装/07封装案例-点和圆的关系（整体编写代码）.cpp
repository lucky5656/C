//#include<iostream>
//using namespace std;
//
////���Բ�Ĺ�ϵ
////����
//class Point
//{
//public:
//	void setX(int x)  //����X
//	{
//		m_X = x;
//	}
//	int getX()  //��ȡX
//	{
//		return m_X;
//	}
//
//	void setY(int y)  //����Y
//	{
//		m_Y = y;
//	}
//	int getY()  //��ȡY
//	{
//		return m_Y;
//	}
//
//private:
//	int m_X;
//	int m_Y;
//};
//
////Բ��
//class Circle
//{
//public:
//	void setR(int r)  //���ð뾶
//	{
//		m_R = r;
//	}
//	int getR()  //��ȡ�뾶
//	{
//		return m_R;
//	}
//
//	void setCenter(Point center)  //����Բ��
//	{
//		m_Center = center;
//	}
//	Point getCenter()  //��ȡԲ��
//	{
//		return m_Center;
//	}
//
//private:
//	int m_R;  //�뾶
//	Point m_Center;  //Բ��
//};
//
////�жϵ��Բ�Ĺ�ϵ
//void isInCircle(Circle &c, Point &p)
//{
//	//��������֮������ƽ��
//	int distance = (c.getCenter().getX() - p.getX())*(c.getCenter().getX() - p.getX()) +
//		(c.getCenter().getY() - p.getY())*(c.getCenter().getY() - p.getY());
//
//	//����뾶��ƽ��
//	int rDistance = c.getR() * c.getR();
//
//	//�жϹ�ϵ
//	if (distance == rDistance)
//	{
//		cout << "����Բ��" << endl;
//	}
//	else if (distance > rDistance)
//	{
//		cout << "����Բ��" << endl;
//	}
//	else
//	{
//		cout << "����Բ��" << endl;
//	}
//}
//
//int main()
//{
//	Circle c;  //����Բ
//	c.setR(10);
//	Point center;
//	center.setX(10);
//	center.setY(0);
//	c.setCenter(center);
//
//	Point p;  //������
//	p.setX(10);
//	p.setY(10);
//
//	//�жϹ�ϵ
//	isInCircle(c, p);
//
//	system("pause");
//
//	return 0;
//}
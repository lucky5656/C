#include "07circle.h"

void Circle::setR(int r)  //���ð뾶
{
	m_R = r;
}
int Circle::getR()  //��ȡ�뾶
{
	return m_R;
}

void Circle::setCenter(Point center)  //����Բ��
{
	m_Center = center;
}
Point Circle::getCenter()  //��ȡԲ��
{
	return m_Center;
}
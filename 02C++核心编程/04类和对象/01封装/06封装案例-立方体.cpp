//#include<iostream>
//using namespace std;
//#include<string>
//
////设计立方体类
////1. 创建立方体类
////2. 设计属性和行为
////3. 获取立方体面积和体积
////4. 分别利用全局函数和成员函数，判断两个立方体是否相等
//
//class Cube
//{
//public:
//	//设置长
//	void setL(int L)
//	{
//		m_L = L;
//	}
//	//获取长
//	int getL()
//	{
//		return m_L;
//	}
//
//	//设置宽
//	void setW(int W)
//	{
//		m_W = W;
//	}
//	//获取宽
//	int getW()
//	{
//		return m_W;
//	}
//
//	//设置高
//	void setH(int H)
//	{
//		m_H = H;
//	}
//	//获取高
//	int getH()
//	{
//		return m_H;
//	}
//
//	//获取立方体面积
//	int calculateS()
//	{
//		return 2 * m_L*m_W + 2 * m_W*m_H + 2 * m_H*m_L;
//	}
//
//	//获取立方体体积
//	int calculateV()
//	{
//		return m_L * m_W * m_H;
//	}
//
//	//利用成员函数判断两个立方体是否相等（在类内判断）
//	bool isSameByClass(Cube &c)
//	{
//		if (m_L == c.getL() && m_W == c.getW() && m_H == c.getH())
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//
//private:
//	int m_L;  //长
//	int m_W;  //宽
//	int m_H;  //高
//};
//
////利用全局函数判断两个立方体是否相等（在类外判断）
//bool isSame(Cube &c1, Cube &c2)
//{
//	if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH())
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
//int main()
//{
//	Cube c1;  //创建第一个立方体对象c1
//	c1.setL(10);
//	c1.setW(10);
//	c1.setH(10);
//
//	cout << "立方体c1的面积为：" << c1.calculateS() << endl;
//	cout << "立方体c1的体积为：" << c1.calculateV() << endl;
//
//	Cube c2;  //创建第二个立方体对象c2
//	c2.setL(10);
//	c2.setW(10);
//	c2.setH(11);
//
//	//利用全局函数判断两个立方体是否相等
//	bool ret = isSame(c1, c2);
//	if (ret)
//	{
//		cout << "全局函数判断：c1和c2相等！" << endl;
//	}
//	else
//	{
//		cout << "全局函数判断：c1和c2不相等！" << endl;
//	}
//
//	//利用成员函数判断两个立方体是否相等
//	ret = c1.isSameByClass(c2);
//	if (ret)
//	{
//		cout << "成员函数判断：c1和c2相等！" << endl;
//	}
//	else
//	{
//		cout << "成员函数判断：c1和c2不相等！" << endl;
//	}
//
//	system("pause");
//
//	return 0;
//}
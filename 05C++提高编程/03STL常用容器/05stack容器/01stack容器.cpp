#include<iostream>
using namespace std;
#include<stack>

//stack容器（栈）：特点是符合先进后出的数据结构
void test01()
{
	stack<int>s;

	//入栈
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);

	cout << "栈的大小为：" << s.size() << endl;

	//只有栈不为空，查看栈顶，并执行出栈操作
	while (!s.empty())
	{
		//查看栈顶元素
		cout << "栈顶元素为：" << s.top() << endl;

		//出栈
		s.pop();
	}
	cout << "栈的大小为：" << s.size() << endl;
}

int main()
{
	test01();

	system("pause");

	return 0;
}
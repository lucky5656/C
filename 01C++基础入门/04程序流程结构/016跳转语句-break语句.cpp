//#include<iostream>
//using namespace std;
//
//int main()
//{
//
//	//break����ʹ��ʱ��
//	//1.������switch�����
//	cout << "��ѡ�񸱱��Ѷȣ�" << endl;
//	cout << "1.��ͨ" << endl;
//	cout << "2.�е�" << endl;
//	cout << "3.����" << endl;
//
//	int select = 0;  //����ѡ�����ı���
//
//	cout << "����������Ϊ�ĸ����Ѷȣ�" << endl;
//	cin >> select;  //�ȴ��û�����
//
//	switch(select)
//	{
//	case 1:
//		cout << "��ѡ�������ͨ�Ѷȣ�" << endl;
//		break;
//	case 2:
//		cout << "��ѡ������е��Ѷȣ�" << endl;
//		break;
//	case 3:
//		cout << "��ѡ����������Ѷȣ�" << endl;
//		break;
//	default:
//		break;
//	}
//
//	//2.������ѭ�������
//	for (int i = 0; i < 10; i++)
//	{
//		//���i����5���˳�ѭ�������ٴ�ӡ
//		if (i == 5)
//		{
//			break;
//		}
//		cout << i << endl;
//	}
//
//	//3.������Ƕ��ѭ�������
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			if (j == 5)
//			{
//				break;
//			}
//			cout << "*  ";
//		}
//		cout << endl;
//	}
//
//	system("pause");
//
//	return 0;
//
//}
#include<iostream>
using namespace std;
#include<fstream>
#include<string>

//�ı��ļ��������ļ�
void test01()
{
	//1. ����ͷ�ļ� fstream

	//2. ����������
	ifstream ifs;

	//3. ���ļ������ж��Ƿ�򿪳ɹ�
	ifs.open("test.txt", ios::in);

	if (!ifs.is_open())  //�ж��Ƿ�򿪳ɹ�
	{
		cout << "�ļ���ʧ�ܣ�" << endl;
		return;
	}

	//4. �����ݣ��������ַ�ʽ
	//��һ��
	//char buf[1024] = { 0 };  //�ַ�����
	//while (ifs >> buf)
	//{
	//	cout << buf << endl;
	//}

	//�ڶ���
	//char buf[1024] = { 0 };
	//while (ifs.getline(buf, sizeof(buf)))
	//{
	//	cout << buf << endl;
	//}

	//������
	//string buf;
	//while (getline(ifs, buf))
	//{
	//	cout << buf << endl;
	//}

	//�����֣����Ƽ���
	char c;
	while ((c = ifs.get()) != EOF)  //EOF: end of file
	{
		cout << c;
	}

	//5. �ر��ļ�
	ifs.close();
}

int main()
{
	test01();

	system("pause");

	return 0;
}
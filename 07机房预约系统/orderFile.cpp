#include"orderFile.h"

//���캯��
OrderFile::OrderFile()
{
	ifstream ifs;
	ifs.open(ORDER_FILE, ios::in);

	string date;  //����
	string interval;  //ʱ���
	string stuId;  //ѧ��ѧ��
	string stuName;  //ѧ������
	string roomId;  //�������
	string status;  //ԤԼ״̬

	this->m_Size = 0;  //��¼����

	while (ifs>>date && ifs>>interval && ifs>>stuId && ifs >> stuName && ifs >> roomId && ifs >> status)
	{
		//���Դ���
		//cout << date << endl;
		//cout << interval << endl;
		//cout << stuId << endl;
		//cout << stuName << endl;
		//cout << roomId << endl;
		//cout << status << endl;
		//cout << endl;

		string key;
		string value;
		map<string, string>m;

		//date:1  ��ȡ����
		int pos = date.find(":");  //pos = 4
		if (pos != -1)
		{
			key = date.substr(0, pos);
			value = date.substr(pos + 1, date.size() - pos - 1);  //size = 6; pos = 4; ��5��λ�ÿ�ʼ��ȡ6-4-1=1���ַ�
			/*cout << "key = " << key << endl;
		    cout << "value = " << value << endl;*/

			m.insert(make_pair(key, value));
		}

		//��ȡʱ���
		pos = interval.find(":");
		if (pos != -1)
		{
			key = interval.substr(0, pos);
			value = interval.substr(pos + 1, interval.size() - pos - 1);

			m.insert(make_pair(key, value));
		}
		
		//��ȡѧ��
		pos = stuId.find(":");
		if (pos != -1)
		{
			key = stuId.substr(0, pos);
			value = stuId.substr(pos + 1, stuId.size() - pos - 1);

			m.insert(make_pair(key, value));
		}
		
		//��ȡѧ������
		pos = stuName.find(":");
		if (pos != -1)
		{
			key = stuName.substr(0, pos);
			value = stuName.substr(pos + 1, stuName.size() - pos - 1);

			m.insert(make_pair(key, value));
		}
		
		//��ȡ�������
		pos = roomId.find(":");
		if (pos != -1)
		{
			key = roomId.substr(0, pos);
			value = roomId.substr(pos + 1, roomId.size() - pos - 1);

			m.insert(make_pair(key, value));
		}
		
		//��ȡԤԼ״̬
		pos = status.find(":");
		if (pos != -1)
		{
			key = status.substr(0, pos);
			value = status.substr(pos + 1, status.size() - pos - 1);

			m.insert(make_pair(key, value));
		}

		//��Сmap�������뵽���map������
		this->m_orderData.insert(make_pair(this->m_Size, m));
		this->m_Size++;
	}
	ifs.close();

	//���Դ��map����
	/*for (map<int, map<string, string>>::iterator it = m_orderData.begin(); it != m_orderData.end(); it++)
	{
		cout << "����Ϊ��" << it->first << "    value = " << endl;
		for (map<string, string>::iterator mit = (*it).second.begin(); mit != it->second.end(); mit++)
		{
			cout << "key = " << mit->first << "    value = " << mit->second << endl;
		}
		cout << endl;
	}*/
}

//����ԤԼ��¼
void OrderFile::updateOrder()
{
	if (this->m_Size == 0)
	{
		return;  //ԤԼ��¼Ϊ0��ֱ��return
	}

	//ԤԼ��¼��Ϊ0������ԤԼ��¼
	ofstream ofs(ORDER_FILE, ios::out | ios::trunc);  //����ios::outд�룬����ɾ����д
	for (int i = 0; i < this->m_Size; i++)
	{
		ofs << "date:" << this->m_orderData[i]["date"] << " ";
		ofs << "interval:" << this->m_orderData[i]["interval"] << " ";
		ofs << "stuId:" << this->m_orderData[i]["stuId"] << " ";
		ofs << "stuName:" << this->m_orderData[i]["stuName"] << " ";
		ofs << "roomId:" << this->m_orderData[i]["roomId"] << " ";
		ofs << "status:" << this->m_orderData[i]["status"] << " ";
		ofs << endl;
	}
	ofs.close();
}
#include"speechManager.h"

//构造函数
SpeechManager::SpeechManager()
{
	this->initSpeech();  //初始化容器和属性

	this->createSpeaker();  //创建12名选手

	this->loadRecord();  //加载往届记录
}

//展示菜单
void SpeechManager::show_Menu()
{
	cout << "*********************************************" << endl;
	cout << "******* 欢迎使用演讲比赛流程管理系统 ********" << endl;
	cout << "************** 1. 开始演讲比赛 **************" << endl;
	cout << "************** 2. 查看往届记录 **************" << endl;
	cout << "************** 3. 清空比赛记录 **************" << endl;
	cout << "************** 0. 退出比赛程序 **************" << endl;
	cout << "*********************************************" << endl;
	cout << endl;
}

//退出系统
void SpeechManager::exitSystem()
{
	cout << "欢迎下次使用！" << endl;
	system("pause");
	exit(0);
}

//初始化容器和属性
void SpeechManager::initSpeech()
{
	//容器都置空
	this->v1.clear();
	this->v2.clear();
	this->vVictory.clear();
	this->m_Speaker.clear();

	//初始化比赛轮数
	this->m_Index = 1;

	//初始化记录容器
	this->m_Record.clear();
}

//创建12名选手
void SpeechManager::createSpeaker()
{
	string nameSeed = "ABCDEFGHIJKL";
	for (int i = 0; i < nameSeed.size(); i++)
	{
		string name = "选手";
		name += nameSeed[i];

		Speaker sp;  //创建Speaker对象，具体选手
		sp.m_Name = name;

		for (int j = 0; j < 2; j++)
		{
			sp.m_Score[j] = 0;  //两轮分数均置为0
		}

		//创建选手编号，并且存放到v1容器中
		this->v1.push_back(i + 10001);

		//选手编号以及对应选手放到map容器中
		this->m_Speaker.insert(make_pair(i + 10001, sp));
	}
}

//开始比赛，比赛整个流程控制的函数
void SpeechManager::startSpeech()
{
	//第一轮开始比赛

	//1. 抽签
	speechDraw();

	//2. 比赛
	speechContest();

	//3. 显示晋级结果
	showScore();

	//第二轮开始比赛
	this->m_Index++;

	//1. 抽签
	speechDraw();

	//2. 比赛
	speechContest();

	//3. 显示最终结果
	showScore();

	//4. 保存分数到文件中
	saveRecord();

	//重置比赛
	this->initSpeech();  //初始化容器和属性
	this->createSpeaker();  //创建12名选手
	this->loadRecord();  //加载往届记录

	cout << "本届演讲比赛结束！" << endl;
	system("pause");
	system("cls");
}

//抽签
void SpeechManager::speechDraw()
{
	cout << "第 【 " << this->m_Index << " 】 轮比赛选手正在抽签" << endl;
	cout << "------------------------------------------------------------------------" << endl;
	cout << "抽签后的演讲顺序如下：" << endl;

	if (this->m_Index == 1)
	{
		//第一轮比赛
		random_shuffle(v1.begin(), v1.end());
		for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
		{
			cout << *it << " ";
		}
		cout << endl;
	}
	else
	{
		//第二轮比赛
		random_shuffle(v2.begin(), v2.end());
		for (vector<int>::iterator it = v2.begin(); it != v2.end(); it++)
		{
			cout << *it << " ";
		}
		cout << endl;
	}
	cout << "------------------------------------------------------------------------" << endl;
	system("pause");
	cout << endl;
}

//比赛
void SpeechManager::speechContest()
{
	cout << "------------第 【 " << this->m_Index << " 】 轮比赛正式开始！------------" << endl;

	//准备临时容器存放小组成绩
	multimap<double, int, greater<double>>groupScore;

	int num = 0;  //统计人员个数，6人一组

	vector<int>v_Src;  //比赛选手容器
	if (this->m_Index == 1)  //第一轮比赛
	{
		v_Src = v1;
	}
	else
	{
		v_Src = v2;
	}

	//遍历所有选手进行比赛
	for (vector<int>::iterator it = v_Src.begin(); it != v_Src.end(); it++)
	{
		num++;

		//10位评委打分
		deque<double>d;
		for (int i = 0; i < 10; i++)
		{
			double score = (rand() % 401 + 600) / 10.f;   //600~1000之间的随机小数
			//cout << score << " ";
			d.push_back(score);
		}
		//cout << endl;

		sort(d.begin(), d.end(), greater<double>());  //排序（降序）
		d.pop_front();  //去除最高分
		d.pop_back();  //去除最低分

		double sum = accumulate(d.begin(), d.end(),0.0f);  //总分
		double avg = sum / (double)d.size();  //平均分

		//打印平均分
		//cout << "编号：" << *it << "    姓名：" << this->m_Speaker[*it].m_Name << "    平均分：" << avg << endl;

		//将平均分放入到map容器中
		this->m_Speaker[*it].m_Score[this->m_Index - 1] = avg;  //将第[*it]个人的第Index轮分数放入容器，即赋值给演讲者的分数属性

		//将打分数据放入到临时小组容器中
		groupScore.insert(make_pair(avg, *it));  //key是得分，value是具体选手编号
		//每6人取出前三名
		if (num % 6 == 0)
		{
			cout << "第" << num / 6 << "小组比赛名次：" << endl;
			for (multimap<double, int, greater<double>>::iterator it = groupScore.begin(); it != groupScore.end(); it++)
			{
				cout << "编号：" << it->second << "    姓名：" << this->m_Speaker[it->second].m_Name << "    成绩：" << this->m_Speaker[it->second].m_Score[this->m_Index - 1] << endl;
			}

			//取走前三名
			int count = 0;
			for (multimap<double, int, greater<double>>::iterator it = groupScore.begin(); it != groupScore.end() && count < 3; it++, count++)
			{
				if (this->m_Index == 1)  //第一轮
				{
					v2.push_back((*it).second);  //将第一轮的前三名插入v2容器
				}
				else  //第二轮
				{
					vVictory.push_back((*it).second);  //将第二轮的前三名插入vVictory容器
				}
			}

			groupScore.clear();  // 小组容器清空
			cout << endl;
		}

	}
	//cout << endl;
	cout << "--------------第 【 " << this->m_Index << " 】 轮比赛结束！--------------" << endl;
	system("pause");
	cout << endl;
}

//显示比赛分数
void SpeechManager::showScore()
{
	cout << "----------第 【 " << this->m_Index << " 】 轮晋级选手信息如下：----------" << endl;

	vector<int>v;
	if (this->m_Index == 1)
	{
		v = v2;
	}
	else
	{
		v = vVictory;
	}

	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "编号：" << *it << "    姓名：" << this->m_Speaker[*it].m_Name << "    成绩：" << this->m_Speaker[*it].m_Score[this->m_Index -1] << endl;
	}
	cout << endl;

	system("pause");
	system("cls");
	this->show_Menu();
}

//保存分数
void SpeechManager::saveRecord()
{
	ofstream ofs;
	ofs.open("speech.csv", ios::out | ios::app);  //用追加的方式写文件

	//将每个选手的数据写入到文件中
	for (vector<int>::iterator it = vVictory.begin(); it != vVictory.end(); it++)
	{
		ofs << *it << "," << this->m_Speaker[*it].m_Score[1] << ",";
	}
	ofs << endl;

	//关闭文件
	ofs.close();
	cout << "记录已经保存！" << endl;

	//更新文件不为空状态
	this->fileIsEmpty = false;
}

//读取记录
void SpeechManager::loadRecord()
{
	ifstream ifs("speech.csv", ios::in);  //读文件

	if (!ifs.is_open())
	{
		this->fileIsEmpty = true;
		//cout << "文件不存在！" << endl;
		ifs.close();
		return;
	}

	//文件清空情况
	char ch;
	ifs >> ch;  //读走单个字符
	if (ifs.eof())  // 读走单个字符后是否指向文件尾，若指向文件尾，则文件为空
	{
		//cout << "文件为空！" << endl;
		this->fileIsEmpty = true;
		ifs.close();
		return;
	}

	//文件不为空
	this->fileIsEmpty = false;

	ifs.putback(ch);  //把之前读走的单个字符再放回来

	string data;

	int index = 0;  //届数

	while (ifs >> data)
	{
		//cout << data << endl;  //10002,86.675,10009,81.3,10007,78.55

		vector<string>v;  //存放6个string字符串

		int pos = -1;  //查到","位置的变量，默认没有查到
		int start = 0;  //起始位置设为0

		while (true)
		{
			pos = data.find(",", start);  //从0开始查找 ','
			if (pos == -1)
			{
				//没有找到的情况
				break;   //找不到break返回
			}
			string temp = data.substr(start, pos - start);   //找到了,进行分割：参数1 起始位置；参数2 截取长度
			//cout << temp << endl;
			v.push_back(temp);

			start = pos + 1;
		}
		this->m_Record.insert(make_pair(index, v));
		index++;
	}

	ifs.close();

	//for (map<int, vector<string>>::iterator it = m_Record.begin(); it != m_Record.end(); it++)
	//{
	//	cout << it->first << "冠军编号：" << it->second[0] << "    成绩：" << it->second[1] << endl;
	//}
}

//显示往届记录
void SpeechManager::showRecord()
{
	if (this->fileIsEmpty)
	{
		cout << "文件不存在，或者记录为空！" << endl;
	}
	for (int i = 0; i < this->m_Record.size(); i++)
	{
		cout << "第" << i + 1 << "届  " 
		<< "  冠军编号：" << this->m_Record[i][0] << "  成绩：" << this->m_Record[i][1] << "    "
		<< "  亚军编号：" << this->m_Record[i][2] << "  成绩：" << this->m_Record[i][3] << "    "
		<< "  季军编号：" << this->m_Record[i][4] << "  成绩：" << this->m_Record[i][5] << endl;
	}
	system("pause"); 
	system("cls");
}

//清空记录
void SpeechManager::clearRecord()
{
	cout << "是否确定清空记录？" << endl;
	cout << "1. 是" << endl;
	cout << "2. 否" << endl;

	int select = 0;
	cin >> select;
	if (select == 1)
	{
		//确认清空
		//文件清空
		ofstream ofs("speech.csv", ios::trunc);  //用trunc的方式打开，如果文件存在，则清空
		ofs.close();

		//状态清空
		this->initSpeech();  //初始化容器和属性
		this->createSpeaker();  //创建12名选手
		this->loadRecord();  //加载往届记录

		cout << "清空成功！" << endl;
	}
	system("pause");
	system("cls");
}

//析构函数
SpeechManager::~SpeechManager()
{

}
#include"workerManager.h"

//构造函数
WorkerManager::WorkerManager()
{
	//1. 文件不存在
	ifstream ifs;
	ifs.open(FILENAME, ios::in);  //读文件

	if (!ifs.is_open())
	{
		//cout << "文件不存在！" << endl;  //测试代码

		//初始化属性
		this->m_EmpNum = 0;  //初始化人数为0
		this->m_EmpArray = NULL;  //初始化数组的指针为空
		this->m_FileIsEmpty = true;  //初始化文件是否为空
		ifs.close();  //关闭文件
		return;
	}

	//2. 文件存在，但是数据被用户清空
	char ch;
	ifs >> ch;  //读取文件的一个字符，如果是eof（文件尾部）的标志，说明文件读完了。如果文件真的为空，相当于里面只有一个eof的标志，我们把这个标志读走，然后判断这个文件是否为空。
	if (ifs.eof())  //如果ifs.eof()为真，代表文件读完了
	{
		//cout << "文件为空！" << endl;  //测试代码
		this->m_EmpNum = 0;  //初始化人数为0
		this->m_EmpArray = NULL;  //初始化数组的指针为空
		this->m_FileIsEmpty = true;  //初始化文件是否为空
		ifs.close();  //关闭文件
		return;
	}

	//3. 文件存在，并且保存职工的所有数据
	int num = this->get_EmpNum();
	//cout << "职工人数：" << num << endl;
	this->m_EmpNum = num;

	//开辟空间
	this->m_EmpArray = new Worker*[this->m_EmpNum];
	//将文件中的数据存到数组中
	this->init_Emp();

	//测试代码
	//for (int i = 0; i < this->m_EmpNum; i++)
	//{
	//	cout << "职工编号：" << this->m_EmpArray[i]->m_Id
	//		<< "\t职工姓名：" << this->m_EmpArray[i]->m_Name
	//		<< "\t部门编号：" << this->m_EmpArray[i]->m_DeptId << endl;
	//}
}

//展示菜单
void WorkerManager::Show_Menu()
{
	cout << "*************************************" << endl;
	cout << "******* 欢迎使用职工管理系统 ********" << endl;
	cout << "********** 0. 退出管理程序 **********" << endl;
	cout << "********** 1. 增加职工信息 **********" << endl;
	cout << "********** 2. 显示职工信息 **********" << endl;
	cout << "********** 3. 删除离职职工 **********" << endl;
	cout << "********** 4. 修改职工信息 **********" << endl;
	cout << "********** 5. 查找职工信息 **********" << endl;
	cout << "********** 6. 按照编号排序 **********" << endl;
	cout << "********** 7. 清空所有文档 **********" << endl;
	cout << "*************************************" << endl;
	cout << endl;
}

//退出系统
void WorkerManager::ExitSystem()
{
	cout << "欢迎下次使用！" << endl;
	system("pause");
	exit(0);  //退出程序
}

//添加职工
void WorkerManager::Add_Emp()
{
	cout << "请输入添加职工的数量：" << endl;

	int addNum = 0;  //保存用户输入的数量
	cin >> addNum;

	if (addNum > 0)
	{
		//添加
		//计算添加新的空间大小
		int newSize = this->m_EmpNum + addNum;  //新空间大小 = 原来记录人数 + 新增人数

		//开辟新空间
		Worker ** newSpace = new Worker *[newSize];

		//将原来空间下的数据拷贝到新空间下
		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				newSpace[i] = this->m_EmpArray[i];
			}
		}

		//添加新数据
		for (int i = 0; i < addNum; i++)
		{
			int id;  //职工编号
			string name;  //职工姓名
			int deptSelect;  //岗位选择

			cout << "请输入第" << i + 1 << "个新职工的编号：" << endl;
			cin >> id;

			cout << "请输入第" << i + 1 << "个新职工的姓名：" << endl;
			cin >> name;

			cout << "请选择第" << i + 1 << "个新职工的岗位：" << endl;
			cout << "1. 员工" << endl;
			cout << "2. 经理" << endl;
			cout << "3. 老板" << endl;
			cin >> deptSelect;

			Worker * worker = NULL;
			switch (deptSelect)
			{
			case 1:
				worker = new Employee(id, name, 1);
				break;
			case 2:
				worker = new Manager(id, name, 2);
				break;
			case 3:
				worker = new Boss(id, name, 3);
				break;
			default:
				break;
			}

			//将创建的职工指针保存到数组中
			newSpace[this->m_EmpNum + i] = worker;
		}

		//释放原有空间
		delete[] this->m_EmpArray;

		//更改新空间的指向
		this->m_EmpArray = newSpace;

		//更新新的职工人数
		this->m_EmpNum = newSize;

		this->m_FileIsEmpty = false;  //成功添加一个职工后，文件就不为空了

		//提示添加成功
		cout << "成功添加了" << addNum << "名新职工！" << endl;

		//保存数据到文件中
		this->save();
	}
	else
	{
		cout << "输入数据有误！" << endl;
	}

	//按任意键后清屏，回到上级目录
	system("pause");
	system("cls");
}

//保存文件
void WorkerManager::save()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out);  //用输出的方式打开文件——写文件

	//将每个人的数据写入到文件中
	for (int i = 0; i < this->m_EmpNum; i++)
	{
		ofs << this->m_EmpArray[i]->m_Id << "  "
			<< this->m_EmpArray[i]->m_Name << "  "
			<< this->m_EmpArray[i]->m_DeptId << endl;
	}

	//关闭文件
	ofs.close();
}

//统计文件中的人数
int WorkerManager::get_EmpNum()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);  //打开文件——读

	int id;
	string name;
	int deptId;

	int num = 0;  //num是统计人数的变量
	while (ifs>>id && ifs>>name && ifs>>deptId)  //读入所有数据
	{
		num++;
	}
	return num;
}

//初始化员工
void WorkerManager::init_Emp()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	int deptId;

	int index = 0;  //下标
	while (ifs >> id && ifs >> name && ifs >> deptId)
	{
		Worker * worker = NULL;  //初始化对象worker为空

		if (deptId == 1)  //普通职工
		{
			worker = new Employee(id, name, deptId);
		}
		else if (deptId == 2)  //经理
		{
			worker = new Manager(id, name, deptId);
		}
		else  //老板
		{
			worker = new Boss(id, name, deptId);
		}
		this->m_EmpArray[index] = worker;
		index++;
	}
	
	//关闭文件
	ifs.close();
}

//显示职工信息
void WorkerManager::Show_Emp()
{
	//判断文件是否为空
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或者记录为空！" << endl;
	}
	else
	{
		for (int i = 0; i < m_EmpNum; i++)
		{
			//利用多态调用程序接口
			this->m_EmpArray[i]->showInfo();
		}
	}
	//按任意键后清屏
	system("pause");
	system("cls");
}

//删除职工
void WorkerManager::Del_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或记录为空！" << endl;
	}
	else
	{
		//按照职工编号删除
		cout << "请输入想要删除的职工编号：" << endl;
		int id = 0;
		cin >> id;

		int index = this->IsExist(id);

		if (index != -1)  //说明职工存在，并且要删掉index位置上的职工
		{
			//数据前移
			for (int i = index; i < this->m_EmpNum - 1; i++)
			{
				this->m_EmpArray[i] = this->m_EmpArray[i + 1];
			}
			this->m_EmpNum--;  //更新数组中记录人员个数

			//数据同步更新到文件中
			this->save();

			cout << "删除成功！" << endl;
		}
		else
		{
			cout << "删除失败，未找到该职工！" << endl;
		}
	}

	//按任意键清屏
	system("pause");
	system("cls");
}

//判断职工是否存在，如果存在，返回职工所在数组，如果不存在，返回-1
int WorkerManager::IsExist(int id)
{
	int index = -1;

	for (int i = 0; i < this->m_EmpNum; i++)
	{
		if (this->m_EmpArray[i]->m_Id == id)
		{
			//找到职工
			index = i;

			break;
		}
	}
	return index;
}

//修改职工
void WorkerManager::Mod_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或记录为空！" << endl;
	}
	else
	{
		cout << "请输入需要修改的职工的编号：" << endl;
		int id;
		cin >> id;

		int ret = this->IsExist(id);
		if (ret != -1)
		{
			//查到需要修改的编号的职工
			delete this->m_EmpArray[ret];  //要创建新的人，需先把堆区数据释放干净

			int newId = 0;
			string newName = "";
			int newdeptSelect = 0;

			cout << "查到编号为 " << id << " 号的职工，请输入新的职工编号：" << endl;
			cin >> newId;

			cout << "请输入新的姓名：" << endl;
			cin >> newName;

			cout << "请输入新的岗位：" << endl;
			cout << "1. 员工" << endl;
			cout << "2. 经理" << endl;
			cout << "3. 老板" << endl;
			cin >> newdeptSelect;

			Worker * worker = NULL;
			switch (newdeptSelect)
			{
			case 1:
				worker = new Employee(newId, newName, newdeptSelect);
				break;
			case 2:
				worker = new Manager(newId, newName, newdeptSelect);
				break;
			case 3:
				worker = new Boss(newId, newName, newdeptSelect);
				break;
			default:
				break;
			}

			//更新数据到数组中
			this->m_EmpArray[ret] = worker;
			cout << "修改成功！" << endl;

			//保存到文件中
			this->save();
		}
		else
		{
			cout << "修改失败，查无此人！" << endl;
		}
	}
	system("pause");
	system("cls");
}

//查找职工
void WorkerManager::Find_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或记录为空！" << endl;
	}
	else
	{
		cout << "请输入查找的方式：" << endl;
		cout << "1. 按照职工编号查找" << endl;
		cout << "2. 按照职工姓名查找" << endl;

		int select = 0;
		cin >> select;
		if (select == 1)
		{
			//按照职工编号查找
			int id;
			cout << "请输入要查找职工的编号：" << endl;
			cin >> id;

			int ret = IsExist(id);
			if(ret != -1)
			{
				//找到职工
				cout << "查找成功！该职工信息如下：" << endl;
				this->m_EmpArray[ret]->showInfo();
			}
			else
			{
				cout << "查找失败，查无此人！" << endl;
			}
		}
		else if (select == 2)
		{
			//按照职工姓名查找
			string name;
			cout << "请输入要查找职工的姓名：" << endl;
			cin >> name;

			//加入判断是否查找到职工的标志
			bool flag = false;  //默认未找到职工

			for (int i = 0; i < m_EmpNum; i++)
			{
				if (this->m_EmpArray[i]->m_Name == name)
				{
					cout << "查找成功！该职工信息如下：" << endl;
					this->m_EmpArray[i]->showInfo();  //调用显示信息的接口

					flag = true;
				}
			}
			if (flag == false)
			{
				cout << "查找失败，查无此人！" << endl;
			}
		}
		else
		{
			cout << "输入的选项有误！" << endl;
		}
	}
	system("pause");
	system("cls");
}

//排序职工
void WorkerManager::Sort_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或记录为空！" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "请选择排序方式：" << endl;
		cout << "1. 按照职工编号进行升序" << endl;
		cout << "2. 按照职工编号进行降序" << endl;

		int select = 0;
		cin >> select;
		for (int i = 0; i < m_EmpNum; i++)
		{
			int MinOrMax = i;  //声明最小值或最大值下标
			for (int j = i + 1; j < m_EmpNum; j++)
			{
				if (select == 1)  //升序(认定最小值下标）
				{
					if (this->m_EmpArray[MinOrMax]->m_Id > this->m_EmpArray[j]->m_Id)
					{
						MinOrMax = j;
					}
				}
				else  //降序(认定最大值下标）
				{
					if (this->m_EmpArray[MinOrMax]->m_Id < this->m_EmpArray[j]->m_Id)
					{
						MinOrMax = j;
					}
				}
			}
			//判断一开始认定的最小值或最大值是不是计算的最小值或最大值，如果不是，交换数据
			if (i != MinOrMax)
			{
				Worker * temp = this->m_EmpArray[i];
				this->m_EmpArray[i] = this->m_EmpArray[MinOrMax];
				this->m_EmpArray[MinOrMax] = temp;
			}
		}
		cout << "排序成功！排序后的结果为：" << endl;
		this->save();  //排序后的结果保存到文件中
		this->Show_Emp();
	}
}

//清空文件
void WorkerManager::Clean_File()
{
	cout << "是否确认清空？" << endl;
	cout << "1. 是" << endl;
	cout << "2. 否" << endl;

	int select = 0;
	cin >> select;

	if (select == 1)
	{
		//清空文件
		ofstream ofs(FILENAME, ios::trunc);  //删除文件后重新创建
		ofs.close();

		if (this->m_EmpArray != NULL)
		{
			//删除堆区的每个职工对象
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				delete this->m_EmpArray[i];
				this->m_EmpArray[i] = NULL;
			}
			//删除堆区数组指针
			delete[] this->m_EmpArray;
			this->m_EmpArray = NULL;
			this->m_EmpNum = 0;
			this->m_FileIsEmpty = true;
		}
		cout << "清空成功！" << endl;
	}
	system("pause");
	system("cls");
}

//析构函数
WorkerManager::~WorkerManager()
{
	if (this->m_EmpArray != NULL)
	{
		for (int i = 0; i < this->m_EmpNum; i++)
		{
			if (this->m_EmpArray[i] != NULL)
			{
				delete this->m_EmpArray[i];
			}
		}
		delete[] this->m_EmpArray;
		this->m_EmpArray = NULL;
	}
}
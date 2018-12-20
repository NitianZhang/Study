// example5_14_people.cpp
＃包括 “ example5_14_people.h ”

//日期类的函数实现
void  Date :: Set（int y，int m，int d）
{
	年= y;
	月= m;
	day = d;
}

int  Date :: GetYear（）
{
	回归年;
}

int  Date :: GetMonth（）
{
	返回月份;
}

int  Date :: GetDay（）
{
	返回日;
}


//人类的函数实现
人::人（）
{
	strcpy（name，“ 00 ”）;
}

char * Person :: GetName（）
{
	返回名称;
}

void  Person :: Input（）
{
	cout << “请输入信息\ n ” ;
	cout << “姓名：” ;
	cin >> name;
	cout << “编号：” ;
	cin >>数字;
	int y，m，d;
	cout << “出生日期（年份月份日期）：” ;
	cin >> y >> m >> d;
	生日。设定（y，m，d）;
	cout << “性别（m / f）：” ;
	cin >> sex;
}

void  Person :: Output（）
{
	cout << “姓名：” << name << endl;
	cout << “编号：” <<数字<< endl;
	cout << “性别：” ;
	if（sex == ' m '）
		cout << “女” << endl;
	其他
		cout << “男” << endl;
	cout << “出生日期：” <<生日。GetYear（）<< ' - ' <<生日。GetMonth（）<< ' - ' <<生日。GetDay（）<< endl;
}


// Student类的函数实现
void  Student :: Input（）
{
	Person :: Input（）;
	cout << “专业：” ;
	cin >>专业;
}

void  Student :: Output（）
{
	Person :: Output（）;
	cout << “专业：” <<专业<< endl;
}

//研究生类的函数实现
void  Graduate :: Input（）
{
	Student :: Input（）;
	cout << “研究课题：” ;
	cin >> researchTopic;
}

void  Graduate :: Output（）
{
	Student :: Output（）;
	cout << “研究课题：” << researchTopic << endl;
}


//老师类的函数实现
void  Teacher :: Input（）
{
	Person :: Input（）;
	cout << “职称：” ;
	cin >> academicTitle;
}

void  Teacher :: Output（）
{
	Person :: Output（）;
	cout << “职称：” << academicTitle << endl;
}

// PostgraduateOnJob类的函数实现
void  PostgraduateOnJob ::输入（）
{
	Graduate :: Input（）;
	cout << “职称：” ;
	cin >> academicTitle;
}

void  PostgraduateOnJob ::输出（）
{
	Graduate :: Output（）;
	cout << “职称：” << academicTitle << endl;
}
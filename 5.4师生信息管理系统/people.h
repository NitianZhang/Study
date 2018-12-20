// example5_14_people.h
＃IFNDEF _PERSON
＃定义 _PERSON

＃包括< iostream的>
＃包括<字符串>
使用 命名空间 std ;

上课 日期
{
保护：
	int年;
	int月;
	int day;
上市：
	void  Set（int y，int m，int d）;
	int  GetYear（）;
	int  GetMonth（）;
	int  GetDay（）;
};

班级 人员
{
保护：
	char name [ 20 ];
	字符数[ 10 ];
	char性;
	生日日期;
上市：
	人（）;
	void  Input（）;
	void  Output（）;
	char * GetName（）;
};

班级 学生：虚拟公共人员
{
保护：
	char special [ 20 ];
上市：
	void  Input（）;
	void  Output（）;
};

班级 研究生：虚拟公共学生
{
保护：
	char   researchTopic [ 50 ];	// ?D????ì
上市：
	void  Input（）;
	void  Output（）;
};

类 教师：虚拟公众人物
{
保护：
	char academicTitle [ 20 ];	// ?ìê|?°3?
上市：
	void  Input（）;
	void  Output（）;
};

class  PostgraduateOnJob：公共 研究生，公共 教师
{
上市：
	void  Input（）;
	void  Output（）;
};

＃ENDIF
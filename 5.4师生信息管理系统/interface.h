// example5_14_interface.h
＃IFNDEF _interface
＃定义 _interface
＃包括 “ example5_14_people.h ”

const  int N = 3 ;

类 接口
{
保护：
	学生st [N];
	int numOfSt;
	研究生gr [N];
	int numOfGr;
	研究生OnJob po [N];
	int numOfPo;
	老师te [N];
	int numOfTe;
上市：
	接口（）;
	void  display（）;
	void  run（）;
	void  Input（）;
	void  Output（）;      
};

＃ENDIF
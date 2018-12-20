// example5_14_interface.cpp
＃包括 “ example5_14_interface.h ”
＃包括 <：字符串>
＃包括 < iostream的>

使用 命名空间 std ;

Interface :: Interface（）
{
	numOfSt = 0 ;
	numOfGr = 0 ;
	numOfPo = 0 ;
	numOfTe = 0 ;
}

void  Interface :: display（）
{
	cout << “ ********** 0。退出********** ” << endl;
	cout << “ ********** 1.录入信息********** ” << endl;
	cout << “ ********** 2.浏览信息********** ” << endl;
}

void  接口:: run（）
{
	int选择;

	做
	{
		display（）;
		cout << “请输入您的选择：” ;
		cin >> choice;
		开关（选择）
		{
		案例 0：
			打破 ;
		案例 1：
			输入（）;
			打破 ;
		案例 2：
			输出（）;
			打破 ;
		}

	} 而（选择）;
}

void  Interface :: Input（）
{
	int类型;
	int i;
	char ch;

	做
	{
		cout << “你要输入的人员类型（1-学生2-研究生3-在职研究生4-教师）：” ;
		cin >> type;

		if（type == 1）
		{
			if（numOfSt == N）
			{
				cout << “人数已满，无法继续录入！” << endl;
			}
			其他
			{
				for（i = 0 ; strcmp（st [i] .GetName（），“ 00 ”）！= 0 ; i ++）;
				ST [i]中。输入（）;
				numOfSt ++;
			}
		}
		否则 if（type == 2）
		{
			if（numOfGr == N）
			{
				cout << “人数已满，无法继续录入！” << endl;
			}
			其他
			{
				for（i = 0 ; strcmp（gr [i] .GetName（），“ 00 ”）！= 0 ; i ++）;
				GR [i]中。输入（）;
				numOfGr ++;
			}
		}
		否则 if（type == 3）
		{
			if（numOfPo == N）
			{
				cout << “人数已满，无法继续录入！” << endl;
			}
			其他
			{
				for（i = 0 ; strcmp（po [i] .GetName（），“ 00 ”）！= 0 ; i ++）;
				PO [i]中。输入（）;
				numOfPo ++;
			}
		}
		否则 if（type == 4）
		{
			if（numOfTe == N）
			{
				cout << “人数已满，无法继续录入！” << endl;
			}
			其他
			{
				for（i = 0 ; strcmp（te [i] .GetName（），“ 00 ”）！= 0 ; i ++）;
				TE [i]中。输入（）;
				numOfTe ++;
			}
		}
		其他
		{
			cout << “选择有误” << endl;
		}

		cout << “继续输入？（y / n）” << endl;
		cin >> ch;

	} while（ch == ' y '）;
}

void  Interface :: Output（）
{
	int类型;
	int i;
	cout << “你要查看的人员类型（1-学生2-研究生3-在职研究生4-教师）：” ;
	cin >> type;

	if（type == 1）
	{
		if（numOfSt == 0）
		{
			cout << “没有学生数据！” << endl;
		}
		其他
		{
			for（i = 0 ; i <N; i ++）
			if（strcmp（st [i] .GetName（），“ 00 ”）！= 0）
				ST [i]中。输出（）;
		}
	}
	否则 if（type == 2）
	{
		if（numOfGr == 0）
		{
			cout << “没有研究生数据！” << endl;
		}
		其他
		{
			for（i = 0 ; i <N; i ++）
			if（strcmp（gr [i] .GetName（），“ 00 ”）！= 0）
				GR [i]中。输出（）;
		}
	}
	否则 if（type == 3）
	{
		if（numOfPo == 0）
		{
			cout << “没有在职研究生数据！” << endl;
		}
		其他
		{
			for（i = 0 ; i <N; i ++）
			if（strcmp（po [i] .GetName（），“ 00 ”）！= 0）
				PO [i]中。输出（）;
		}
	}
	否则 if（type == 4）
	{
		if（numOfTe == 0）
		{
			cout << “没有教师数据！” << endl;
		}
		其他
		{
			for（i = 0 ; i <N; i ++）
			if（strcmp（te [i] .GetName（），“ 00 ”）！= 0）
				TE [i]中。输出（）;
		}
	}
	其他
	{
		cout << “选择有误” << endl;
	}
}
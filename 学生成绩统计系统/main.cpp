#include<iostream>
using namespace std;
#include"stu.h"
const int N = 10;
void menu();
void Outputstu(Student *array);
void Inputstu(Student *array);
int Searchstu(Student *array,char *na);
int count = 0;
int main()
{
	Student array[N];
	int choice;
	do
	{
		menu();
		cout << "Please input your choice:";
		cin >> choice;
		if (choice >= 0 && choice <= 3)
		{
			switch (choice)
			{
			case 1:Inputstu(array); break;
			case 2:cout << "Input the name searched" << endl;
				char na[20];
				cin >> na;
				int i;
				i = Searchstu(array, na);
				if (i == N)
					cout << "查无此人！\n";
				else
					array[i].Display();
				break;
			case 3:Outputstu(array); break;
			default:break;
			}
		}
	} while (choice);
	return 0;
}
void menu()
{
	cout << "**********1.录入信息**********" << endl;
	cout << "**********2.查询信息**********" << endl;
	cout << "**********3.浏览信息**********" << endl;
	cout << "**********0.退    出**********" << endl;
}//ctrl+x删除一行
void Outputstu(Student *array)
{
	cout << "学生总人数=" << count << endl;
	for (int i = 0; i < count; i++)
	{
		array[i].Display();
	}
}
int Searchstu(Student *array, char *na)
{
	int i, j = N;
	for (i = 0; i < count; i++)
	{
		if (strcmp(array[i].Getname(), na) == 0)
			j = i;
		return j;
	}
}
void Inputstu(Student *array)
{
	char ch;
	do {
		array[count].Input();
		count++;
		cout << "继续输入码？(Y or N)" << endl;
		cin >> ch;
	} while (ch == 'Y');
}
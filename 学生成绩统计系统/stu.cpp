#include"stu.h"
Student::Student()
{
	name = NULL;
	age = 0;
}
Student::Student(char *na, char *id, char *num, char *sp, int ag)
{
	if (na)
	{
		name = new char[strlen(na) + 1];
		strcpy(name, na);
	}
	strcpy(ID, id);
	strcpy(number, num);
	strcpy(spec, sp);
	age = ag;
}
Student::~Student()
{
	if (name)
		delete[]name;
}
char* Student::Getname()
{
	return name;
}
char* Student::Getid()
{
	return ID;
}
char* Student::Getspec()
{
	return spec;
}
char* Student::Getnumber()
{
	return number;
}
void Student::Display()
{
	cout << "姓 名" << name << endl;
	cout << "身份证" << ID << endl;
	cout << "学 号" << number << endl;
	cout << "专 业" << spec << endl;
	cout << "年 龄" << age << endl << endl;
}
void Student::Input()
{
	char na[10];
	cout << "请输入姓名：";
	cin >> na;
	if (name)
		delete[]name;
	name = new char[strlen(na) + 1];
	strcpy(name, na);
	cout << "请输入身份证：";
	cin >> ID;
	cout << "请输入年龄：";
	cin >> age;
	cout << "请输入专业：";
	cin >> spec;
	cout << "请输入学号：";
	cin >> number;
}
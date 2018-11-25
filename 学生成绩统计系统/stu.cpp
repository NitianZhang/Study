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
	cout << "�� ��" << name << endl;
	cout << "���֤" << ID << endl;
	cout << "ѧ ��" << number << endl;
	cout << "ר ҵ" << spec << endl;
	cout << "�� ��" << age << endl << endl;
}
void Student::Input()
{
	char na[10];
	cout << "������������";
	cin >> na;
	if (name)
		delete[]name;
	name = new char[strlen(na) + 1];
	strcpy(name, na);
	cout << "���������֤��";
	cin >> ID;
	cout << "���������䣺";
	cin >> age;
	cout << "������רҵ��";
	cin >> spec;
	cout << "������ѧ�ţ�";
	cin >> number;
}
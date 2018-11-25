#ifndef _STU
#define _STU
#include<iostream>
#include<string.h>
using namespace std;
#define SIZE 80
class Student
{
	char *name;
	char ID[19];
	char number[10];
	char spec[20];
	int age;
public:
	Student();
	Student(char *na, char *id, char *num, char *sp, int ag);
	Student(const Student &per);
	~Student();
	char* Getname();
	char* Getid();
	char* Getnumber();
	char* Getspec();
	int Getage();
	void Display();
	void Input();
};

#endif // _STU


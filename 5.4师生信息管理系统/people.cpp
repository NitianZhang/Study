// example5_14_people.cpp
������ �� example5_14_people.h ��

//������ĺ���ʵ��
void  Date :: Set��int y��int m��int d��
{
	��= y;
	��= m;
	day = d;
}

int  Date :: GetYear����
{
	�ع���;
}

int  Date :: GetMonth����
{
	�����·�;
}

int  Date :: GetDay����
{
	������;
}


//����ĺ���ʵ��
��::�ˣ���
{
	strcpy��name���� 00 ����;
}

char * Person :: GetName����
{
	��������;
}

void  Person :: Input����
{
	cout << ����������Ϣ\ n �� ;
	cout << ���������� ;
	cin >> name;
	cout << ����ţ��� ;
	cin >>����;
	int y��m��d;
	cout << ���������ڣ�����·����ڣ����� ;
	cin >> y >> m >> d;
	���ա��趨��y��m��d��;
	cout << ���Ա�m / f������ ;
	cin >> sex;
}

void  Person :: Output����
{
	cout << ���������� << name << endl;
	cout << ����ţ��� <<����<< endl;
	cout << ���Ա𣺡� ;
	if��sex == ' m '��
		cout << ��Ů�� << endl;
	����
		cout << ���С� << endl;
	cout << ���������ڣ��� <<���ա�GetYear����<< ' - ' <<���ա�GetMonth����<< ' - ' <<���ա�GetDay����<< endl;
}


// Student��ĺ���ʵ��
void  Student :: Input����
{
	Person :: Input����;
	cout << ��רҵ���� ;
	cin >>רҵ;
}

void  Student :: Output����
{
	Person :: Output����;
	cout << ��רҵ���� <<רҵ<< endl;
}

//�о�����ĺ���ʵ��
void  Graduate :: Input����
{
	Student :: Input����;
	cout << ���о����⣺�� ;
	cin >> researchTopic;
}

void  Graduate :: Output����
{
	Student :: Output����;
	cout << ���о����⣺�� << researchTopic << endl;
}


//��ʦ��ĺ���ʵ��
void  Teacher :: Input����
{
	Person :: Input����;
	cout << ��ְ�ƣ��� ;
	cin >> academicTitle;
}

void  Teacher :: Output����
{
	Person :: Output����;
	cout << ��ְ�ƣ��� << academicTitle << endl;
}

// PostgraduateOnJob��ĺ���ʵ��
void  PostgraduateOnJob ::���루��
{
	Graduate :: Input����;
	cout << ��ְ�ƣ��� ;
	cin >> academicTitle;
}

void  PostgraduateOnJob ::�������
{
	Graduate :: Output����;
	cout << ��ְ�ƣ��� << academicTitle << endl;
}
// example5_14_interface.cpp
������ �� example5_14_interface.h ��
������ <���ַ���>
������ < iostream��>

ʹ�� �����ռ� std ;

Interface :: Interface����
{
	numOfSt = 0 ;
	numOfGr = 0 ;
	numOfPo = 0 ;
	numOfTe = 0 ;
}

void  Interface :: display����
{
	cout << �� ********** 0���˳�********** �� << endl;
	cout << �� ********** 1.¼����Ϣ********** �� << endl;
	cout << �� ********** 2.�����Ϣ********** �� << endl;
}

void  �ӿ�:: run����
{
	intѡ��;

	��
	{
		display����;
		cout << ������������ѡ�񣺡� ;
		cin >> choice;
		���أ�ѡ��
		{
		���� 0��
			���� ;
		���� 1��
			���루��;
			���� ;
		���� 2��
			�������;
			���� ;
		}

	} ����ѡ��;
}

void  Interface :: Input����
{
	int����;
	int i;
	char ch;

	��
	{
		cout << ����Ҫ�������Ա���ͣ�1-ѧ��2-�о���3-��ְ�о���4-��ʦ������ ;
		cin >> type;

		if��type == 1��
		{
			if��numOfSt == N��
			{
				cout << �������������޷�����¼�룡�� << endl;
			}
			����
			{
				for��i = 0 ; strcmp��st [i] .GetName�������� 00 ������= 0 ; i ++��;
				ST [i]�С����루��;
				numOfSt ++;
			}
		}
		���� if��type == 2��
		{
			if��numOfGr == N��
			{
				cout << �������������޷�����¼�룡�� << endl;
			}
			����
			{
				for��i = 0 ; strcmp��gr [i] .GetName�������� 00 ������= 0 ; i ++��;
				GR [i]�С����루��;
				numOfGr ++;
			}
		}
		���� if��type == 3��
		{
			if��numOfPo == N��
			{
				cout << �������������޷�����¼�룡�� << endl;
			}
			����
			{
				for��i = 0 ; strcmp��po [i] .GetName�������� 00 ������= 0 ; i ++��;
				PO [i]�С����루��;
				numOfPo ++;
			}
		}
		���� if��type == 4��
		{
			if��numOfTe == N��
			{
				cout << �������������޷�����¼�룡�� << endl;
			}
			����
			{
				for��i = 0 ; strcmp��te [i] .GetName�������� 00 ������= 0 ; i ++��;
				TE [i]�С����루��;
				numOfTe ++;
			}
		}
		����
		{
			cout << ��ѡ������ << endl;
		}

		cout << ���������룿��y / n���� << endl;
		cin >> ch;

	} while��ch == ' y '��;
}

void  Interface :: Output����
{
	int����;
	int i;
	cout << ����Ҫ�鿴����Ա���ͣ�1-ѧ��2-�о���3-��ְ�о���4-��ʦ������ ;
	cin >> type;

	if��type == 1��
	{
		if��numOfSt == 0��
		{
			cout << ��û��ѧ�����ݣ��� << endl;
		}
		����
		{
			for��i = 0 ; i <N; i ++��
			if��strcmp��st [i] .GetName�������� 00 ������= 0��
				ST [i]�С��������;
		}
	}
	���� if��type == 2��
	{
		if��numOfGr == 0��
		{
			cout << ��û���о������ݣ��� << endl;
		}
		����
		{
			for��i = 0 ; i <N; i ++��
			if��strcmp��gr [i] .GetName�������� 00 ������= 0��
				GR [i]�С��������;
		}
	}
	���� if��type == 3��
	{
		if��numOfPo == 0��
		{
			cout << ��û����ְ�о������ݣ��� << endl;
		}
		����
		{
			for��i = 0 ; i <N; i ++��
			if��strcmp��po [i] .GetName�������� 00 ������= 0��
				PO [i]�С��������;
		}
	}
	���� if��type == 4��
	{
		if��numOfTe == 0��
		{
			cout << ��û�н�ʦ���ݣ��� << endl;
		}
		����
		{
			for��i = 0 ; i <N; i ++��
			if��strcmp��te [i] .GetName�������� 00 ������= 0��
				TE [i]�С��������;
		}
	}
	����
	{
		cout << ��ѡ������ << endl;
	}
}
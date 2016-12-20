#include "stdafx.h"
using namespace std;

class Counter
{
private:			//������� ���� � �������� �������� ���������

	unsigned int count;

public:				//������� ���� � ������ � �������� �������� ���������

	Counter() : count(10){}

	Counter(int chislo) : count(chislo)
	{
		cout << "������������� ����������� � ����������" << endl;
	}

	~Counter() //���������� �� ���������
	{
		cout << "������ ���������" << endl;
	}

	void inc_count(); //�������� ������
	int get_count();
};

void Counter::inc_count()
{
	count++;
}

int Counter::get_count()
{
	return count;
}

int main()
{
	setlocale(LC_ALL, "rus"); //�� �����������
	Counter c1;
	Counter c;
	Counter c2(10000021);
	cout << "\nc1=" << c1.get_count();
	cout << "\nc2=" << c2.get_count();
	c1.inc_count();
	c2.inc_count();
	c2.inc_count();
	cout << "\nc1=" << c1.get_count();
	cout << "\nc2=" << c2.get_count();
	cout << endl;
	c1.~Counter();  //�������� ���������� �� ���������
	c2.~Counter();
	system("pause");
	return 0;
}

#include "stdafx.h";
using namespace std;
const int LEN = 80;

class Employee
{
private:
	char name[LEN];
	unsigned long number;
public:
	void getdata()
	{
		cout << "\n ������� �������: "; cin >> name;
		cout << " ������� �����: "; cin >> number;
	}
	void putdata() const
	{
		cout << "\n �������: " << name;
		cout << "\n �����: " << number;
	}
};

class Manager : public Employee
{
private:
	char title[LEN];
	double dues;
public:
	void getdata()
	{
		Employee::getdata();
		cout << " ������� ���������: "; cin >> title;
		cout << " ������� ����� ������� � �����-����: "; cin >> dues;
	}
	void putdata()
	{
		Employee::putdata();
		cout << "\n ���������: " << title;
		cout << "\n ����� ������� � �����-����: " << dues;
	}
};

class Scientist : public Employee
{
private:
	int pubs;
public:
	void getdata()
	{
		Employee::getdata();
		cout << " ������� ���������� ����������: "; cin >> pubs;
	}
	void putdata() const
	{
		Employee::putdata();
		cout << "\n ���������� ����������: " << pubs;
	}
};

class Laborer : public Employee
{
};

int main()
{
	setlocale(LC_ALL, "rus");

	Manager m1, m2;
	Scientist s1;
	Laborer l1;

	cout << endl;
	cout << "\n ���� ���������� � ������ ���������";
	m1.getdata();

	cout << "\n ���� ���������� � ������ ���������";
	m2.getdata();

	cout << "\n ���� ���������� � ������ ������";
	s1.getdata();

	cout << "\n ���� ���������� � ������ �������";
	l1.getdata();

	cout << "\n ���������� � ������ ���������";
	m1.putdata();

	cout << "\n ���������� � ������ ���������";
	m2.putdata();

	cout << "\n ���������� � ������ ������";
	s1.putdata();

	cout << "\n ���������� � ������ �������";
	l1.putdata();

	cout << endl;
	system("pause");
	return 0;
}
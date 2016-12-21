#include"stdafx.h"
using namespace std;

class Person
{
private:
	char name[80];
public:
	void getName()
	{
		cout << " ������� ���: "; cin >> name;
	}
	void putName()
	{
		cout << " ���: " << name << endl;
	}
	virtual void getData() = 0;
	virtual bool isOutstanding() = 0;
};

class Student : public Person
{
private:
	float gpa;
public:
	void getData()
	{
		Person::getName();
		cout << " ������� ���� ���������: "; cin >> gpa;
	}
	bool isOutstanding()
	{
		return gpa > 3.5;
	}
};

class Professor : public Person
{
private:
	float numPubs;
public:
	void getData()
	{
		Person::getName();
		cout << " ����� ����������: "; cin >> numPubs;
	}
	bool isOutstanding()
	{
		return numPubs > 100;
	}
};

int main()
{
	setlocale(LC_ALL, "rus");
	Person* persPtr[100];
	int n = 0;
	char choice;

	do {
		cout << " ��������(s) ��� ������� (p): ";
		cin >> choice;
			if (choice == 's')
				persPtr[n] = new Student;
			else
				persPtr[n] = new Professor;

		persPtr[n++]->getData();
		cout << "������ ��� ������� (y/n)?";
		cin >> choice;
	} while (choice == 'y');

	for (int i = 0; i < n; i++)
	{
		persPtr[i]->putName();
		if (persPtr[i]->isOutstanding())
			cout << " ��� ���������� �������!\n";
	}
	system("pause");
}

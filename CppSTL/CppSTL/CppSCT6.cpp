#include "stdafx.h"

using namespace std;

class Person
{
private:
	char name[40];

public:
	void setName()
	{
		cout << "������� ���: ";
		cin >> name;
	}
	void printName()
	{
		cout << "\n ���: " << name;
	}
};

int main()
{
	setlocale(LC_ALL, "rus");
	Person* persPtr[100];
	int n = 0;
	char choice;

	do
	{
		persPtr[n] = new Person;
		persPtr[n]->setName();
		n++;
		cout << "���������� ���� (y/n)?";
		cin >> choice;
	} while (choice == 'y');
	for (int j = 0; j < n; j++)
	{
		cout << "\n���������� � ������ " << j + 1;
		persPtr[j]->printName();
	}
	cout << endl;
	system("pause");
	return 0;
}

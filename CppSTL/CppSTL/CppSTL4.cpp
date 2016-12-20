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
		cout << "\n Введите фамилию: "; cin >> name;
		cout << " Введите номер: "; cin >> number;
	}
	void putdata() const
	{
		cout << "\n Фамилия: " << name;
		cout << "\n Номер: " << number;
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
		cout << " Введите должность: "; cin >> title;
		cout << " Введите сумму взносов в гольф-клуб: "; cin >> dues;
	}
	void putdata()
	{
		Employee::putdata();
		cout << "\n Должность: " << title;
		cout << "\n Сумма взносов в гольф-клуб: " << dues;
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
		cout << " Введите количество публикаций: "; cin >> pubs;
	}
	void putdata() const
	{
		Employee::putdata();
		cout << "\n Количество публикаций: " << pubs;
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
	cout << "\n Ввод информации о первом менеджере";
	m1.getdata();

	cout << "\n Ввод информации о втором менеджере";
	m2.getdata();

	cout << "\n Ввод информации о первом ученом";
	s1.getdata();

	cout << "\n Ввод информации о первом рабочем";
	l1.getdata();

	cout << "\n Информация о первом менеджере";
	m1.putdata();

	cout << "\n Информация о втором менеджере";
	m2.putdata();

	cout << "\n Информация о первом ученом";
	s1.putdata();

	cout << "\n Информация о первом рабочем";
	l1.putdata();

	cout << endl;
	system("pause");
	return 0;
}
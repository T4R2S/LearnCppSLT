#include "stdafx.h"
using namespace std;

class Base
{
public:
	virtual void show()
	{
		cout << "Base\n";
	}
};

class Devr1 : public Base
{
public:
	void show()
	{
		cout << "Devr1\n";
	}
};

class Devr2 : public Base
{
public:
	void show()
	{
		cout << "Devr2\n";
	}
};

int main()
{
	setlocale(LC_ALL, "rus");
	Devr1 dv1;
	Devr2 dv2;
	Base* ptr;

	ptr = &dv1;
	ptr->show();
	ptr = &dv2;
	ptr->show();
	system("pause");
	return 0;
}

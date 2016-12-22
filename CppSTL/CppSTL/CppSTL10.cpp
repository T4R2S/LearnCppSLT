#include "stdafx.h"
using namespace std;

class Base
{
public:
	virtual ~Base()
	{
		cout << "Base удален \n";
	}
};

class Devr : public Base
{
public:
	~Devr()
	{
		cout << "Devr удален \n";
	}
};

int main()
{
	setlocale(LC_ALL, "rus");
	Base* pBase = new Devr;
	delete pBase;
	system("pause");
	return 0;
}
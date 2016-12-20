#include "stdafx.h"
using namespace std;

class Counter
{
private:			//создали поле с закрытой областью видимости

	unsigned int count;

public:				//создали пол€ и методы с открытой областью видимости

	Counter() : count(10){}

	Counter(int chislo) : count(chislo)
	{
		cout << "»спользовалс€ конструктор с параметром" << endl;
	}

	~Counter() //деструктор по умолчанию
	{
		cout << "ќбъект уничтожен" << endl;
	}

	void inc_count()
	{
		count++;
	}

	int get_count()
	{
		return count;
	}
};

int main()
{
	setlocale(LC_ALL, "rus"); //не об€зательно
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
	c1.~Counter();  //вызываем деструктор по умолчанию
	c2.~Counter();
	system("pause");
	return 0;
}

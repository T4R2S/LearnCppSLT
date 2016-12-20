#include "stdafx.h"
using namespace std;

class Counter
{
private:			//создали поле с закрытой областью видимости

	unsigned int count;

public:				//создали поля и методы с открытой областью видимости

	Counter() : count(10){}

	Counter(int chislo) : count(chislo)
	{
		cout << "Использовался конструктор с параметром" << endl;
	}

	~Counter() //деструктор по умолчанию
	{
		cout << "Объект уничтожен" << endl;
	}

	void inc_count(); //прототип метода
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
	setlocale(LC_ALL, "rus"); //не обязательно
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

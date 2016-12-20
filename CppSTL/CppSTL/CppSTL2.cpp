#include "stdafx.h"
using namespace std;

class smallobj
{
private:			//создали поле с закрытой областью видимости
	int somedata;
public:				//создали поля и методы с открытой областью видимости

	void setdata(int d)
	{
		somedata = d;
	}

	void showdata()
	{
		cout << "Значение поля равно " << somedata << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "rus"); //не обязательно
	smallobj s1, s2;
	s1.setdata(1066);
	s2.setdata(23123);
	s1.showdata();
	s2.showdata();
	system("pause");

	return 0;
}

#include "stdafx.h"
using namespace std;

class Date
{
private:
	int day;
	int month;
	int year;

public:
	void setDate()
	{
		cout << "\n¬ведите день: "; cin >> day;
		cout << "¬ведите мес€ц: "; cin >> month;
		cout << "¬ведите год: "; cin >> year;
	}
	void getDate()
	{
		cout << day << month << year << '\"';
	}
};

int main()
{
	setlocale(LC_ALL, "rus");
	Date birthday;
	birthday.setDate();
	birthday.getDate();

	Date *birthday_ptr;
	birthday_ptr = new Date;
	birthday_ptr->setDate();
	birthday_ptr->getDate();
	cout << endl;
	system("pause");
	return 0;
}

#include "stdafx.h"
using namespace std;

class smallobj
{
private:			//������� ���� � �������� �������� ���������
	int somedata;
public:				//������� ���� � ������ � �������� �������� ���������

	void setdata(int d)
	{
		somedata = d;
	}

	void showdata()
	{
		cout << "�������� ���� ����� " << somedata << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "rus"); //�� �����������
	smallobj s1, s2;
	s1.setdata(1066);
	s2.setdata(23123);
	s1.showdata();
	s2.showdata();
	system("pause");

	return 0;
}

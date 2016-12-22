#include "stdafx.h"
#include <algorithm>
using namespace std;

int arr[] = { 45, 2, 22, -17, 0, -30, 25, 55 };
class Class
{
};

int main()
{
	setlocale(LC_ALL, "rus");
	sort(arr, arr + 8);        //сортирует от самого маленького, до самого большого значения

	for (int i = 0; i < 8; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;
	system("pause");
	return 0;
}
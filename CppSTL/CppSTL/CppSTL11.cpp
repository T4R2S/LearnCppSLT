#include "stdafx.h"
using namespace std;

template < class T >
T sqr_it(T x)
{
	return x * x;
}

template <class T1, class T2>
T1 maximum(T1 x, T2 y)
{
	if (x > y) return x;
	return y;
}

int main()
{
	setlocale(LC_ALL, "rus");
	int i = 10;
	float f = 0.1;
	long l = 2345;
	long double ld = 122.1e+123;
	cout << "int " << sqr_it(i) << endl;
	cout << "float " << sqr_it(f) << endl;
	cout << "long " << sqr_it(l) << endl;
	cout << "long double " << sqr_it(ld) << endl;
	cout << "максимум из " << l << " и " << i << " равен " << maximum(l, i) << endl;
	system("pause");
	return 0;
}
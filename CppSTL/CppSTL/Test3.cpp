#include <iostream>
#include "stdafx.h"
using namespace std;

template <class T>
struct Array {
private:
	T *data;
	size_t size;

public:
	Array(T const * const a, size_t const n) : size(n)
	{
		data = new T[n];
		for (size_t i = 0; i<n; ++i) 
			data[i] = a[i];
	}

	Array(const Array &ar ) : size(ar.size)
	{
		data = new T[ar.size];
		for (size_t i = 0; i < size; ++i)
		{
			data[i] = ar.data[i];
		}
	}

	Array &Array::operator=(const Array &ar)
	{
		if (this != &ar)
		{
			delete[] data;
			size = ar.size;
			data = new T[ar.size];
			for (size_t i = 0; i < size; ++i)
			{
				data[i] = ar.data[i];
			}
			return *this;
		}
	}

	~Array() 
	{ 
		delete[] data; 
	}

	T at(size_t i) const
	{ 
		return data[i]; 
	}
	size_t getSize() const
	{
		return size;
	}
};

template<class T>
void print(const Array<T> a)
{
	for (size_t i = 0; i < a.getSize(); ++i)
		cout << a.at(i) << " ";
	cout << endl;
}

int main()
{
	const int a[] = { 1, 2, 3 };
	int b[] = { 5, 6, 7, 8, 9 };
	double d[] = { 3.14, 2.72 };
	const Array<int> arr1(a, sizeof(a) / sizeof(a[0]));
	print(arr1); // 1 2 3
	Array<int> arr2(arr1);
	print(arr2); // 1 2 3
	const Array<int> arr3(b, sizeof(b) / sizeof(b[0]));
	arr2 = arr3;
	print(arr2); // 5 6 7 8 9
	Array<double> darr(d, 2);
	darr = darr;
	print(darr); // 3.14 2.72
	system("pause");
	return 0;
}

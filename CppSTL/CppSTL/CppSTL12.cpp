#include"stdafx.h"
#include <algorithm>
using namespace std;
const int MAX = 100;

template <class T>
class Stack
{
private:
	T st[MAX];
	int top;
public:
	Stack()
	{
		top = -1;
	}
	void push(T var)
	{
		st[++top] = var;
	}
	T pop()
	{
		return st[top--];
	}
};

int main()
{
	setlocale(LC_ALL, "rus");
	Stack<float> s1;
	s1.push(111.1F);
	s1.push(222.2F);
	s1.push(333.3F);
	cout << "1: " << s1.pop() << endl;
	cout << "2: " << s1.pop() << endl;
	cout << "3: " << s1.pop() << endl;

	Stack<long> s2;
	s2.push(14564654L);
	s2.push(25465465L);
	s2.push(36546545L);
	cout << "\n1: " << s2.pop() << endl;
	cout << "2: " << s2.pop() << endl;
	cout << "3: " << s2.pop() << endl;
	system("pause");
	return 0;
}
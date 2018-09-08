#include <iostream>

using namespace std;

int fun(int *ptr)
{
	return (*ptr + 10);
}

int main()
{
	const int val = 10;
	const int *ptr = &val;

	const int *ptr1 = const_cast<int *> (ptr);

	cout << fun(ptr1);
	cout << "\n";
	return 0;
}

#include <iostream>

using namespace std;

int calculate(int a, int b, int c)
{
	return ((1 - c) * a) + (c * b);
}
int main()
{
	int a = 5, b = 10, c = 0;
	
	int x = calculate(a, b, c);

	cout << x << endl;

	return 0;
}

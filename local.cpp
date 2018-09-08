#include <iostream>

using namespace std;

void func(int &x)
{
	x = 20;
}
int main()
{

	int x = 10;
	func(x);
	cout << x << endl;
	return 0;
}

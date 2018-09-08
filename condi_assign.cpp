#include <iostream>

using namespace std;

int assignValue(int a, int b, int x)
{
	int y;
	int arr[2];

	arr[0] = a; 
	arr[1] = b;

	y = arr[x];

	return y;
}

int main()
{
	int a = 5;
	int b = 10;
	int x = 0;

	cout << "value assigned to 'Y' is " << assignValue(a, b, x) << endl;

	return 0;
}

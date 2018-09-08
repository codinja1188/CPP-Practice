#include <iostream>

using namespace std;

int main()
{
	int *p = NULL;

	p = new int;
	if(!p)
	{
		cout << "Allocation of memory failed\n";
	}
	else
	{
		*p = 29;
		cout << "value of p:" << *p << endl;
	}

	float *r = new float(75.25);

	cout << "Value of r:" << *r << endl;

	int n = 5;
	int *q = new int[n];
	
	if(!q)
		cout << "allocation of memory failed\n";
	else
	{
		for(int i = 0; i < n; i++)
			q[i] = i+1;

		cout << "Value store in block of memory: ";
		for(int i = 0; i < n; i++)
			cout << q[i] << " " ;
	}

	delete p;
	delete r;

	delete[] q;

	cout << endl;
	return 0;
}

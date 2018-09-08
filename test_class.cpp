#include <iostream>

using namespace std;

class Test {
	int a;
public:
	Test() { a = 1; }

	void func(int a) { cout << a << endl; }
};

int main()
{
	Test obj;
	int k = 3;
	obj.func(k);

	return 0;
}

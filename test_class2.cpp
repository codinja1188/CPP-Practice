#include <iostream>

using namespace std;

class Test {
	static int a;
public:

	void func(int a) { cout << Test::a << endl; }
};

int Test::a = 4;

int main()
{
	Test obj;
	int k = 3;
	obj.func(k);

	return 0;
}

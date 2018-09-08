#include <iostream>

using namespace std;

class Smartptr {
	int *ptr;
public:
	explicit Smartptr(int *p = NULL) { ptr = p; }

	~Smartptr() { delete(ptr); }

	int &operator *() {return *ptr; }
};

int main()
{
	Smartptr ptr(new int());
	*ptr = 20;
	cout << *ptr << endl;
}

#include <iostream>

using namespace std;

class Pet {
public:
	virtual string des() const
	{	
		return "This is pet class";
	}
};

class Dog :public Pet
{
public:
	virtual string des() const 
	{
		return "This is Dog class";
	}

	void describe(const Pet &p)
	{
		cout << p.des() << endl;
	}
};

int main()
{
	Dog d ;
	Pet p;
	d.describe(p);

	return 0;
}

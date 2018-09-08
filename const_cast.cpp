#include <iostream>

using namespace std;

class Student {
private:
	const int roll;
public:
	Student(int r) : roll(r) {}
	void func() const
	{
		( const_cast <Student *>(this))->roll = 6;
	}
	int getRoll() { return roll; }
};

int main()
{
	Student s(3);

	cout << "Old roll number: " << s.getRoll() << endl;
	s.func();

	cout << "New roll number: " << s.getRoll() << endl;

	return 0;
}

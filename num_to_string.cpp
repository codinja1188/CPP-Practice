#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
	int num = 2016;

	ostringstream str1;
	
	str1 << num;

	string geek = str1.str();

	cout << geek << endl;
}

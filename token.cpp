#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	string line = "Geeks for Geeks is a must try";

	vector<string> tokens;

	stringstream check1(line);
	
	string intermediate;

	while(getline(check1, intermediate, ' ' ))
	{
		tokens.push_back(intermediate);
	}

	for( int i = 0; i < tokens.size(); i++)
		cout << tokens[i] << '\n';

	return 0;
}

#include <iostream>
#include <string>
using namespace std;

string readName()
{
	string name;

	cout << "Please enter your name : ";
	getline(cin, name);

	return name;
}

void printName(string name)
{
	cout << name << endl;
}

int main()
{
	printName(readName());

	return 0;
}
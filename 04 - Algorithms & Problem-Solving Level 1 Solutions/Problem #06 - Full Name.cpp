#include <iostream>
#include <string>
using namespace std;

struct stFullName
{
	string FirstName = "";
	string LastName = "";
};

stFullName ReadFullName()
{
	stFullName FullName;

	cout << "Please Enter Your First Name : ";
	getline(cin, FullName.FirstName);

	cout << "Please Enter Your Last Name : ";
	getline(cin, FullName.LastName);

	return FullName;
}

string GetFullName(stFullName FullName, bool IsReversed)
{
	if (IsReversed)
		return FullName.LastName + " " + FullName.FirstName;
	else
		return FullName.FirstName + " " + FullName.LastName;
}

void PrintResult(string FullName)
{
	cout << "\nYour Full Name Is : " << FullName << endl;
}

int main()
{
	PrintResult(GetFullName(ReadFullName(), true));

	return 0;
}
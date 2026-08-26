#include <iostream>
using namespace std;

string ReadPinCode(string Message)
{
	string PinCode;

	cout << Message;
	cin >> PinCode;

	return PinCode;
}

bool Login()
{
	string PinCode = "";

	do
	{
		PinCode = ReadPinCode("Please Enter Pin Code : ");

		if (PinCode == "1234")
			return true;
		else
		{
			cout << "\nWrong Pin Code" << endl;
			system("color 4F");
		}

	} while (PinCode != "1234");

	return false;
}

int main()
{
	if (Login())
	{
		system("color 2F");
		cout << "\nYour Balance Is 7500 $" << endl;
	}

	return 0;
}
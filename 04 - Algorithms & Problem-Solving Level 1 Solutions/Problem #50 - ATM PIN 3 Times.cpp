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
	short Counter = 3;

	do
	{
		Counter--; // 2 1 0

		PinCode = ReadPinCode("Please Enter Pin Code : ");

		if (PinCode == "1234")
			return true;
		else
		{
			cout << "\nWrong Pin Code, You Have " << Counter << " More Tries" << endl;
		}

	} while (PinCode != "1234" && Counter >= 1); // Counter != 0

	return false;
}

int main()
{
	if (Login())
	{
		system("color 2F");
		cout << "\nYour Balance Is 7500 $" << endl;
	}
	else
	{
		cout << "\nYour Card Is Locked, Call The Bank For Help." << endl;
		system("color 4F");
	}

	return 0;
}
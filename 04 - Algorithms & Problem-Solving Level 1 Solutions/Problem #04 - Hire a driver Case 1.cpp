#include <iostream>
using namespace std;

struct stInfo
{
	short Age = 0;
	bool HasDrivingLicense = false;
};

stInfo ReadInfo()
{
	stInfo Info;

	cout << "Please Enter Your Age : ";
	cin >> Info.Age;

	cout << "Do You Have Driver License [0]: No, [1]: Yes ? ";
	cin >> Info.HasDrivingLicense;

	return Info;
}

bool IsAccepted(stInfo Info)
{
	return (Info.Age > 21 && Info.HasDrivingLicense);
}

void PrintResult(stInfo Info)
{
	if (IsAccepted(Info))
		cout << "\nHired" << endl;
	else
		cout << "\nRejected" << endl;
}

int main()
{
	PrintResult(ReadInfo());

	return 0;
}
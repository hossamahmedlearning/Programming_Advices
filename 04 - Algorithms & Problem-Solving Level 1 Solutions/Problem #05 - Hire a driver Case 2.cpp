#include <iostream>
using namespace std;

struct stInfo
{
	short Age = 0;
	bool HasDriverLicense = false;
	bool HasRecommendation = false;
};

stInfo ReadInfo()
{
	stInfo Info;

	cout << "Please Enter Your Age : ";
	cin >> Info.Age;

	cout << "Do You Have Driver License [0]: No, [1]: Yes ? ";
	cin >> Info.HasDriverLicense;

	cout << "Do You Have Recommendation [0]: No, [1]: Yes ? ";
	cin >> Info.HasRecommendation;

	return Info;
}

bool IsAccepted(stInfo Info)
{
	if (Info.HasRecommendation)
		return true;
	else
		return (Info.Age >= 21 && Info.HasDriverLicense);
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
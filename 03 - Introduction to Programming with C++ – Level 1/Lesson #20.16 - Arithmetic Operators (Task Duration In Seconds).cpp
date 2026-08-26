#include <iostream>
using namespace std;

int main()
{
	int days, hours, minutes, seconds, taskDurationInSeconds;

	cout << "Please enter number of days : ";
	cin >> days;

	cout << "Please enter number of hours : ";
	cin >> hours;

	cout << "Please enter number of minutes : ";
	cin >> minutes;

	cout << "Please enter number of seconds : ";
	cin >> seconds;

	taskDurationInSeconds = (days * 24 * 60 * 60) + (hours * 60 * 60)
		+ (minutes * 60) + seconds;

	cout << "\nTask duration in seconds : " << taskDurationInSeconds << " Seconds" << endl;

	return 0;
}
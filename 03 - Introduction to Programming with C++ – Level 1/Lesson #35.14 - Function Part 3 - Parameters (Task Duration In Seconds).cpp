#include <iostream>
#include <cmath>
using namespace std;

int calcTaskDurationInSeconds(int days, int hours, int minutes, int seconds)
{
	return (days * 24 * 60 * 60) + (hours * 60 * 60)
		+ (minutes * 60) + seconds;
}

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

	cout << "\nTask duration in seconds : " << calcTaskDurationInSeconds(days, hours, minutes, seconds) << " Seconds" << endl;

	return 0;
}
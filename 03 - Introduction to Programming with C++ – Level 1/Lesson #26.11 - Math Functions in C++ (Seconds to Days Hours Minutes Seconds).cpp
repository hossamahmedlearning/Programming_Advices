#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int taskDurationInSeconds;
	int days, hours, minutes, seconds;
	int remainder;

	int secondsInDay = 24 * 60 * 60;
	int secondsInHour = 60 * 60;
	int secondsInMinute = 60;

	cout << "Please enter task duration in seconds : ";
	cin >> taskDurationInSeconds;

	days = taskDurationInSeconds / secondsInDay;
	remainder = taskDurationInSeconds % secondsInDay;

	hours = remainder / secondsInHour;
	remainder = remainder % secondsInHour;

	minutes = remainder / secondsInMinute;
	remainder = remainder % secondsInMinute;

	seconds = remainder;

	cout << endl << round(days) << ":" << round(hours) << ":" << round(minutes) << ":" << round(seconds) << endl;

	return 0;
}
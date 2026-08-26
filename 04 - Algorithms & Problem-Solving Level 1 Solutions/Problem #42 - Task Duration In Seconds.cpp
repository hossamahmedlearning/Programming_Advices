#include <iostream>
using namespace std;

struct stTaskDuration
{
	int Days, Hours, Minutes, Seconds;
};

stTaskDuration ReadTaskDuration()
{
	stTaskDuration TaskDuration;

	cout << "Please Enter Number Of Days : ";
	cin >> TaskDuration.Days;

	cout << "Please Enter Number Of Hours : ";
	cin >> TaskDuration.Hours;

	cout << "Please Enter Number Of Minutes : ";
	cin >> TaskDuration.Minutes;

	cout << "Please Enter Number Of Seconds : ";
	cin >> TaskDuration.Seconds;

	return TaskDuration;
}

int ConvertTaskDurationToSeconds(stTaskDuration TaskDuration)
{
	int TotalSeconds = TaskDuration.Days * 24 * 60 * 60;
	TotalSeconds += TaskDuration.Hours * 60 * 60;
	TotalSeconds += TaskDuration.Minutes * 60;
	TotalSeconds += TaskDuration.Seconds;

	return TotalSeconds;
}

int main()
{
	int TotalSeconds = ConvertTaskDurationToSeconds(ReadTaskDuration());

	cout << "\nResult In Seconds : " << TotalSeconds << endl;

	return 0;
}
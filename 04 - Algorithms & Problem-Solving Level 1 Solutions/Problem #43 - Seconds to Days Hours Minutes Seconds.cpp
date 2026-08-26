#include <iostream>
#include <cmath>
using namespace std;

struct stTaskDuration
{
	int Days, Hours, Minutes, Seconds;
};

int ReadPositiveNumber(string Message)
{
	int Number = 0;

	do
	{
		cout << Message;
		cin >> Number;

	} while (Number < 0);

	return Number;
}

stTaskDuration ConvertSecondsToTaskDuration(int TotalSeconds)
{
	stTaskDuration TaskDuration; 

	int SecondsInDay = 24 * 60 * 60;
	int SecondsInHour = 60 * 60;
	int SecondsInMinute = 60;

	int Remainder = 0;

	TaskDuration.Days = floor(TotalSeconds / SecondsInDay);
	Remainder = TotalSeconds % SecondsInDay;

	TaskDuration.Hours = floor(Remainder / SecondsInHour);
	Remainder = Remainder % SecondsInHour;

	TaskDuration.Minutes = floor(Remainder / SecondsInMinute);
	Remainder = Remainder % SecondsInMinute;

	TaskDuration.Seconds = Remainder;

	return TaskDuration;
}

void PrintTaskDurationDetails(stTaskDuration TaskDuration)
{
	cout << endl << TaskDuration.Days << ":" << TaskDuration.Hours << ":" <<
		TaskDuration.Minutes << ":" << TaskDuration.Seconds << endl;
}

int main()
{
	int TotalSeconds = ReadPositiveNumber("Please Enter Total Seconds : ");
	PrintTaskDurationDetails(ConvertSecondsToTaskDuration(TotalSeconds));

	return 0;
}
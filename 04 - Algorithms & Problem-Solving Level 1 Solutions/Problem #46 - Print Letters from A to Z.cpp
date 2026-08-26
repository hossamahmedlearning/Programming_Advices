#include <iostream>
using namespace std;

void PrintAllLetters()
{
	for (int Counter = 65; Counter <= 90; Counter++)
	{
		cout << char(Counter) << endl;
	}
}

int main()
{
	PrintAllLetters();

	return 0;
}
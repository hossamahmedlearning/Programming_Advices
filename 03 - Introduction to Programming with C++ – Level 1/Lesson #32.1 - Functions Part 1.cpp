#include <iostream>
using namespace std;

void dispalyMyCardInfo()
{
	cout << "********************************\n";
	cout << "Name    : Hossam Ahmed Ragab.\n";
	cout << "Age     : 22 Years.\n";
	cout << "City    : Cairo.\n";
	cout << "Country : Egypt.\n";
	cout << "********************************\n";

}

void printSquareStars()
{
	cout << "********\n";
	cout << "********\n";
	cout << "********\n";
	cout << "********\n";
}

void printILoveProgramming()
{
	cout << "I Love Programming!\n\n";
	cout << "I promise to be the best developer ever!\n\n";
	cout << "I know it will take some time to practice, but I\n";
	cout << "will achieve my goal.\n\n";
	cout << "Best Regards,\n";
	cout << "Mohammed Abu-Hadhoud.\n\n";
}

void printH()
{
	cout << "*   *\n";
	cout << "*   *\n";
	cout << "*****\n";
	cout << "*   *\n";
	cout << "*   *\n";
}

int main()
{
	dispalyMyCardInfo();
	cout << endl;
	printSquareStars();
	cout << endl;
	printILoveProgramming();
	cout << endl;
	printH();
	cout << endl;

	return 0;
}
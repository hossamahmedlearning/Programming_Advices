#include <iostream>
using namespace std;

struct stInfo
{
	string firstName;
	string lastName;
	short age;
	string phone;
};

int main()
{
	stInfo persons[2];

	persons[0].firstName = "Hossam";
	persons[0].lastName = "Ahmed";
	persons[0].age = 22;
	persons[0].phone = "2452125356";

	persons[1].firstName = "Ali";
	persons[1].lastName = "Maher";
	persons[1].age = 33;
	persons[1].phone = "263452345";

	cout << persons[1].firstName << endl;

	return 0;
}
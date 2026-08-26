#include <iostream>
using namespace std;

int main()
{
	bool result;

	result = (12 >= 12);
	cout << result << endl;

	result = (12 > 7);
	cout << result << endl;

	result = (8 < 6);
	cout << result << endl;

	result = (8 == 8);
	cout << result << endl;

	result = (12 <= 12);
	cout << result << endl;

	result = (7 == 5);
	cout << result << endl;

	result = !(12 >= 12);
	cout << result << endl;

	result = !(12 < 7);
	cout << result << endl;

	result = !(8 < 6);
	cout << result << endl;

	result = !(8 == 8);
	cout << result << endl;

	result = !(12 <= 12);
	cout << result << endl;

	result = !(7 == 5);
	cout << result << endl;

	result = (1 && 1);
	cout << result << endl;

	result = (true && 0);
	cout << result << endl;

	result = (0 || 1);
	cout << result << endl;

	result = (0 || 0);
	cout << result << endl;

	result = !0;
	cout << result << endl;

	result = !(1 || 0);
	cout << result << endl;

	result = (7 == 7) && (7 > 5);
	cout << result << endl;

	result = (7 == 7) && (7 < 5);
	cout << result << endl;

	result = (7 == 7) || (7 < 5);
	cout << result << endl;

	result = (7 < 7) || (7 > 5);
	cout << result << endl;

	result = !(7 == 7) && (7 > 5);
	cout << result << endl;

	result = (7 == 7) && !(7 < 5);
	cout << result << endl;

	result = (5 > 6 && 7 == 7) || (1 || 0);
	cout << result << endl;

	result = !(5 > 6 && 7 == 7) || (1 || 0);
	cout << result << endl;

	result = !(5 > 6 && 7 == 7) || !(1 || 0);
	cout << result << endl;

	result = !(5 > 6 || 7 == 7) && !(1 || 0);
	cout << result << endl;

	result = ((5 > 6 && 7 <= 8) || (8 > 1 && 4 <= 3)) && true;
	cout << result << endl;

	result = ((5 > 6 && !(7 <= 8)) && (8 > 1 || 4 <= 3)) || true;
	cout << result << endl;

	return 0;
}
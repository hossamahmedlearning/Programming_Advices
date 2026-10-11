#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector <int> vNumbers;

	vNumbers.push_back(10);
	vNumbers.push_back(20);
	vNumbers.push_back(30);
	vNumbers.push_back(40);
	vNumbers.push_back(50);

	cout << "Stack Size = " << vNumbers.size() << endl; // 5

	vNumbers.pop_back();
	vNumbers.pop_back();
	vNumbers.pop_back();
	vNumbers.pop_back();
	vNumbers.pop_back();

	cout << "Stack Size = " << vNumbers.size() << endl; // 0

	if (!vNumbers.empty())
		vNumbers.pop_back();

	if(vNumbers.size() > 0)
		vNumbers.pop_back();

	vNumbers.clear(); // make the full vector empty

	cout << "Numbers Vector : ";

	// ranged loop
	for (int& Number : vNumbers) 
	{
		cout << Number << " ";
	}

	cout << endl;

	return 0;
}
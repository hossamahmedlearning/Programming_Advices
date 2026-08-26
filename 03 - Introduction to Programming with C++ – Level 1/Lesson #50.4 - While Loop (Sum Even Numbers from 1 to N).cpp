#include <iostream>
using namespace std;

int sumEvenNumbersFrom1ToN(int number)
{
    int sum = 0;

    int counter = 1;
    while (counter <= number)
    {
       if(counter % 2 == 0)
           sum += counter;

        counter++;
    }

    return sum;
}

int main()
{
    int number;

    cout << "Please enter number : ";
    cin >> number;

	cout << "Sum of even numbers from 1 to " << number << " is : " << sumEvenNumbersFrom1ToN(number) << endl;

    return 0;
}
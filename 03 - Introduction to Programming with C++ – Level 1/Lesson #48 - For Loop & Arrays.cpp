#include <iostream>
using namespace std;

void readArrayData(int arr1[100], int& length)
{
    cout << "How many numbers do you want to enter ? 1 to 100 ? ";
    cin >> length;

    for (int i = 0; i < length; i++)
    {
        cout << "Please enter number " << i + 1 << " : ";
        cin >> arr1[i];
    }
}

void printArrayData(int arr1[100], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << "Number [" << i + 1 << "] : " << arr1[i] << endl;
    }
}

int calcArraySum(int arr1[100], int length)
{
    int sum = 0;

    for (int i = 0; i < length; i++)
    {
        sum += arr1[i];
    }

    return sum;
}

float calcArrayAvg(int arr1[100], int length)
{
    return (float)calcArraySum(arr1, length) / length;
}

int main()
{
    int arr1[100], length = 0;

    readArrayData(arr1, length);

    cout << endl;

    printArrayData(arr1, length);

    cout << "\n************************************\n";

    int sum = calcArraySum(arr1, length);
    cout << "Sum = " << sum << endl;
    cout << "Avg = " << (float)sum / length << endl;
    return 0;
}
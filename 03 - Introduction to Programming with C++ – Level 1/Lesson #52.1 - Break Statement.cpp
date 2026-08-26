#include <iostream>
using namespace std;

int main()
{
    int arr[10] = { 10, 20, 44, 55, 33, 22, 99, 88, 99, 100 };
    int SearchFor = 20;

    for (int i = 0; i <= 10; i++) {

        cout << "we are at iteration " << i + 1 << endl;

        if (SearchFor == arr[i])
        {
            cout << endl << SearchFor << " found at position " << i << endl << endl;
            break;
        }

    }

    return 0;
}
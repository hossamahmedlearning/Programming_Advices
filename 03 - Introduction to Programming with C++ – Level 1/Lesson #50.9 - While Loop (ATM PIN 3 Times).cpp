#include <iostream>
using namespace std;

int main() {
    int pin;
    int counter = 1; // Start at attempt number 1

    cout << "Please enter your PIN Code:\n";
    cin >> pin;

    // Keep looping while the PIN is wrong AND they haven't reached 3 attempts yet
    while (pin != 1234 && counter < 3)
    {
        cout << "Wrong PIN\n\n";
        cout << "Please enter your PIN Code:\n";
        cin >> pin;

        counter++; // Move to the next attempt
    }

    // After the loop finishes, we check WHY it stopped
    if (pin == 1234)
    {
        cout << "Your Balance is: 7500\n";
    }
    else
    {
        cout << "Card is locked!\n";
    }

    return 0;
}
#include <iostream>
using namespace std;

struct stMarks
{
    float mark1;
    float mark2;
    float mark3;
};

void readMarks(stMarks& marks)
{
    cout << "Please enter mark1 : ";
    cin >> marks.mark1;

    cout << "Please enter mark2 : ";
    cin >> marks.mark2;

    cout << "Please enter mark3 : ";
    cin >> marks.mark3;
}

float calcAvg(stMarks marks)
{
    return (marks.mark1 + marks.mark2 + marks.mark3) / 3;
}

bool isPass(float avg)
{
    if (avg >= 50)
        return true;
    else
        return false;
}

int main()
{
    stMarks marks;
    readMarks(marks);

    float avg = calcAvg(marks);

    cout << "\nAvg : " << avg << endl;

    if (isPass(avg))
    {
        cout << "Pass" << endl;
    }
    else
    {
        cout << "Fail" << endl;
    }

    return 0;
}
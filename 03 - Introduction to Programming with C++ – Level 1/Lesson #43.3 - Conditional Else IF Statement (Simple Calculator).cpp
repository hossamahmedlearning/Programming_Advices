#include <iostream>
using namespace std;

struct stQuestion
{
    int number1;
    int number2;
    char op;
};

void readQuestion(stQuestion& question)
{
    cout << "Please enter number1 : ";
    cin >> question.number1;

    cout << "Please enter number2 : ";
    cin >> question.number2;

    cout << "Please enter op [+,-,*,/] : ";
    cin >> question.op;
}

float calcAnswer(stQuestion question)
{
    if (question.op == '+')
        return question.number1 + question.number2;
    else if (question.op == '-')
        return question.number1 - question.number2;
    else if (question.op == '*')
        return question.number1 * question.number2;
    else if (question.op == '/')
        return question.number1 / question.number2;
    else
        return -1;
}

int main()
{
    stQuestion question;

    readQuestion(question);

    cout << "\nAnswer = " << calcAnswer(question) << endl;

    return 0;
}
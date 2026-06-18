#include <iostream>
using namespace std;

enum enNumberType
{
    Odd = 1,
    Even = 2
};

int ReadNumber()
{
    int number;
    cout << "\nPlease Enter Number: ";
    cin >> number;
    return number;
}

enNumberType ChekNumberType(int number)
{
    int Result = number % 2;
    if (Result == 0)
        return enNumberType::Even;
    else
        return enNumberType::Odd;
}

void PrintNumberType(enNumberType Type)
{
    if (Type == enNumberType::Even)
        cout << "Even";
    else
        cout << "Odd";
}
int main()
{

    PrintNumberType(ChekNumberType(ReadNumber()));

    return 0;
}
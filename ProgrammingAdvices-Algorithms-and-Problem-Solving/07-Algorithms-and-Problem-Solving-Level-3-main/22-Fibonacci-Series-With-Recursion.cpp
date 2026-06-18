#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Method 1
void PrintFibonacciUsingRecurssion(short Number, int Prev1, int Prev2)
{
    int FebNumber = 0;

    if (Number > 0)
    {
        FebNumber = Prev2 + Prev1;
        Prev2 = Prev1;
        Prev1 = FebNumber;
        cout << FebNumber << "   ";
        PrintFibonacciUsingRecurssion(Number - 1, Prev1, Prev2);
    }
}

/*Method 2
int PrintFibonacciUsingRecurssion(short Number, int Prev2, int Prev1)
{
    int Two = 2;

    if (Number < Two)
    {
        return 0;
    }

    int FebNumber;

    FebNumber = Prev2 + Prev1;
    Prev2 = Prev1;
    Prev1 = FebNumber;
    cout << FebNumber << "   ";

    return FebNumber + PrintFibonacciUsingRecurssion(Number - 1, Prev2, Prev1);
}
*/

int main()
{
    cout << endl;
    // Method 1
    PrintFibonacciUsingRecurssion(10, 0, 1);

    // Method 2
    // cout << "1   ";
    // int Prev2 = 0, Prev1 = 1;
    // PrintFibonacciUsingRecurssion(10, Prev2, Prev1);

    return 0;
}
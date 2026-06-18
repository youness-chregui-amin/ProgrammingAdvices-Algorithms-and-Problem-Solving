#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void PrintFibonacciUsingLoop(short Number)
{

    // Method 1
    int FebNumber = 0;
    int Prev2 = 0, Prev1 = 1;
    cout << "1   ";
    for (int i = 2; i <= Number; i++)
    {
        FebNumber = Prev2 + Prev1;
        cout << FebNumber << "   ";
        Prev2 = Prev1;
        Prev1 = FebNumber;
    }

    // Method 2
    //  int Prev = 1, Current = 1;
    //  int Next;
    //  cout << "1   ";
    //  for (int i = 2; i <= Number; i++)
    //  {
    //      Next = Prev + Current;
    //      cout << Current << "   ";
    //      Current = Next;
    //      Prev = Current - Prev;
    //  }
}

int main()
{
    cout << endl;
    PrintFibonacciUsingLoop(10);

    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;

float ReadNumber(string Message)
{
    float number;
    cout<<Message;
    cin>>number;
    return number;
}


float MySqrt(float number)
{
    return pow(number,0.5);
}


int main()
{

    float Number=ReadNumber("Enter Number: ");

    cout << "My MySqrt Result : " << MySqrt(Number) << endl;

    cout << "C++ sqrt Result: " << sqrt(Number) << endl;

    return 0;
}
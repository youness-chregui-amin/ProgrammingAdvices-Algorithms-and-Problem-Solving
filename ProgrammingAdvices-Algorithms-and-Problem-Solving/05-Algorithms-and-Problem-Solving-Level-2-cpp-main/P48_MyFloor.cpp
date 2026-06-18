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

int MyFloor(float number)
{

    int intPart = (int)number;

    if (number >= 0 || number == intPart)
        return intPart;

    else 
        return intPart-1;
    
    
}


int main()
{

    float Number=ReadNumber("Enter Number: ");
    

    cout << "My Floor Result : " << MyFloor(Number) << endl;
    cout << "C++ floor Result: " << floor(Number) << endl;

    return 0;
}
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

float GetFractionPart(float Number)
{
    return Number-(int)Number;
}

int MyCeilMethod1(float Number)
{
    int IntPart=(int)Number;

    if (abs(GetFractionPart(Number))>0)
    {
        if(Number>0)
            return IntPart+1;
        else
            return IntPart; 
    }else
        return IntPart;
    
}

/*
int MyCeilMethod2(float number)
{
    
    int intPart = (int)number;

    if (number > 0 && number!=intPart)
        return intPart+1;
    else
        return intPart; 
    
}
*/

int main()
{

    float Number=ReadNumber("Enter Number: ");
    
    cout << "My ceil Result : " << MyCeilMethod1(Number) << endl;
    cout << "C++ ceil Result: " << ceil(Number) << endl;

    /*
    cout << "My ceil Result : " << MyCeilMethod2(Number) << endl;
    cout << "C++ ceil Result: " << ceil(Number) << endl;
    */

    return 0;
}
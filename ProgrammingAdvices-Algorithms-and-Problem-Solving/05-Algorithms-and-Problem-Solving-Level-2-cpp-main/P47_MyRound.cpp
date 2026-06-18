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

float Myabs(float number){
    if (number>0)
        return number;
    else
        return number * -1;
    
}

//method1
int MyRoundMethod1(float number)
{

    int IntPart;
    IntPart=(int)number;

    float FractionsPart=GetFractionPart(number);

    if (Myabs(FractionsPart)>=0.5)
    {
        if(number>0)
            return ++IntPart;
        else
            return --IntPart;
    }else
        return IntPart;
}


/*method2
float MyRoundMethod2(float number)
{
    int ComNumber=number*10;
    int Remainder=ComNumber%10;
    int IntPart=(int)number;

    if (number>0 && Remainder>=5)
        return ++IntPart;

    else if (number>0 && Remainder<5)
        return IntPart;

    else if (number<0 && Remainder<=-5)
        return --IntPart;

    else
        return IntPart;
}
*/

int main()
{

    float Number=ReadNumber("Enter Number: ");
    
    //method1
    cout << "My Round Result : " << MyRoundMethod1(Number) << endl;
    cout << "C++ Round Result: " << round(Number) << endl;


    /*method2
        cout << "My Round Result : " << MyRoundMethod2(Number) << endl;
        cout << "C++ Round Result: " << round(Number) << endl;
     */

    

    return 0;
}
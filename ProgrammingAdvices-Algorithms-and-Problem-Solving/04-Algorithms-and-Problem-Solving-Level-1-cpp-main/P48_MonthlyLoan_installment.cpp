#include <iostream>
using namespace std;

float ReadPositiveNumber(string Message){
    float number;
    do
    {
        cout<<Message;
        cin>>number;
    } while (number<=0);
    return number;
}

float PrintMonths(float LoanAmount,float HowManyMonths)
{
    return LoanAmount/HowManyMonths;
}

int main()
{
    float LoanAmount=ReadPositiveNumber("Please Enter Loan Amount: ");
    float HowManyMonths=ReadPositiveNumber("How Many Months? ");

    cout<<PrintMonths(LoanAmount,HowManyMonths)<<" Per Month";
    return 0;
}
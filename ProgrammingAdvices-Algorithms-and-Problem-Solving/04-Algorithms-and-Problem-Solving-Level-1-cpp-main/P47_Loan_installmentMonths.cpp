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

float PrintMonths(float LoanAmount,float MonthlyInstallment)
{
    return LoanAmount/MonthlyInstallment;
}

int main()
{
    float LoanAmount=ReadPositiveNumber("Please Enter LoanAmount: ");
    float MonthlyInstallment=ReadPositiveNumber("Please Enter Monthly Installment: ");

    cout<<PrintMonths(LoanAmount,MonthlyInstallment)<<" Months";
    return 0;
}
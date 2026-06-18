#include <iostream>
using namespace std;

float ReadPositiveNumber(string Message){
    float Num;
    do
    {
        cout<<Message<<endl;
        cin>>Num;
    } while (Num<0);
    
    return Num;
}

float CalculateRemainder(float TotalBill,float CachPaid){
    return CachPaid-TotalBill;
}

int main(){

    float TotalBill=ReadPositiveNumber("Enter TotalBill: ");
    float TotalCachPaid=ReadPositiveNumber("Enter CachPaid: ");

    cout<<"\nTotal Bill = "<<TotalBill<<endl;
    cout<<"Total Cach Paid = "<<TotalCachPaid<<endl;
    cout<<"**************************\n";
    cout<<"Remainder is: "<<CalculateRemainder(TotalBill,TotalCachPaid);
    
    return 0;
}
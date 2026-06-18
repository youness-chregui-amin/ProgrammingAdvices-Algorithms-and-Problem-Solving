#include <iostream>
using namespace std;

void ReadNumber(int &num1,int &num2,int &num3){
    // int num1,num2,num3;
    cout<<"Enter number 1: ";
    cin>>num1;
    cout<<"Enter number 2: ";
    cin>>num2;
    cout<<"Enter number 3: ";
    cin>>num3;
}
int SumOf3Numbers(int num1,int num2,int num3){
    return num1+num2+num3;
}
void PrintResults(int Total){
    cout<<Total;
}
int main()
{
    int num1,num2,num3;
    ReadNumber(num1,num2,num3);
    PrintResults(SumOf3Numbers(num1,num2,num3));

    return 0;
}
#include <iostream>
using namespace std;

void ReadNumber(int &num1,int &num2,int &num3){
    cout<<"Enter number 1: ";
    cin>>num1;
    cout<<"Enter number 2: ";
    cin>>num2;
    cout<<"Enter number 3: ";
    cin>>num3;
}

int MaxOf2Numbers(int num1,int num2,int num3){
    if(num1>num2)
        return num1;
    else if (num2>num3)
        return num2;
    else 
        return num3;
}


void PrintResults(int Max){
    cout<<"Max is: "<<Max;
}

int main()
{
    int num1,num2,num3;
    ReadNumber(num1,num2,num3);
    PrintResults(MaxOf2Numbers(num1,num2,num3));

    return 0;
}
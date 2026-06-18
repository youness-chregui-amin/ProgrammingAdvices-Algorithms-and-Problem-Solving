#include <iostream>
using namespace std;

void ReadNumber(int &num1,int &num2){
    cout<<"Enter number 1: ";
    cin>>num1;
    cout<<"Enter number 2: ";
    cin>>num2;
}

int MaxOf2Numbers(int num1,int num2){
    if(num1>num2)
        return num1;
    else 
        return num2;
}


void PrintResults(int Max){
    cout<<"Max is: "<<Max;
}

int main()
{
    int num1,num2;
    ReadNumber(num1,num2);
    PrintResults(MaxOf2Numbers(num1,num2));

    return 0;
}
#include <iostream>
using namespace std;

void ReadNumber(int &num1,int &num2){
    cout<<"Enter number 1: ";
    cin>>num1;
    cout<<"Enter number 2: ";
    cin>>num2;
}

void Swap(int &num1,int &num2){
    // method1
        // int Temp;
        // Temp=num1;
        // num1=num2;
        // num2=Temp;
    // method2
        int R;
        R=num2-num1;//R=15-5=10
        num2=num2-R;//num2=15-10=5=num1
        num1=R+num2;//num1=10+5=15=num2

}


void PrintResults(int num1,int num2){
    cout<<"num1 = "<<num1<<endl;
    cout<<"num2 = "<<num2<<endl<<endl;
}

int main()
{
    int num1,num2;
    ReadNumber(num1,num2);
    PrintResults(num1,num2);
    Swap(num1,num2);
    PrintResults(num1,num2);

    return 0;
}
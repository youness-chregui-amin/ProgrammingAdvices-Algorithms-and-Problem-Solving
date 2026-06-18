#include <iostream>
using namespace std;

float ReadNumber(){
    float number;
    cout<<"Enter number: ";
    cin>>number;
    return number;
}
float CalculateHalfNumber(float Number){
    return((float)Number/2);
}

void PrintResulte(float number){
    string Result="Half number of "+to_string(number)+" is :"+to_string(CalculateHalfNumber(number));
    cout<<Result<<endl;
}

int main()
{
    PrintResulte(ReadNumber());
    return 0;
}
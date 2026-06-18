#include <iostream>
#include <cmath>
using namespace std;

float ReadNumber(string Message){
    float number;
    cout<<Message;
    cin>>number;
    return number;
}

float Myabs(float number){
    if (number>0)
        return number;
    else
        return number * -1;
    
}


int main(){

    float number=ReadNumber("Enter Number: ");
    cout<<Myabs(number)<<endl;
    cout<<abs(number);

    return 0;
}
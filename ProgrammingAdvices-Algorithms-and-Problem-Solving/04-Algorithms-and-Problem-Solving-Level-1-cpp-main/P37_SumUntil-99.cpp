#include <iostream>
using namespace std;

float ReadNumber(string Message){
    float number;

    // do
    // {
    //     Sum+=number;
        cout<<Message;
        cin>>number;
    // } while (number!=-99);
    

    // cout<<"Enter number: ";
    //     cin>>number;
    // while (number!=-99)
    // {
    //     Sum+=number;
    //     cout<<"Enter number: ";
    //     cin>>number;
    // }
    
    return number;
}

float SumNumbers(){
    float Sum=0,number=0;
    int Counter=1;

    do
    {
        number=ReadNumber("Enter Number "+to_string(Counter)+": ");
        if(number==-99){
            break;
        }
        Sum+=number;
        Counter++;
    } while (number!=-99);

    return Sum;
}

int main(){
    float Result=SumNumbers();
    cout<<"Result: "<<Result;
    
    return 0;
}
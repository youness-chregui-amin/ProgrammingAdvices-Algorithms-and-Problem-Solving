#include <iostream>
#include <string>
using namespace std;

int ReadPositiveNumber(string Message){
    int Number = 0;  
    do
    {
        cout << Message;
        
        cin >> Number;
    } while (Number <= 0);  
    
    return Number;  
}

int PrintDigits(int Number){
    int Remainder=0,Sum=0;
    while (Number>0)
    {
        Remainder = Number % 10;   // 1️⃣ استخراج آخر رقم
        Number = Number / 10;      // 2️⃣ حذف آخر رقم
        Sum+=Remainder;
    }
    return Sum; 
}

int main(){

    cout<<"\nSum Of Digits= "
    <<PrintDigits(ReadPositiveNumber("Please enter a positive number: "))
    <<"\n";

    return 0;
}
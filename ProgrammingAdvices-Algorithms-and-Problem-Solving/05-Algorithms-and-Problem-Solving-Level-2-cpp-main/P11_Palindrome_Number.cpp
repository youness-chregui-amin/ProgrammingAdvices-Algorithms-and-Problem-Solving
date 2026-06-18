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

int ReverseNumber(int Number){
    int Remainder=0,Number2=0;
    while (Number>0)
    {
        Remainder = Number % 10;   //  أي عددmod 10 يعطينا دائمًا الرقم في خانة الأحاد.
        Number = Number / 10;     //أي: الرقم في خانة الأحاد يصبح بعد الفاصلة العشرية إذا لم يكن العدد من مضاعفات 10(example 347 ÷ 10=34.7  -- 12.6 ÷ 10 = 1.26)
        Number2=Number2*10+Remainder;
        
    }
    return Number2;
}

bool IsPalindromeNumber(int Number){
    return Number==ReverseNumber(Number);
}


int main(){

    if(IsPalindromeNumber(ReadPositiveNumber("Please enter a positive number: ")))
        cout << "\nYes , it is a Palindrome number.\n";  
    else
        cout << "\nNo , it is NOT a Palindrome number.\n";

    return 0;
}
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
        Number2=Number2*10+Remainder;   //عندما نضرب أي عدد في  10 كل رقم يتحرك خانة واحدة إلى اليسار.(example 7*10=70  -- 34*10=340 =>الرقم 4 في خانة الأحاد أصبح عشرات، والرقم 3 أصبح مئات.)

    }
    return Number2; 
}

int main(){
    cout<<"Reverse is:\n"
    <<ReverseNumber(ReadPositiveNumber("Please enter a positive number: "));

    return 0;
}
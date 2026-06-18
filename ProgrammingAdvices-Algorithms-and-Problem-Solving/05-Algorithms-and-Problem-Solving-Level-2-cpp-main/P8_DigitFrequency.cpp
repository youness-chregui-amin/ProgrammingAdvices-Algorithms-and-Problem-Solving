#include <iostream>
using namespace std;

int ReadNumber(string Message){
    int Number = 0;  
    do
    {
        cout << Message;
        
        cin >> Number;
    } while (Number <= 0);  
    
    return Number;  
}

int CountDigitFrequency(short DigitToCheck,int Number){
    int FreqCount=0,Remainder=0;
    while (Number>0)
    {
        Remainder = Number % 10;   //  أي عددmod 10 يعطينا دائمًا الرقم في خانة الأحاد.
        
        Number = Number / 10;     //أي: الرقم في خانة الأحاد يصبح بعد الفاصلة العشرية إذا لم يكن العدد من مضاعفات 10(example 347 ÷ 10=34.7  -- 12.6 ÷ 10 = 1.26)
        
        if(DigitToCheck==Remainder){
            FreqCount++;
        }

    }

    return FreqCount; 
}

int main(){
    int Number=ReadNumber("Please Enter the main number: ");
    short DigitToCheck=ReadNumber("Please Enter one digit to check: ");

    cout << "\nDigit " << DigitToCheck << " Frequency is "
         << CountDigitFrequency(DigitToCheck, Number) << " Time(s).\n";
    return 0;
}
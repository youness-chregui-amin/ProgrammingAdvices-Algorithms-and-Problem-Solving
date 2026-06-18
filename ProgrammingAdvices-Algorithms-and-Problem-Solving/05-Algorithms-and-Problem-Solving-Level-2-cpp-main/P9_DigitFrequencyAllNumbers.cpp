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

void PrintAllDigitsNumbrs(int Number){
    
    for(int i=0;i<10;i++){
        short DigitFrequency=0;
        DigitFrequency=CountDigitFrequency(i,Number);

        if(DigitFrequency>0){
            cout<<"Digit "<<i<<" Frequency "
            <<DigitFrequency<<" Time(s)."<<endl;
        }
    }
}

int main(){
    int Number=ReadNumber("Please Enter the main number: ");
    PrintAllDigitsNumbrs(Number);

    return 0;
}
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

//methode1
void PrintDigits(int Number){
    int Remainder=0;
    while (Number>0)
    {

        Remainder = Number % 10;   //  أي عددmod 10 يعطينا دائمًا الرقم في خانة الأحاد.
        Number = Number / 10;     //أي: الرقم في خانة الأحاد يصبح بعد الفاصلة العشرية إذا لم يكن العدد من مضاعفات 10(example 347 ÷ 10=34.7  -- 12.6 ÷ 10 = 1.26)
        cout << Remainder << endl; 
    }
}

//method2
// void PrintDigits(int number){
//     string Num=to_string(number);//exemple (Num=1234) length=4
//     for(int i=Num.length()-1;i>=0;i--){//khasni ndir Num.length()-1 7itach Num[4] mkaynch lindex dyal 4 hoa 3 7itach kanbdao mn 0
//         cout<<Num[i]<<endl;
//     }
// }

int main(){

    PrintDigits(ReadPositiveNumber("Please enter a positive number: "));

    return 0;
}
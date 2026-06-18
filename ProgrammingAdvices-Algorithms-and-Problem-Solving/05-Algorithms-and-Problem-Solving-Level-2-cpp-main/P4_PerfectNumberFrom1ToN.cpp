#include <iostream>
#include <cmath>
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

bool isPerfectNumber(int Number){
    int Sum=0;
    for(int i=1;i<Number;i++){
        if(Number%i==0){
            Sum+=i;
        }
    }
    return Number==Sum;
}

void PrintResults(int number){
    
    for(int i=1;i<=number;i++){
        if(isPerfectNumber(i))
            cout<<i<<" is Perfect Number\n";
    }

}

int main(){

    PrintResults(ReadPositiveNumber("Please Enter Number: "));

    return 0;
}
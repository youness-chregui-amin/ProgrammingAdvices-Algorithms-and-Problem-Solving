#include <iostream>
#include <cmath>
using namespace std;

enum enPrimNotPrime { Prime = 1, NotPrime = 2 };

int ReadPositiveNumber(string Message){
    int Number = 0;  
    do
    {
        cout << Message << endl;
        
        cin >> Number;
    } while (Number <= 0);  
    
    return Number;  
}

//Methode 1
// enPrimNotPrime CheckPrime(int Number){
//     int Num=round(Number/2);

//     for (int i = 2; i <= Num; i++)
//     {
//         if(Number%i==0)
//             return enPrimNotPrime::NotPrime;
//     }
//     return enPrimNotPrime::Prime;
// }


// Methode 2
enPrimNotPrime CheckPrime(int number){
    for(int Counter=2;Counter<=number-1;Counter++){
        if(number%Counter==0){
            return enPrimNotPrime::NotPrime;
        }
    }
    return enPrimNotPrime::Prime;
}



void PrintPrimeNumbers(int Number){

    cout << "\n";  
    cout << "Prime Numbers from " << 1 << " To " << Number;
    cout << " are : " << endl;

    for (int i = 1; i <=Number ; i++)
    {
        if(CheckPrime(i)==enPrimNotPrime::Prime){
            cout<<i<<endl;
        }
    }
    
}

int main(){
    
    PrintPrimeNumbers(ReadPositiveNumber("Please enter a positive number ? "));
    // cout<<round(1.5);
    return 0;
}
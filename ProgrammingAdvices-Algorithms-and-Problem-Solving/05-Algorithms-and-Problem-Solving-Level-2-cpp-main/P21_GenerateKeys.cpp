//********************** Method1 *****************/

#include <iostream>
#include <cstdlib> 
#include <ctime>
using namespace std;

enum enCharType { 
    SamallLetter = 1,    // Represents lowercase letters (ASCII 97 to 122).
    CapitalLetter = 2,   // Represents uppercase letters (ASCII 65 to 90).
    SpecialCharacter = 3,// Represents special characters (ASCII 33 to 47).
    Digit = 4            // Represents digits (ASCII 48 to 57).
};

int RandomNumber(int From,int To){

    int Number=rand()%(To-From+1)+From;
    return Number;
    
}

char GetRandomCharacter(enCharType CharType){

    switch (CharType)
    {
    case enCharType::SamallLetter:
        return char(RandomNumber(97,122));

    case enCharType::CapitalLetter:
        return char(RandomNumber(65,90));

    case enCharType::SpecialCharacter:
        return char(RandomNumber(33,47));

    case enCharType::Digit:
        return char(RandomNumber(48,57));
    }
    
}

int ReadPositiveNumber(string Message)
{
    int Number = 0;  
    do
    {
        cout << Message; 
        cin >> Number;           
    } while (Number <= 0);       
    return Number;
}


string GenerateWord(enCharType CharType,int Length){
//method 2 ila bghit nkhlat lcode   
// string GenerateWord(enCharType CharType,enCharType CharType2,int Length){
    
    string word;
    for(int i=1;i<=Length;i++){
        word+=GetRandomCharacter(CharType);
    }

    //method 2 ila bghit nkhlat lcode
    // for(int i=1;i<=Length;i++){
    // if(RandomNumber(1,2)==1)
    //     word+=GetRandomCharacter(CharType);
    //     else
    //     word+=GetRandomCharacter(CharType2);
    // }
    return word;
}

string GenerateKey(){
    string Key="";
    Key+=GenerateWord(enCharType::CapitalLetter,4)+"-";
    Key+=GenerateWord(enCharType::CapitalLetter,4)+"-";
    Key+=GenerateWord(enCharType::CapitalLetter,4)+"-";
    Key+=GenerateWord(enCharType::CapitalLetter,4);

    //method 2 ila bghit nkhlat lcode
    // Key+=GenerateWord(enCharType::SpecialCharacter,enCharType::SamallLetter,4)+"-";
    // Key+=GenerateWord(enCharType::CapitalLetter,enCharType::Digit,4)+"-";
    // Key+=GenerateWord(enCharType::CapitalLetter,enCharType::SpecialCharacter,4)+"-";
    // Key+=GenerateWord(enCharType::Digit,enCharType::SpecialCharacter,4);
    
    return Key;
}

void GenerateKeys(short Number){

    for(int i=1;i<=Number;i++)
    {
        cout<<"Key ["<<i<<"] : ";
        cout<<GenerateKey()<<endl;
    }
}

int main(){
    srand((unsigned)time(NULL));
 
    GenerateKeys(ReadPositiveNumber("Please enter how many keys to generate?  "));

    return 0;
}







//********************** Method2 *****************/
/*
#include <iostream>
#include <cstdlib> 
#include <ctime>
using namespace std;

int RandomNumber(int From,int To){

    int Number=rand()%(To-From+1)+From;
    return Number;
    
}

int ReadNumber(){
    int Number;
    cout<<"Please Enter Number: ";
    cin>>Number;
    return Number;
}

void GenerateKeys(int Number){
    for(int i=1;i<=Number;i++){
        cout<<"Key ["<<i<<"] : ";
        for(int j=1;j<=4;j++){
            for(int k=1;k<=4;k++){
                cout<<char(RandomNumber(65,90));
            }
            if(j<4){
                cout<<"-";
            }
        }
        
        cout<<endl;
    }
}

int main(){

    srand((unsigned)time(NULL));

    GenerateKeys(ReadNumber());

    return 0;
}
*/
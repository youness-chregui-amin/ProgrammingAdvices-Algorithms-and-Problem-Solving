#include <iostream>
using namespace std;

int ReadAge(){
    int Age;
    cout<<"Enter Age: ";
    cin>>Age;
    return Age;
}

bool ValidateNumberInRange(int Age){
    return Age>=18&&Age<=45;
}

void PrintResults(int Age){
    if(ValidateNumberInRange(Age))
        cout<<"valider\n";
    else{
        cout<<"wrong\n";
    }
}

int main()
{

    PrintResults(ReadAge());

    // int Age=ReadAge();
    // PrintResults(Age);
    // while (!ValidateNumberInRange(Age))
    // {
    //     Age=ReadAge();
    //     PrintResults(Age);
    // }
    
    return 0;
}
#include <iostream>
using namespace std;

int ReadAge(){
    int Age;
    cout<<"Enter Age: ";
    cin>>Age;
    return Age;
}

bool ValidateNumberInRange(int Age,int From,int To){
    return Age>=From&&Age<=To;
}

int ReadAgeUntilBetween(int From,int To){
    int age=0;
    do 
    {
        age=ReadAge();
        if(!ValidateNumberInRange(age,From,To)){
            cout<<age<<" is invalid age\n";
        }
    }while(!ValidateNumberInRange(age,From,To));

    return age;
}


void PrintResults(int Age){
    cout<<Age<<" is a valide age\n";
}

int main()
{
    PrintResults(ReadAgeUntilBetween(18,45));
    return 0;
}


// #include <iostream>
// using namespace std;

// int ReadAge(){
//     int Age;
//     cout<<"Enter Age: ";
//     cin>>Age;
//     return Age;
// }

// bool ValidateNumberInRange(int Age,int From,int To){
//     return Age>=From&&Age<=To;
// }

// int ReadAgeUntilBetween(int age){
//     while (!ValidateNumberInRange(age,18,45))
//     {
//         cout<<age<<" is invalid age\n";
//         age=ReadAge();
//     }    
//     return age;
// }

// void PrintResults(int Age){
//     Age= ReadAgeUntilBetween(Age);
//     cout<<Age<<" is a valide age\n";
// }

// int main()
// {
//     //methode1
//     PrintResults(ReadAge());
    
//     return 0;
// }
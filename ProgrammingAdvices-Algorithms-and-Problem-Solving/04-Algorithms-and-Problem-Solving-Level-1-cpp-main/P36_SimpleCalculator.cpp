#include <iostream>
using namespace std;

/*
في C++ القيم داخل enum لازم تكون ثوابت عددية صحيحة (integral constants).

هذا يعني ممكن تستعمل:

int (افتراضي)

أو char / unsigned char / short / ... لأنهم كلهم أنواع عددية صحيحة.

لكن ❌ لا يمكنك استعمال string literal ("+" بعلامتي تنصيص مزدوجة).
enum enOperationType{Add="+",Substract="-",Multiply="*",Divide="/"};
*/

enum enOperationType{Add='+',Substract='-',Multiply='*',Divide='/'};

float ReadNumber(string Message)
{
    float number;
    cout<<"Enter Num1: ";
    cin>>number;
    return number;
}

enOperationType ReadOpType(){
    char Operation='+';
    cout<<"Please Enter Operation Type ( + , - , * , / ):  ";
    cin>>Operation;
    return (enOperationType)Operation;
}

float Calculate(float Num1,float Num2,enOperationType OpType){
    //methode1
    // if (enOperationType::Add==OpType)
    //     return Num1+Num2;
    // else if (enOperationType::Substract==OpType)
    //     return Num1-Num2;
    // else if (enOperationType::Multiply==OpType)
    //     return Num1*Num2;
    // else if (enOperationType::Divide==OpType){
    //     if(Num2==0){
    //         cout<<"Error: division by zero!\n";
    //         return 0;
    //     }else{
    //         return Num1/Num2;
    //     }
    // } else {
    //     cout << "Error: unknown operation!\n";
    //     return 0;
    // }

    //methode2
    switch(OpType){
        case enOperationType::Add:
            return Num1+Num2;
        case enOperationType::Substract:
            return Num1-Num2;
        case enOperationType::Multiply:
            return Num1*Num2;
        case enOperationType::Divide:
            return Num1/Num2;
        default: 
            return Num1+Num2;
    }

}

int main() {

    float Number1=ReadNumber("Please enter the first number: ");
    float Number2=ReadNumber("Please enter the second number: ");
    enOperationType OpType=ReadOpType();
    cout<<Calculate(Number1,Number2,OpType);
    return 0;
}

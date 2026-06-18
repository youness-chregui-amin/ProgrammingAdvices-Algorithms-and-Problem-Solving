#include <iostream>
using namespace std;

enum enPassFail{Pass=1,Fail=2};

int ReadMark(){
    int Mark;
    cout<<"Enter number: ";
    cin>>Mark;
    return Mark;
}

enPassFail CheckMark(int Mark){
    if(Mark>=50)
        return enPassFail::Pass;
    else 
        return enPassFail::Fail;
 }

void PrintInfo(int Mark){
    if(CheckMark(Mark)==enPassFail::Pass)
        cout<<"You Pssed";
    else
        cout<<"You Faild";
}

int main()
{
    PrintInfo(ReadMark());
    return 0;
}
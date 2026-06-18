#include <iostream>
using namespace std;

enum enPassFail{Pass=1,Fail=2};

void ReadNumber(int &Mark1,int &Mark2,int &Mark3){
    cout<<"Enter number 1: ";
    cin>>Mark1;
    cout<<"Enter number 2: ";
    cin>>Mark2;
    cout<<"Enter number 3: ";
    cin>>Mark3;
}
int SumOf3Marks(int Mark1,int Mark2,int Mark3){
    return Mark1+Mark2+Mark3;
}
float CalculateAverage(int Mark1,int Mark2,int Mark3){
    return (float)SumOf3Marks(Mark1,Mark2,Mark3)/3;
}

enPassFail CheckAverage(float Average){
    if(Average>=50)
        return enPassFail::Pass;
    else
        return enPassFail::Fail;
}

void PrintResults(float Average){
    if (CheckAverage(Average)==enPassFail::Pass)
        cout<<"Your Average is: "<<Average<<" Passed";
    else
        cout<<"Your Average is: "<<Average<<" Faild";
}
int main()
{
    int Mark1,Mark2,Mark3;
    ReadNumber(Mark1,Mark2,Mark3);
    PrintResults(CalculateAverage(Mark1,Mark2,Mark3));

    return 0;
}
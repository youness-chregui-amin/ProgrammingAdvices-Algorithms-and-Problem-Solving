#include <iostream>
using namespace std;

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
    return (float)SumOf3Marks(Mark1,Mark2,Mark3)/3;//int/int=int dakchi 3lach khasni n7wal chi w7da lfloat wn9ad ndir (3.0)
}
void PrintResults(float Average){
    cout<<Average;
}
int main()
{
    int Mark1,Mark2,Mark3;
    ReadNumber(Mark1,Mark2,Mark3);
    PrintResults(CalculateAverage(Mark1,Mark2,Mark3));

    return 0;
}
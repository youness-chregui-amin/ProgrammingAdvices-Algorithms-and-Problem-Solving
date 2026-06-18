#include <iostream>
#include <cstdlib> 
#include <ctime>
using namespace std;

void FillArray(int arr[100],int &arrLength)
{
    arrLength=10;

    arr[0]=10;
    arr[1]=10;
    arr[2]=60;
    arr[3]=50;
    arr[4]=50;
    arr[5]=60;
    arr[6]=70;
    arr[7]=50;
    arr[8]=70;
    arr[9]=90;
    
}

void AddArrayElement(int Number,int arr2[100],int &arrLength)
{
    arrLength++;
    arr2[arrLength-1]=Number;
}

short FindNumberPositionInArray(int Number, int arr[100], int arrLength)
{
    
    for (int i = 0; i < arrLength; i++)
    {
        
        if (arr[i] == Number)
            return i; //n9ad return 7ta true...
    }
    
    return -1;
}

bool IsNumberInArray(int Number, int arr[100], int arrLength)
{
    return FindNumberPositionInArray(Number, arr, arrLength)!=-1;
}

void CopyDistinctNumbersToArray(int arrSource[100],int arrDestination[100],int arrLength,int &DestinationLength)
{
   //method 1
    for(int i = 0; i < arrLength ; i++)
    {
        if(!IsNumberInArray(arrSource[i],arrDestination,DestinationLength))
        {
            AddArrayElement(arrSource[i] ,arrDestination , DestinationLength);
        }
    }

    /*method 2
    bool isDistinct;
    for(int i=0;i<arrLength;i++)
    {
        isDistinct=true;
        for(int j=0;j<arrDestinationLength;j++){
            if (arrSource[i]==arrDestination[j])
            {
                isDistinct=false;
                break;
            }
        }
        if (isDistinct==true)
        {
            AddArrayElement(arrSource[i] ,arrDestination , arrDestinationLength);
        }    
    }*/ 

}

void PrintArray(int arr[100],int arrLength)
{

    for (int i = 0; i <arrLength; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

int main()
{

    int arr[100],arrLength=0,arrDestination[100],DestinationLength=0;

    FillArray(arr,arrLength);
    
    CopyDistinctNumbersToArray(arr ,arrDestination ,arrLength ,DestinationLength);

    cout<<"Array 1 elements: ";
    PrintArray(arr,arrLength);

    cout<<"length: "<<DestinationLength<<endl;

    cout<<"Array 2 distinct numbers: ";
    PrintArray(arrDestination,DestinationLength);

    return 0;
}
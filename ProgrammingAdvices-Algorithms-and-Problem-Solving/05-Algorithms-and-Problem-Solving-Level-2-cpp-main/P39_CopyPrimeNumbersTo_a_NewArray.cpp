#include <iostream>
#include <cmath>
#include <cstdlib> 
#include <ctime>
using namespace std;

enum enPrimeNotPrime{Prime=1,NotPrime=2};

int RandomNumber(int From,int To)
{
    return rand()%(To-From+1)+From;
}


void FillArrayWithRandomNumbers(int arr[100],int &arrLength)
{
    cout<<"Enter number of elements: ";
    cin>>arrLength;

    for (int i = 0; i < arrLength; i++)
    {
        arr[i]=RandomNumber(1,100);
    }
}

enPrimeNotPrime CheckPrimeNumber(int Number)
{
    int halfNumber=round(Number/2);

    for (int i = 2; i <=halfNumber; i++)
    {

        if(Number%i==0)
            return enPrimeNotPrime::NotPrime;

    }

    return enPrimeNotPrime::Prime;
}

void PrintArray(int arr[100],int arrLength)
{

    for (int i = 0; i <arrLength; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

void AddArrayElement(int Number,int arr2[100],int &arrLength){
    arrLength++;
    arr2[arrLength-1]=Number;
}

void CopyOnlyPrimaryNumbers(int arrSource[100],int arrDestination[100],int arrLength,int &arrDestinationLength)
{
    int Counter=0;
    for (int i = 0; i <arrLength; i++)
    {
        if(CheckPrimeNumber(arrSource[i])==enPrimeNotPrime::Prime)
        {
            AddArrayElement(arrSource[i],arrDestination,arrDestinationLength);
        }
        
    }
}


int main()
{
    srand((unsigned)time(NULL));

    int arr[100],arrLength;

    FillArrayWithRandomNumbers(arr,arrLength);
   
    int arr2[100],arr2Length=0;
    CopyOnlyPrimaryNumbers(arr,arr2,arrLength,arr2Length);
    
    cout<<"\nArray 1 elements: \n";
    PrintArray(arr,arrLength);

    cout<<"\nPrime Numbers in Array 2: \n";
    PrintArray(arr2,arr2Length);

    return 0;
}
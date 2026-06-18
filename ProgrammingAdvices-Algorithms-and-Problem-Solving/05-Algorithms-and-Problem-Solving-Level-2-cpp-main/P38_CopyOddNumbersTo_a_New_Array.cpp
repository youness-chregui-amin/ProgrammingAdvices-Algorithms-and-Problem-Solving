#include <iostream>
#include <cstdlib> 
#include <ctime>
using namespace std;

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

void AddArrayElement(int Number,int arr2[100],int &arrLength){
    arrLength++;
    arr2[arrLength-1]=Number;
}

void CopyOddNumbers(int arrSource[100],int arrDestination[100],int arrLength,int &arrDestinationLength)
{
    for(int i=0;i<arrLength;i++){

        //method1
        if (arrSource[i] % 2 !=0)
            AddArrayElement(arrSource[i],arrDestination , arrDestinationLength);
        
        /*method2
        if (arr[i]%2==0)
        {
            continue;
        }else{
            AddArrayElement(arr[i],arr2,arr2Length);
        }*/
        
    }
    
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
    srand((unsigned)time(NULL));

    int arr[100],arrLength=0;

    FillArrayWithRandomNumbers(arr,arrLength);
    
    int arr2[100],arr2Length=0;
    CopyOddNumbers(arr ,arr2 ,arrLength ,arr2Length);

    cout<<"Array 1 elements: ";
    PrintArray(arr,arrLength);

    cout<<"Array 2 Odd numbers: ";
    PrintArray(arr2,arr2Length);

    return 0;
}
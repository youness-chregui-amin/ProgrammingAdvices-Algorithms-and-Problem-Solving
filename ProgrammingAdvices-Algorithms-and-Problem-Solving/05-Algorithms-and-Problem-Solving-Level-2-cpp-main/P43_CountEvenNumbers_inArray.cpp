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

void PrintArray(int arr[100],int arrLength)
{

    for (int i = 0; i <arrLength; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

int EvenCount(int arr[100],int arrLength)
{
    int Counter=0;
    for(int i=0;i<arrLength;i++){

        if (arr[i] % 2 ==0){
            Counter++;
        }
        
    }
    return Counter;
}



int main()
{
    srand((unsigned)time(NULL));

    int arr[100],arrLength=0;

    FillArrayWithRandomNumbers(arr,arrLength);
    

    cout<<"Array 1 elements: ";
    PrintArray(arr,arrLength);

    cout << "\nEven Numbers count is: ";
    cout << EvenCount(arr, arrLength) << endl;

    return 0;
}
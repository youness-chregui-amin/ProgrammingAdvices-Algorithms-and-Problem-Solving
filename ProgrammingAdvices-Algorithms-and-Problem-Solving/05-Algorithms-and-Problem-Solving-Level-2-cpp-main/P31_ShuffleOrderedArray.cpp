#include <iostream>
#include <cstdlib> 
#include <ctime>
using namespace std;

int RandomNumber(int From,int To)
{
    return rand()%(To-From+1)+From;
}

int ReadPositiveNumber(string Message)
{
    int Number = 0;  
    do
    {
        cout << Message << endl;  
        cin >> Number;            
    } while (Number <= 0);       
    
    return Number;  
}

void Swap(int &A,int &B)/* Refernce in array  */
/*why we need=>send by refernce & because=>لما تكتب arr[2] هذا عنصر واحد من المصفوفة (من نوع int).(<==VERY IMPORTANT)
هذا العنصر يُمرَّر إلى الدالة تمامًا مثل أي متغير int عادي.(<==VERY IMPORTANT)
*/

{
    // arr[2] يُمرَّر إلى A كمرجع. 
    // arr[4]يُمرَّر إلى B كمرجع.

    int Temp;
    Temp=A;
    A=B;
    B=Temp;
}

void FillArrayWithRandomNumbers(int arr[100],int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        arr[i]=i+1;
    }
}

void PrintArray(int arr[100],int arrLength)
{
    for (int i = 0; i <arrLength; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void ShuffleArry(int arr[100],int arrLength)
{

    for(int i=0;i<arrLength;i++){
        Swap(arr[RandomNumber(1,arrLength)-1],arr[RandomNumber(1,arrLength)-1]);

        /*
            arr[2] = 3
            arr[4] = 5

            لكن ⚠️ لما تمررهم إلى Swap(int &A, int &B) → فأنت لا تمرر الرقم 3 و 5 كقيم، وإنما تمرر "الخانتين arr[2] و arr[4]" كـ مراجع.
            يعني داخل Swap، A عبارة عن "اسم ثاني لـ arr[2]" و B عبارة عن "اسم ثاني لـ arr[4]".
             arr[4] و B عبارة عن "اسم ثاني لـ  arr[2] عبارة عن "اسم ثاني لـ  Swap، A يعني داخل B
             
            arr[2] يُمرَّر إلى A كمرجع. 
            arr[4]يُمرَّر إلى B كمرجع.
        */
    }

}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100];
    int arrLength=ReadPositiveNumber("How many elements ?\n");

    FillArrayWithRandomNumbers(arr,arrLength);

    cout << "\nArray elements before shuffle:\n";
    PrintArray(arr,arrLength);

    ShuffleArry(arr,arrLength);

    cout << "\nArray elements after shuffle:\n";
    PrintArray(arr,arrLength);
    
    
    
    return 0;
}
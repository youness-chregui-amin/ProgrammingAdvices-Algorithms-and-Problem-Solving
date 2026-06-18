#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols)
{

    for (int i = 0; i < Rows; i++)
    {

        for (int j = 0; j < Cols; j++)
        {
            arr[i][j] = RandomNumber(1, 100);
        }
    }
}

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            cout << setw(3) << arr[i][j] << "    ";
        }
        cout << "\n";
    }
}

int RowSum(int arr[3][3], short RowNumber, short Cols)
{
    int Sum = 0;
    for (short j = 0; j < Cols; j++)
    {
        Sum += arr[RowNumber][j];
    }
    return Sum;
}

void SumMatrixRowsInArray(int arr[3][3], int arrSum[3], short Rows, short Cols)
{
    for (int i = 0; i <= Rows; i++)
    {
        arrSum[i] = RowSum(arr, i, Cols);
    }
}

void PrintRowsSumInArray(int arr[3], int Cols)
{
    cout << "\nThe the following are the sum of each row in the matrix :\n";

    for (int i = 0; i < Cols; i++)
    {
        cout << "Row " << i + 1 << " Sum = " << arr[i] << "\n";
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[3][3];
    int arrSum[3];

    FillMatrixWithRandomNumbers(arr, 3, 3);
    cout << "\n The following is a 3x3 random matrix:\n";
    PrintMatrix(arr, 3, 3);

    SumMatrixRowsInArray(arr, arrSum, 3, 3);
    PrintRowsSumInArray(arrSum, 3);

    return 0;
}
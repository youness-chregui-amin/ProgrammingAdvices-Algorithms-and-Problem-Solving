#include <iostream>
using namespace std;

void FillMatrixWithOrderedNumbers(int arr[3][3], short Rows, short Cols)
{
    short Counter = 0;
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            Counter++;
            arr[i][j] = Counter;
        }
    }
}

void TransposeMatrix(int arr[3][3], int arrTransposed[3][3], short Rows, short Cols)
{

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            arrTransposed[i][j] = arr[j][i];
        }
    }
}

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            cout << arr[i][j] << "    ";
        }
        cout << "\n";
    }
}

int main()
{
    int arr[3][3], arrTransposed[3][3];

    FillMatrixWithOrderedNumbers(arr, 3, 3);
    cout << "\nThe following is a 3x3 ordered matrix:\n";

    PrintMatrix(arr, 3, 3);

    TransposeMatrix(arr, arrTransposed, 3, 3);

    cout << "\nThe following is a 3x3 after transposed matrix:\n";
    PrintMatrix(arrTransposed, 3, 3);

    return 0;
}
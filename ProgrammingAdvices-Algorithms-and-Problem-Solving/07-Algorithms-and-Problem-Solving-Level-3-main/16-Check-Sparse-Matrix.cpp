#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            // printf(" %0*d   ", 2, arr[i][j]);
            cout << setw(3) << arr[i][j] << "    ";
        }
        cout << "\n";
    }
}

short CountNumberInMatrix(int Matrix[3][3], int Number, short Rows, short Cols)
{
    short NumberCount = 0;
    for (short i = 0; i < Rows; i++)
    {

        for (short j = 0; j < Cols; j++)
        {
            if (Matrix[i][j] == Number)
            {
                NumberCount++;
            }
        }
    }
    return NumberCount;
}

bool IsSparseMatrix(int Matrix[3][3], short Rows, short Cols)
{
    short MatrixSize = Rows * Cols;
    short Zeros = CountNumberInMatrix(Matrix, 0, Rows, Cols);

    // method 1
    return (Zeros >= MatrixSize - Zeros);

    // method 2
    // return (Zeros >= (float)MatrixSize / 2);
    
}

int main()
{
    int Matrix[3][3] = {{9, 0, 9}, {0, 9, 0}, {0, 0, 9}};

    cout << "\nMatrix:\n";
    PrintMatrix(Matrix, 3, 3);

    if (IsSparseMatrix(Matrix, 3, 3))
        cout << "\nYes: It is Sparse.";
    else
        cout << "\nNo: It's NOT Sparse.";

    return 0;
}
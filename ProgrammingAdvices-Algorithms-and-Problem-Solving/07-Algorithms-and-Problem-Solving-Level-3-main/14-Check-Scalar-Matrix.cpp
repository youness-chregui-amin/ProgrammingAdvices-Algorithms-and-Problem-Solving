#include <iostream>
#include <string>
#include <iomanip>

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

bool IsScalarMatrix(int Matrix[3][3], short Rows, short Cols)
{
    // check Diagonal elements are 1 and rest elements are 0
    short FirstDiagElement = Matrix[0][0];
    for (short i = 0; i < Rows; i++)
    {

        for (short j = 0; j < Cols; j++)
        {
            // check for diagonals element
            if (i == j && Matrix[i][j] != FirstDiagElement)
            {
                return false;
            }
            // check for rest elements
            else if (i != j && Matrix[i][j] != 0)
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int Matrix[3][3] = {{9, 0, 0}, {0, 9, 0}, {0, 0, 9}};

    cout << "\nMatrix:\n";
    PrintMatrix(Matrix, 3, 3);

    if (IsScalarMatrix(Matrix, 3, 3))
        cout << "\nYes: Matrix is Scalar.";
    else
        cout << "\nNo: Matrix is NOT Scalar.";

    return 0;
}
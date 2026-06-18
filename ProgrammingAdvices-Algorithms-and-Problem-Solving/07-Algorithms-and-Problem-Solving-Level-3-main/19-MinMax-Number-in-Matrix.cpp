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

int MinNumberInMatrix(int Matrix[3][3], short Rows, short Cols)
{
    short Min = Matrix[0][0];
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (Matrix[i][j] < Min)
            {
                Min = Matrix[i][j];
            }
        }
    }
    return Min;
}

int MaxNumberInMatrix(int Matrix[3][3], short Rows, short Cols)
{
    short Max = Matrix[0][0];
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (Matrix[i][j] > Max)
            {
                Max = Matrix[i][j];
            }
        }
    }
    return Max;
}

int main()
{
    int Matrix[3][3] = {{77, 5, 12}, {78, 20, 6}, {14, 2, 9}};

    cout << "\nMatrix:\n";
    PrintMatrix(Matrix, 3, 3);

    cout << "\nMinimum Number is: ";
    cout << MinNumberInMatrix(Matrix, 3, 3);

    cout << "\n\nMax Number is: ";
    cout << MaxNumberInMatrix(Matrix, 3, 3);

    return 0;
}
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

bool IsNumberInMatrix(int Matrix[3][3], int Number, short Rows, short Cols)
{
    short NumberCount = 0;
    for (short i = 0; i < Rows; i++)
    {

        for (short j = 0; j < Cols; j++)
        {
            if (Matrix[i][j] == Number)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int Matrix[3][3] = {{77, 5, 12}, {22, 20, 1}, {1, 0, 9}};

    cout << "\nMatrix:\n";
    PrintMatrix(Matrix, 3, 3);

    int Number;
    cout << "\nEnter the number to Check if in matrix? ";
    cin >> Number;

    if (IsNumberInMatrix(Matrix, Number, 3, 3))
        cout << "\nYes it is there.\n";
    else
        cout << "\nNo: It's NOT there.\n";

    return 0;
}
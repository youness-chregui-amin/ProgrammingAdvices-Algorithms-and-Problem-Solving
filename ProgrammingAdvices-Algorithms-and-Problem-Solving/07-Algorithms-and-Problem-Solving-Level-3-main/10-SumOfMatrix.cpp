#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iomanip>
#include <string>
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
            arr[i][j] = RandomNumber(1, 10);
        }
    }
}

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            printf(" %0*d   ", 2, arr[i][j]);
        }
        cout << "\n";
    }
}

int SumOfMatrix(int Matrix[3][3], short Rows, short Cols)
{
    short Sum = 0;

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            Sum += Matrix[i][j];
        }
    }
    return Sum;
}

int main()
{
    srand((unsigned)time(NULL));

    int Matrix[3][3];

    FillMatrixWithRandomNumbers(Matrix, 3, 3);
    cout << "\nThe following is a 3x3 random matrix:\n";
    PrintMatrix(Matrix, 3, 3);

    cout << "\nSum of Matrix is:" << SumOfMatrix(Matrix, 3, 3);

    return 0;
}
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
            arr[i][j] = RandomNumber(1, 10);
        }
    }
}

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            printf(" %0*d   ", 2, arr[i][j]);
        }
        cout << "\n";
    }
}

void MultiplyMatrix(int Matrix1[3][3], int Matrix2[3][3],
                    int MatrixResults[3][3], short Rows, short Cols)
{
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            MatrixResults[i][j] = Matrix1[i][j] * Matrix2[i][j];
        }
    }
}

void PrintMatrices(int arr[3][3], int arr2[3][3], int arrResult[3][3], short Rows, short Cols)
{

    cout << "\n The following is a 3x3 random matrix 1:\n";

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            cout << setw(3) << arr[i][j] << "    ";
        }
        cout << endl;
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int Matrix1[3][3], Matrix2[3][3], MatrixResults[3][3];

    FillMatrixWithRandomNumbers(Matrix1, 3, 3);
    cout << "\nMatrix1:\n";
    PrintMatrix(Matrix1, 3, 3);

    FillMatrixWithRandomNumbers(Matrix2, 3, 3);
    cout << "\nMatrix2:\n";
    PrintMatrix(Matrix2, 3, 3);

    MultiplyMatrix(Matrix1, Matrix2, MatrixResults, 3, 3);

    cout << "\nResults:\n";
    PrintMatrix(MatrixResults, 3, 3);

    return 0;
}
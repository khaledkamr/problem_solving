#include <iostream>
#define ll long long
using namespace std;

int row = 0, col = 0;

int sum_matrix(int X[][100], int Y[][100], int Rows, int Cols)
{
    cout << X[row][col] + Y[row][col];

    if (col != Cols - 1)
    {
        col++;
        cout << " ";
    }
    else if (col == Cols - 1 && row == Rows - 1)
    {
        return 0;
    }
    else if (col == Cols - 1)
    {
        row++;
        col = 0;
        cout << endl;
    }

    return sum_matrix(X, Y, Rows, Cols);
}

int main()
{
    int A[100][100], B[100][100];
    int rows, cols;

    cin >> rows >> cols;

    for (int r = 0; r < rows; r++)
    {
        for (int c = 0; c < cols; c++)
        {
            cin >> A[r][c];
        }
    }

    for (int r = 0; r < rows; r++)
    {
        for (int c = 0; c < cols; c++)
        {
            cin >> B[r][c];
        }
    }

    sum_matrix(A, B, rows, cols);

    return 0;
}

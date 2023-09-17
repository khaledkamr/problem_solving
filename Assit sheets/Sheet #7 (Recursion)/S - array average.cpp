#include <iostream>
#include<iomanip>
#define ll long long
using namespace std;

double Array_average(double x[], double size, int indx)
{
    if (indx == size)
    {
        return 0;
    }

    return x[indx] / size + Array_average(x, size, ++indx);
}

int main()
{
    double size, arr[100];
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << fixed << setprecision(6) << Array_average(arr, size, 0);
    return 0;
}

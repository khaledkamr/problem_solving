#include <iostream>
#include<string>
#include<algorithm>
#define ll long long
using namespace std;

int Max_number(int arr[], int size, int indx, int max)
{
    if (max < arr[indx])
    {
        max = arr[indx];
    }

    if (indx == size - 1)
    {
        return max;
    }
    return Max_number(arr, size, ++indx, max);
}

int main()
{
    int size, arr[1000];
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int n = INT_MIN;
    cout << Max_number(arr, size, 0, n);

    return 0;
}

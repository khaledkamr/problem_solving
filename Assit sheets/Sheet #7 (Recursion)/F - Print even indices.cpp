#include <iostream>
#include<string>
#include<algorithm>
#define ll long long
using namespace std;

int rec(int arr[], int indx)
{
    if (indx % 2 == 0)
    {
        cout << arr[indx] << " ";
    }
    if (indx == 0)
    {
        return 0;
    }

    return rec(arr, --indx);
}

int main()
{
    int size, arr[1000];
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    rec(arr, size - 1);
    return 0;
}

#include <iostream>
#include<string>
#include<algorithm>
#define ll long long
using namespace std;

ll Summation(int arr[], int size, int indx, ll sum)
{
    sum += arr[indx];

    if (indx == size - 1)
    {
        return sum;
    }
    return Summation(arr, size, ++indx, sum);
}

int main()
{
    int size, arr[1000];
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << Summation(arr, size, 0, 0);

    return 0;
}

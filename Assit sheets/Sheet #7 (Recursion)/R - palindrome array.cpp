#include <iostream>
#define ll long long
using namespace std;

bool Palindrome_array(int x[], int size, int indx)
{
    if (indx == size)
    {
        return 1;
    }

    return (x[indx] == x[size - indx - 1]) && Palindrome_array(x, size, ++indx);
}

int main()
{
    int size, arr[100000];
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    if (Palindrome_array(arr, size, 0))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}

#include <iostream>
#define ll long long
using namespace std;

ll Suffix_sum(ll arr[], int size, int count)
{
    if (count == 0)
    {
        return 0;
    }

    return arr[--size] + Suffix_sum(arr, size, --count);
}

int main()
{
    int size, count;
    cin >> size >> count;
    ll arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << Suffix_sum(arr, size, count);

    return 0;
}

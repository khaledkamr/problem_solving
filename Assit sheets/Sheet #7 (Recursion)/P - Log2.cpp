#include <iostream>
#define ll long long
using namespace std;
int Count = 0;

int Log2(ll x)
{
    if (x == 1)
    {
        cout << Count;
        return 0;
    }

    Count++;

    return Log2(x / 2);
}

int main()
{
    ll n;
    cin >> n;
    Log2(n);

    return 0;
}

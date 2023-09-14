#include <iostream>
#include<cmath>
#include<iomanip>
#define ll long long
using namespace std;

int rec(int n)
{
    if (n == 0)
    {
        return 0;
    }

    cout << n;

    if (n != 1)
    {
        cout << " ";
    }
    return rec(--n);
}

int main()
{
    int x;
    cin >> x;
    rec(x);

    return 0;
}

#include <iostream>
#define ll long long
using namespace std;

int Count = 0;

int seq(int x)
{
    Count++;

    if (x == 1)
    {
        cout << Count;
        return 0;
    }
    else if (x % 2 == 0)
    {
        return seq(x / 2);
    }
    else
    {
        return seq(3 * x + 1);
    }
}

int main()
{
    int n;
    cin >> n;
    seq(n);

    return 0;
}

#include <iostream>
#include<cmath>
#include<iomanip>
#define ll long long
using namespace std;

int rec(int n, int count)
{
    if (n == 0)
    {
        return 0;
    }

    cout << count << endl;
    return rec(--n, ++count);
}

int main()
{
    int x;
    cin >> x;
    rec(x, 1);

    return 0;
}

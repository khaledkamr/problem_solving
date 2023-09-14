#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ll l, r, m;
    cin >> l >> r >> m;
    ll pro = 1;

    for (ll i = l; i <= r; i++)
    {
        pro *= i;
        pro %= m;
    }

    cout << pro << endl;
    return 0;
}

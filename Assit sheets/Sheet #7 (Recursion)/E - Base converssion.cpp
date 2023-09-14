#include <iostream>
#include<string>
#include<algorithm>
#define ll long long
using namespace std;

int rec(int n, string& bin)
{
    if (n == 0)
    {
        return 0;
    }

    int dig = n % 2;
    bin += dig + '0';
    return rec(n / 2, bin);
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x;
        string bin = "";
        cin >> x;
        rec(x, bin);
        reverse(bin.begin(), bin.end());
        cout << bin << endl;
    }

    return 0;
}

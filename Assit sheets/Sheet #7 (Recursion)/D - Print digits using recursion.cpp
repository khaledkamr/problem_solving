#include <iostream>
#include<string>
#include<algorithm>
#define ll long long
using namespace std;

int rec(string str, int indx)
{
    cout << str[indx] << " ";

    if (indx == 0)
    {
        return 0;
    }
    return rec(str, --indx);
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string x;
        cin >> x;
        reverse(x.begin(), x.end());
        rec(x, x.size() - 1);
        cout << endl;
    }

    return 0;
}

#include <iostream>
#include<string>
#include<algorithm>
#define ll long long
using namespace std;

int pyramid(int l, int s)
{
    for (int i = 0; i < l; i++)
    {
        cout << " ";
    }
    for (int i = 0; i < s; i++)
    {
        cout << "*";
    }
    cout << endl;

    if (l == 0)
    {
        return 0;
    }
    return pyramid(--l, s + 2);
}

int main()
{
    int n;
    cin >> n;
    int spaces = n - 1, stars = 1;
    pyramid(spaces, stars);

    return 0;
}

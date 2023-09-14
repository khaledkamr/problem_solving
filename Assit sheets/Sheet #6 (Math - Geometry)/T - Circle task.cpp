#include <iostream>
#include<cmath>
#include<iomanip>
#define ll long long
using namespace std;

int main()
{
    double x, y, r, n;
    cin >> x >> y >> r >> n;

    while (n--)
    {
        double x2, y2, d;
        cin >> x2 >> y2;

        d = sqrt(pow(x2 - x, 2) + pow(y2 - y, 2));

        if (d <= r)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}

#include <iostream>
#include<cmath>
#include<iomanip>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        int X1, Y1, X2, Y2, n, area;
        cin >> n;
        cin >> X1 >> Y1 >> X2 >> Y2;

        int maxX = X1, maxY = Y1;
        int minX = X2, minY = Y2;

        while (--n)
        {
            cin >> X1 >> Y1 >> X2 >> Y2;
            maxX = max(maxX, X1);
            maxY = max(maxY, Y1);
            minX = min(minX, X2);
            minY = min(minY, Y2);
        }

        if (minX > maxX && minY > maxY)
        {
            area = (minX - maxX) * (minY - maxY);
            cout << "Case #" << i << ": " << area << endl;
        }
        else
        {
            area = 0;
            cout << "Case #" << i << ": " << area << endl;
        }

    }

    return 0;
}

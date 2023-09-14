#include <iostream>
#include<cmath>
#include<iomanip>
#define ll long long
using namespace std;

int main()
{
    double X1, X2, X3, X4, Y1, Y2, Y3, Y4;
    cin >> X1 >> Y1 >> X2 >> Y2;
    cin >> X3 >> Y3 >> X4 >> Y4;

    double minX, minY, maxX, maxY;
    minX = min(min(X1, X2), min(X3, X4));
    maxX = max(max(X1, X2), max(X3, X4));
    minY = min(min(Y1, Y2), min(Y3, Y4));
    maxY = max(max(Y1, Y2), max(Y3, Y4));

    int n;
    cin >> n;

    while (n--)
    {
        double X, Y;
        cin >> X >> Y;

        if (X > maxX || X < minX)
        {
            cout << "NO" << endl;
        }
        else if (Y > maxY || Y < minY)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}

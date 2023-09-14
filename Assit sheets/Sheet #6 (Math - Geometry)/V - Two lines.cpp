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

    double slope1, slope2;
    slope1 = (Y2 - Y1) * (X4 - X3);
    slope2 = (Y4 - Y3) * (X2 - X1);

    if (slope1 == slope2)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}

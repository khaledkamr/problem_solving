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

    double midX12, midY12, midX34, midY34, r1, r2;
    r1 = sqrt(pow(X2 - X1, 2) + pow(Y2 - Y1, 2)) / 2;
    r2 = sqrt(pow(X4 - X3, 2) + pow(Y4 - Y3, 2)) / 2;
    midX12 = (X1 + X2) / 2;//the midpoint between (X1,Y1),(X2,Y2)
    midY12 = (Y1 + Y2) / 2;//the midpoint between (X1,Y1),(X2,Y2)
    midX34 = (X3 + X4) / 2;//the midpoint between (X3,Y3),(X4,Y4)
    midY34 = (Y3 + Y4) / 2;//the midpoint between (X3,Y3),(X4,Y4)

    double dis;//the distance between center of circle1 and circle2
    dis = sqrt(pow(midX34 - midX12, 2) + pow(midY34 - midY12, 2));

    if (dis <= r1 + r2)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}

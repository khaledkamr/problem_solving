#include <iostream>
#include<cmath>
#include<iomanip>
#define ll long long
using namespace std;

int main()
{
    double X1, Y1, X2, Y2, dis;
    cin >> X1 >> Y1 >> X2 >> Y2;

    dis = sqrt(pow(X2 - X1, 2) + pow(Y2 - Y1, 2));
    cout << fixed << setprecision(9) << dis;

    return 0;
}

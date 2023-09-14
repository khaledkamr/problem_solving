#include <iostream>
#include<cmath>
#include<iomanip>
#define ll long long
using namespace std;

int main()
{
    double A, B, C;
    cin >> A >> B >> C;

    if (A + B <= C || A + C <= B || B + C <= A)
    {
        cout << "Invalid" << endl;
    }
    else
    {
        cout << "Valid" << endl;
        int s = (A + B + C) / 2;
        cout << fixed << setprecision(9) << sqrt(s * (s - A) * (s - B) * (s - C));
    }

    return 0;
}

#include <iostream>
#include<cmath>
#include<iomanip>
#define ll long long
using namespace std;

int main()
{
    int r, s, ds, dc;
    cin >> r >> s;

    ds = s * sqrt(2); //the diagonal of the square
    dc = r * 2; //the diameter of the circle

    if (ds <= dc)
    {
        cout << "Circle";
    }
    else if (r <= s / 2)
    {
        cout << "Square";
    }
    else
    {
        cout << "Complex";
    }

    return 0;
}

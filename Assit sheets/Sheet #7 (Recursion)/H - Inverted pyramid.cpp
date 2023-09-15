#include <iostream>
#include<string>
#include<algorithm>
#define ll long long
using namespace std;

int Inverted_pyramid(int l, int s)
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

    if (s == 1)
    {
        return 0;
    }
    return Inverted_pyramid(++l, s - 2);
}

int main()
{
    int n;
    cin >> n;
    int spaces = 0, stars = n + (n - 1);
    Inverted_pyramid(spaces, stars);

    return 0;
}

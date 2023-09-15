#include <iostream>
#include<string>
#include<algorithm>
#define ll long long
using namespace std;

ll Fact(int n, ll fact)
{
    fact *= n;

    if (n == 1)
    {
        return fact;
    }
    return Fact(--n, fact);
}

int main()
{
    int n;
    cin >> n;
    cout << Fact(n, 1);

    return 0;
}

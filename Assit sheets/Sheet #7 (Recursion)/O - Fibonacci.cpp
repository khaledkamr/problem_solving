#include <iostream>
#define ll long long
using namespace std;
int n1 = 0, n2 = 1, n3;
int num = 2;

int fibonacci(int x)
{
    ++num;

    if (x == 1)
    {
        return n1;
    }
    else if (x == 2)
    {
        return n2;
    }
    else
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
    }

    if (num == x)
    {
        return n3;
    }

    return fibonacci(x);
}

int main()
{
    int n;
    cin >> n;

    cout << fibonacci(n);

    return 0;
}

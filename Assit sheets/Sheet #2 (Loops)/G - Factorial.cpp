#include <iostream>
#include <string>
using namespace std;

int main()
{
    long long t, n;

    cin >> t;

    while (t--)
    {
        cin >> n;

        if (n == 0)
        {
            n = 1;
        }
        else
        {
            for (int i = n - 1; i > 0; i--)
            {
                n *= i;
            }
        }

        cout << n << endl;
    }

    return 0;
}


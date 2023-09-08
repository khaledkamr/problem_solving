#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    string prime = "YES";

    cin >> n;

    if (n == 1)
    {
        prime = "NO";
        cout << prime;
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                prime = "NO";
                break;
            }
        }
        cout << prime;
    }

    return 0;
}


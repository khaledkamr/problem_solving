#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;

    cin >> n;

    for (int i = 1; i <= 12; i++)
    {
        cout << n << " * " << i << " = " << n * i << endl;
    }

    return 0;
}


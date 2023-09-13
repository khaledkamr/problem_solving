#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
#include<cmath>
using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int x = 0; x <= pow(10, 9); x++)
	{
		for (int y = 0; y <= pow(10, 9); y++)
		{
			int z = (pow(x, 2) + pow(y, 2));

			if (z % n == 0)
			{
				cout << x << " " << y << endl;
				return 0;
			}
		}
	}

	cout << "No solutions" << endl;

}

// another solution
/*
int main()
{
    int n;
	cin >> n;

	cout << "0 0";

	return 0;
}
*/
// don't ask how
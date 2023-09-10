#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
#include<cmath>
using namespace std;

int main()
{
	int size, arr[100], t;
	cin >> t;

	while (t--)
	{
		cin >> size;

		for (int i = 0; i < size; i++)
		{
			cin >> arr[i];
		}

		int minsum = arr[0] + arr[1] + (2 - 1);

		for (int i = 0; i < size - 1; i++)
		{
			for (int j = i + 1; j < size; j++)
			{
				if (arr[i] + arr[j] + ((j + 1) - (i + 1)) < minsum && j > i)
				{
					minsum = arr[i] + arr[j] + ((j + 1) - (i + 1));
				}
			}
		}
		cout << minsum << endl;
	}

	return 0;
}